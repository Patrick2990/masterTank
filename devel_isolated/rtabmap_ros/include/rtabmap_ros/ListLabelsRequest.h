// Generated by gencpp from file rtabmap_ros/ListLabelsRequest.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_LISTLABELSREQUEST_H
#define RTABMAP_ROS_MESSAGE_LISTLABELSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rtabmap_ros
{
template <class ContainerAllocator>
struct ListLabelsRequest_
{
  typedef ListLabelsRequest_<ContainerAllocator> Type;

  ListLabelsRequest_()
    {
    }
  ListLabelsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListLabelsRequest_

typedef ::rtabmap_ros::ListLabelsRequest_<std::allocator<void> > ListLabelsRequest;

typedef boost::shared_ptr< ::rtabmap_ros::ListLabelsRequest > ListLabelsRequestPtr;
typedef boost::shared_ptr< ::rtabmap_ros::ListLabelsRequest const> ListLabelsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rtabmap_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rtabmap_ros': ['/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap_ros/src/rtabmap_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_ros/ListLabelsRequest";
  }

  static const char* value(const ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ListLabelsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rtabmap_ros::ListLabelsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_LISTLABELSREQUEST_H
