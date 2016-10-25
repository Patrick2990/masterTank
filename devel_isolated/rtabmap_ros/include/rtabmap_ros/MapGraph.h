// Generated by gencpp from file rtabmap_ros/MapGraph.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_MAPGRAPH_H
#define RTABMAP_ROS_MESSAGE_MAPGRAPH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Transform.h>
#include <geometry_msgs/Pose.h>
#include <rtabmap_ros/Link.h>

namespace rtabmap_ros
{
template <class ContainerAllocator>
struct MapGraph_
{
  typedef MapGraph_<ContainerAllocator> Type;

  MapGraph_()
    : header()
    , mapToOdom()
    , posesId()
    , poses()
    , links()  {
    }
  MapGraph_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mapToOdom(_alloc)
    , posesId(_alloc)
    , poses(_alloc)
    , links(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _mapToOdom_type;
  _mapToOdom_type mapToOdom;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _posesId_type;
  _posesId_type posesId;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;

   typedef std::vector< ::rtabmap_ros::Link_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rtabmap_ros::Link_<ContainerAllocator> >::other >  _links_type;
  _links_type links;




  typedef boost::shared_ptr< ::rtabmap_ros::MapGraph_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_ros::MapGraph_<ContainerAllocator> const> ConstPtr;

}; // struct MapGraph_

typedef ::rtabmap_ros::MapGraph_<std::allocator<void> > MapGraph;

typedef boost::shared_ptr< ::rtabmap_ros::MapGraph > MapGraphPtr;
typedef boost::shared_ptr< ::rtabmap_ros::MapGraph const> MapGraphConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_ros::MapGraph_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_ros::MapGraph_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rtabmap_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rtabmap_ros': ['/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/rtabmap_ros/src/rtabmap_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::MapGraph_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::MapGraph_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::MapGraph_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "20873aaf4e19c32bcd6517d54c1e8028";
  }

  static const char* value(const ::rtabmap_ros::MapGraph_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x20873aaf4e19c32bULL;
  static const uint64_t static_value2 = 0xcd6517d54c1e8028ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_ros/MapGraph";
  }

  static const char* value(const ::rtabmap_ros::MapGraph_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
Header header\n\
\n\
##\n\
# /map to /odom transform\n\
# Always identity when the graph is optimized from the latest pose.\n\
##\n\
geometry_msgs/Transform mapToOdom\n\
\n\
# The poses\n\
int32[] posesId\n\
geometry_msgs/Pose[] poses\n\
\n\
# The links\n\
Link[] links\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: rtabmap_ros/Link\n\
#class rtabmap::Link\n\
#{\n\
#   int from;\n\
#   int to;\n\
#   Type type;\n\
#   Transform transform;\n\
#   float variance;\n\
#}\n\
\n\
int32 fromId\n\
int32 toId\n\
int32 type\n\
geometry_msgs/Transform transform\n\
float32 rotVariance\n\
float32 transVariance\n\
";
  }

  static const char* value(const ::rtabmap_ros::MapGraph_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mapToOdom);
      stream.next(m.posesId);
      stream.next(m.poses);
      stream.next(m.links);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MapGraph_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_ros::MapGraph_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_ros::MapGraph_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mapToOdom: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.mapToOdom);
    s << indent << "posesId[]" << std::endl;
    for (size_t i = 0; i < v.posesId.size(); ++i)
    {
      s << indent << "  posesId[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.posesId[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
    s << indent << "links[]" << std::endl;
    for (size_t i = 0; i < v.links.size(); ++i)
    {
      s << indent << "  links[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rtabmap_ros::Link_<ContainerAllocator> >::stream(s, indent + "    ", v.links[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_MAPGRAPH_H
