// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let Point3f = require('./Point3f.js');
let KeyPoint = require('./KeyPoint.js');
let geometry_msgs = _finder('geometry_msgs');
let sensor_msgs = _finder('sensor_msgs');

//-----------------------------------------------------------

class NodeData {
  constructor() {
    this.id = 0;
    this.mapId = 0;
    this.weight = 0;
    this.stamp = 0.0;
    this.label = '';
    this.pose = new geometry_msgs.msg.Pose();
    this.groundTruthPose = new geometry_msgs.msg.Pose();
    this.image = [];
    this.depth = [];
    this.fx = [];
    this.fy = [];
    this.cx = [];
    this.cy = [];
    this.width = [];
    this.height = [];
    this.baseline = 0.0;
    this.localTransform = [];
    this.laserScan = [];
    this.laserScanMaxPts = 0;
    this.laserScanMaxRange = 0.0;
    this.laserScanLocalTransform = new geometry_msgs.msg.Transform();
    this.userData = [];
    this.grid_ground = [];
    this.grid_obstacles = [];
    this.grid_cell_size = 0.0;
    this.grid_view_point = new Point3f();
    this.wordIds = [];
    this.wordKpts = [];
    this.wordPts = new sensor_msgs.msg.PointCloud2();
    this.descriptors = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type NodeData
    // Serialize message field [id]
    bufferInfo = _serializer.int32(obj.id, bufferInfo);
    // Serialize message field [mapId]
    bufferInfo = _serializer.int32(obj.mapId, bufferInfo);
    // Serialize message field [weight]
    bufferInfo = _serializer.int32(obj.weight, bufferInfo);
    // Serialize message field [stamp]
    bufferInfo = _serializer.float64(obj.stamp, bufferInfo);
    // Serialize message field [label]
    bufferInfo = _serializer.string(obj.label, bufferInfo);
    // Serialize message field [pose]
    bufferInfo = geometry_msgs.msg.Pose.serialize(obj.pose, bufferInfo);
    // Serialize message field [groundTruthPose]
    bufferInfo = geometry_msgs.msg.Pose.serialize(obj.groundTruthPose, bufferInfo);
    // Serialize the length for message field [image]
    bufferInfo = _serializer.uint32(obj.image.length, bufferInfo);
    // Serialize message field [image]
    bufferInfo.buffer.push(obj.image);
    bufferInfo.length += obj.image.length;
    // Serialize the length for message field [depth]
    bufferInfo = _serializer.uint32(obj.depth.length, bufferInfo);
    // Serialize message field [depth]
    bufferInfo.buffer.push(obj.depth);
    bufferInfo.length += obj.depth.length;
    // Serialize the length for message field [fx]
    bufferInfo = _serializer.uint32(obj.fx.length, bufferInfo);
    // Serialize message field [fx]
    obj.fx.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [fy]
    bufferInfo = _serializer.uint32(obj.fy.length, bufferInfo);
    // Serialize message field [fy]
    obj.fy.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [cx]
    bufferInfo = _serializer.uint32(obj.cx.length, bufferInfo);
    // Serialize message field [cx]
    obj.cx.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [cy]
    bufferInfo = _serializer.uint32(obj.cy.length, bufferInfo);
    // Serialize message field [cy]
    obj.cy.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [width]
    bufferInfo = _serializer.uint32(obj.width.length, bufferInfo);
    // Serialize message field [width]
    obj.width.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [height]
    bufferInfo = _serializer.uint32(obj.height.length, bufferInfo);
    // Serialize message field [height]
    obj.height.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize message field [baseline]
    bufferInfo = _serializer.float32(obj.baseline, bufferInfo);
    // Serialize the length for message field [localTransform]
    bufferInfo = _serializer.uint32(obj.localTransform.length, bufferInfo);
    // Serialize message field [localTransform]
    obj.localTransform.forEach((val) => {
      bufferInfo = geometry_msgs.msg.Transform.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [laserScan]
    bufferInfo = _serializer.uint32(obj.laserScan.length, bufferInfo);
    // Serialize message field [laserScan]
    bufferInfo.buffer.push(obj.laserScan);
    bufferInfo.length += obj.laserScan.length;
    // Serialize message field [laserScanMaxPts]
    bufferInfo = _serializer.int32(obj.laserScanMaxPts, bufferInfo);
    // Serialize message field [laserScanMaxRange]
    bufferInfo = _serializer.float32(obj.laserScanMaxRange, bufferInfo);
    // Serialize message field [laserScanLocalTransform]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.laserScanLocalTransform, bufferInfo);
    // Serialize the length for message field [userData]
    bufferInfo = _serializer.uint32(obj.userData.length, bufferInfo);
    // Serialize message field [userData]
    bufferInfo.buffer.push(obj.userData);
    bufferInfo.length += obj.userData.length;
    // Serialize the length for message field [grid_ground]
    bufferInfo = _serializer.uint32(obj.grid_ground.length, bufferInfo);
    // Serialize message field [grid_ground]
    bufferInfo.buffer.push(obj.grid_ground);
    bufferInfo.length += obj.grid_ground.length;
    // Serialize the length for message field [grid_obstacles]
    bufferInfo = _serializer.uint32(obj.grid_obstacles.length, bufferInfo);
    // Serialize message field [grid_obstacles]
    bufferInfo.buffer.push(obj.grid_obstacles);
    bufferInfo.length += obj.grid_obstacles.length;
    // Serialize message field [grid_cell_size]
    bufferInfo = _serializer.float32(obj.grid_cell_size, bufferInfo);
    // Serialize message field [grid_view_point]
    bufferInfo = Point3f.serialize(obj.grid_view_point, bufferInfo);
    // Serialize the length for message field [wordIds]
    bufferInfo = _serializer.uint32(obj.wordIds.length, bufferInfo);
    // Serialize message field [wordIds]
    obj.wordIds.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [wordKpts]
    bufferInfo = _serializer.uint32(obj.wordKpts.length, bufferInfo);
    // Serialize message field [wordKpts]
    obj.wordKpts.forEach((val) => {
      bufferInfo = KeyPoint.serialize(val, bufferInfo);
    });
    // Serialize message field [wordPts]
    bufferInfo = sensor_msgs.msg.PointCloud2.serialize(obj.wordPts, bufferInfo);
    // Serialize the length for message field [descriptors]
    bufferInfo = _serializer.uint32(obj.descriptors.length, bufferInfo);
    // Serialize message field [descriptors]
    bufferInfo.buffer.push(obj.descriptors);
    bufferInfo.length += obj.descriptors.length;
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type NodeData
    let tmp;
    let len;
    let data = new NodeData();
    // Deserialize message field [id]
    tmp = _deserializer.int32(buffer);
    data.id = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [mapId]
    tmp = _deserializer.int32(buffer);
    data.mapId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [weight]
    tmp = _deserializer.int32(buffer);
    data.weight = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [stamp]
    tmp = _deserializer.float64(buffer);
    data.stamp = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [label]
    tmp = _deserializer.string(buffer);
    data.label = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [pose]
    tmp = geometry_msgs.msg.Pose.deserialize(buffer);
    data.pose = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [groundTruthPose]
    tmp = geometry_msgs.msg.Pose.deserialize(buffer);
    data.groundTruthPose = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [image]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [image]
    data.image = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize array length for message field [depth]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [depth]
    data.depth = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize array length for message field [fx]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [fx]
    data.fx = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.fx[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [fy]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [fy]
    data.fy = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.fy[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [cx]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [cx]
    data.cx = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.cx[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [cy]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [cy]
    data.cy = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.cy[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [width]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [width]
    data.width = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.width[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [height]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [height]
    data.height = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.height[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [baseline]
    tmp = _deserializer.float32(buffer);
    data.baseline = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [localTransform]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localTransform]
    data.localTransform = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = geometry_msgs.msg.Transform.deserialize(buffer);
      data.localTransform[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [laserScan]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [laserScan]
    data.laserScan = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize message field [laserScanMaxPts]
    tmp = _deserializer.int32(buffer);
    data.laserScanMaxPts = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [laserScanMaxRange]
    tmp = _deserializer.float32(buffer);
    data.laserScanMaxRange = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [laserScanLocalTransform]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.laserScanLocalTransform = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [userData]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [userData]
    data.userData = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize array length for message field [grid_ground]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [grid_ground]
    data.grid_ground = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize array length for message field [grid_obstacles]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [grid_obstacles]
    data.grid_obstacles = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    // Deserialize message field [grid_cell_size]
    tmp = _deserializer.float32(buffer);
    data.grid_cell_size = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [grid_view_point]
    tmp = Point3f.deserialize(buffer);
    data.grid_view_point = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [wordIds]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordIds]
    data.wordIds = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.wordIds[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [wordKpts]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordKpts]
    data.wordKpts = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = KeyPoint.deserialize(buffer);
      data.wordKpts[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [wordPts]
    tmp = sensor_msgs.msg.PointCloud2.deserialize(buffer);
    data.wordPts = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [descriptors]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [descriptors]
    data.descriptors = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/NodeData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '934677666129185759cc518495d0b6cb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
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
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
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

module.exports = NodeData;
