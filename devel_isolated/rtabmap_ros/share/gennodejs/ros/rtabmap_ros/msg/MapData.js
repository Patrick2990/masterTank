// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let MapGraph = require('./MapGraph.js');
let NodeData = require('./NodeData.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class MapData {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.graph = new MapGraph();
    this.nodes = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type MapData
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [graph]
    bufferInfo = MapGraph.serialize(obj.graph, bufferInfo);
    // Serialize the length for message field [nodes]
    bufferInfo = _serializer.uint32(obj.nodes.length, bufferInfo);
    // Serialize message field [nodes]
    obj.nodes.forEach((val) => {
      bufferInfo = NodeData.serialize(val, bufferInfo);
    });
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type MapData
    let tmp;
    let len;
    let data = new MapData();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [graph]
    tmp = MapGraph.deserialize(buffer);
    data.graph = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [nodes]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [nodes]
    data.nodes = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = NodeData.deserialize(buffer);
      data.nodes[i] = tmp.data;
      buffer = tmp.buffer;
    }
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/MapData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ceb3cc5db87e14b6dac5adad9c3f8a98';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    Header header
    
    ##################
    # Optimized graph
    ##################
    MapGraph graph
    
    ##################
    # Graph data
    ##################
    NodeData[] nodes
    
    
    
    
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
    MSG: rtabmap_ros/MapGraph
    
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
    ================================================================================
    MSG: rtabmap_ros/NodeData
    
    int32 id
    int32 mapId
    int32 weight
    float64 stamp
    string label
    
    # Pose from odometry not corrected
    geometry_msgs/Pose pose
    
    # Ground truth (optional)
    geometry_msgs/Pose groundTruthPose
    
    # compressed image in /camera_link frame
    # use rtabmap::util3d::uncompressImage() from "rtabmap/core/util3d.h"
    uint8[] image
    
    # compressed depth image in /camera_link frame
    # use rtabmap::util3d::uncompressImage() from "rtabmap/core/util3d.h"
    uint8[] depth
    
    # Camera models
    float32[] fx
    float32[] fy
    float32[] cx
    float32[] cy
    float32[] width
    float32[] height
    float32 baseline
    # local transform (/base_link -> /camera_link)
    geometry_msgs/Transform[] localTransform
    
    # compressed 2D laser scan in /base_link frame
    # use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
    uint8[] laserScan
    int32 laserScanMaxPts
    float32 laserScanMaxRange
    geometry_msgs/Transform laserScanLocalTransform
    
    # compressed user data
    # use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
    uint8[] userData
    
    # compressed occupancy grid
    # use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
    uint8[] grid_ground
    uint8[] grid_obstacles
    float32 grid_cell_size
    Point3f grid_view_point
    
    # std::multimap<wordId, cv::Keypoint>
    # std::multimap<wordId, pcl::PointXYZ>
    int32[] wordIds
    KeyPoint[] wordKpts
    sensor_msgs/PointCloud2 wordPts
    
    # compressed descriptors
    # use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
    uint8[] descriptors
    
    ================================================================================
    MSG: rtabmap_ros/Point3f
    #class cv::Point3f
    #{
    #    float x;
    #    float y;
    #    float z;
    #}
    
    float32 x
    float32 y
    float32 z
    ================================================================================
    MSG: rtabmap_ros/KeyPoint
    #class cv::KeyPoint
    #{
    #    Point2f pt;
    #    float size;
    #    float angle;
    #    float response;
    #    int octave;
    #    int class_id;
    #}
    
    Point2f pt
    float32 size
    float32 angle
    float32 response
    int32 octave
    int32 class_id
    ================================================================================
    MSG: rtabmap_ros/Point2f
    #class cv::Point2f
    #{
    #    float x;
    #    float y;
    #}
    
    float32 x
    float32 y
    ================================================================================
    MSG: sensor_msgs/PointCloud2
    # This message holds a collection of N-dimensional points, which may
    # contain additional information such as normals, intensity, etc. The
    # point data is stored as a binary blob, its layout described by the
    # contents of the "fields" array.
    
    # The point cloud data may be organized 2d (image-like) or 1d
    # (unordered). Point clouds organized as 2d images may be produced by
    # camera depth sensors such as stereo or time-of-flight.
    
    # Time of sensor data acquisition, and the coordinate frame ID (for 3d
    # points).
    Header header
    
    # 2D structure of the point cloud. If the cloud is unordered, height is
    # 1 and width is the length of the point cloud.
    uint32 height
    uint32 width
    
    # Describes the channels and their layout in the binary data blob.
    PointField[] fields
    
    bool    is_bigendian # Is this data bigendian?
    uint32  point_step   # Length of a point in bytes
    uint32  row_step     # Length of a row in bytes
    uint8[] data         # Actual point data, size is (row_step*height)
    
    bool is_dense        # True if there are no invalid points
    
    ================================================================================
    MSG: sensor_msgs/PointField
    # This message holds the description of one point entry in the
    # PointCloud2 message format.
    uint8 INT8    = 1
    uint8 UINT8   = 2
    uint8 INT16   = 3
    uint8 UINT16  = 4
    uint8 INT32   = 5
    uint8 UINT32  = 6
    uint8 FLOAT32 = 7
    uint8 FLOAT64 = 8
    
    string name      # Name of field
    uint32 offset    # Offset from start of point struct
    uint8  datatype  # Datatype enumeration, see above
    uint32 count     # How many elements in the field
    
    `;
  }

};

module.exports = MapData;
