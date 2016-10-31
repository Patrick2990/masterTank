// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let Link = require('./Link.js');
let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class MapGraph {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.mapToOdom = new geometry_msgs.msg.Transform();
    this.posesId = [];
    this.poses = [];
    this.links = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type MapGraph
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [mapToOdom]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.mapToOdom, bufferInfo);
    // Serialize the length for message field [posesId]
    bufferInfo = _serializer.uint32(obj.posesId.length, bufferInfo);
    // Serialize message field [posesId]
    obj.posesId.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [poses]
    bufferInfo = _serializer.uint32(obj.poses.length, bufferInfo);
    // Serialize message field [poses]
    obj.poses.forEach((val) => {
      bufferInfo = geometry_msgs.msg.Pose.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [links]
    bufferInfo = _serializer.uint32(obj.links.length, bufferInfo);
    // Serialize message field [links]
    obj.links.forEach((val) => {
      bufferInfo = Link.serialize(val, bufferInfo);
    });
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type MapGraph
    let tmp;
    let len;
    let data = new MapGraph();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [mapToOdom]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.mapToOdom = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [posesId]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [posesId]
    data.posesId = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.posesId[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [poses]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [poses]
    data.poses = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = geometry_msgs.msg.Pose.deserialize(buffer);
      data.poses[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [links]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [links]
    data.links = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = Link.deserialize(buffer);
      data.links[i] = tmp.data;
      buffer = tmp.buffer;
    }
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/MapGraph';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '20873aaf4e19c32bcd6517d54c1e8028';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    Header header
    
    ##
    # /map to /odom transform
    # Always identity when the graph is optimized from the latest pose.
    ##
    geometry_msgs/Transform mapToOdom
    
    # The poses
    int32[] posesId
    geometry_msgs/Pose[] poses
    
    # The links
    Link[] links
    
    
    
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Transform
    # This represents the transform between two coordinate frames in free space.
    
    Vector3 translation
    Quaternion rotation
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: rtabmap_ros/Link
    #class rtabmap::Link
    #{
    #   int from;
    #   int to;
    #   Type type;
    #   Transform transform;
    #   float variance;
    #}
    
    int32 fromId
    int32 toId
    int32 type
    geometry_msgs/Transform transform
    float32 rotVariance
    float32 transVariance
    `;
  }

};

module.exports = MapGraph;
