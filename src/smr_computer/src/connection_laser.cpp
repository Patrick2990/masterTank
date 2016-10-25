#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/fcntl.h>
#include <boost/regex.hpp>

class Connection
{
private:
  int socket_;
  bool open_;
  char * buffer_;
  int buffer_size_;
  int data_begin_;
  int data_cnt_;

  char* findNewLine()
  {
    return (char*)memchr( &buffer_[data_begin_], '\n', data_cnt_ );
  }

public:
  Connection( int buffer_size = 1024 ) :
    socket_(-1),
    open_(false),
    buffer_size_( buffer_size ),
    data_begin_(0),
    data_cnt_(0)
  {
    buffer_ = new char[buffer_size];
  }

  ~Connection()
  {
    close(socket_);
  }

  bool connect( const char * host, int port )
  {
    // Create Socket
    socket_ = ::socket(AF_INET, SOCK_STREAM, 0);
    if( socket_ == -1 )
    {
      return false;
    }

    // Connect
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons ( port );
    ::inet_aton( host, &addr.sin_addr );

    int connect_result = ::connect( socket_, (struct sockaddr*)&addr, sizeof(addr) );
    if( connect_result != 0 )
    {
      return false;
    }

    // Set non-blocking
    ::fcntl( socket_, F_SETFL, O_NONBLOCK );
    return true;
  }

  void resetBuffer()
  {
    if( data_begin_ != 0 )
    {
      // Move existing data to beginning of buffer
      ::memcpy( &buffer_[0], &buffer_[data_begin_], data_cnt_ );
      data_begin_ = 0;
    }
  }

  void clearBuffer() {
    int recv_cnt = ::recv( socket_, &buffer_[data_begin_ + data_cnt_], buffer_size_, 0);
    ::memset(&buffer_[0], 0, buffer_size_);
    data_begin_ = 0;
    data_cnt_ = 0;
    printf("Discarded %d Bytes\n", recv_cnt);
  }

  int receiveData()
  {
    resetBuffer();
    int free = buffer_size_ - (data_begin_ + data_cnt_);
    int recv_cnt = 0;
    int i =0;
    int timeout = 1000;
    // 1000 iterations? "timeout"
    // 1777 = bytes in laser scan message
    while(free > buffer_size_- 1777 && i < 1000)
    {
      // Receive available data from the socket
      recv_cnt = ::recv( socket_, &buffer_[data_begin_ + data_cnt_], free, 0);
      if (recv_cnt <= 0)
      {
        i++;
        usleep(10000);
        continue;
      }
      data_cnt_ += recv_cnt;
      free -= recv_cnt;
    }
    if (data_cnt_ == 0 || i >= timeout-1)
    {
      printf("TOO MANY ITERATIONS\n");
      return 0;
    }
    printf("iterations: %d\n", i);
    //printf("Received = %s", buffer_);
    return data_cnt_;
  }

  bool hasLine()
  {
    return ( findNewLine() != 0 );
  }

  int popLine( std::string& out, bool append = false )
  {
    char* newline = findNewLine();
    if( newline == 0 )
    {
      return 0;
    }
    else
    {
      // Put the data into the string
      if( append == false )
      {
        out.clear();
      }
      int length = (int)(newline - &buffer_[data_begin_] + 1);
      out.append( &buffer_[data_begin_], length );

      // Move the start of the buffer
      data_begin_ += length;
      data_cnt_ -= length;
      return length;
    }
  }

  void emptyAndGetLastInBuffer( std::string& out, bool append = false ){
    while(popLine(out, append));
  }

  int sendLine( const std::string& command )
  {
    int cnt = ::send( socket_, command.c_str(), command.length(), 0 );
    return cnt + ::send( socket_, "\n", 1, 0 );
  }

};
