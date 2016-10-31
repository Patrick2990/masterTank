// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let KeyPoint = require('./KeyPoint.js');
let Point3f = require('./Point3f.js');
let Point2f = require('./Point2f.js');
let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class OdomInfo {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.lost = false;
    this.matches = 0;
    this.inliers = 0;
    this.variance = 0.0;
    this.features = 0;
    this.localMapSize = 0;
    this.localScanMapSize = 0;
    this.timeEstimation = 0.0;
    this.timeParticleFiltering = 0.0;
    this.stamp = 0.0;
    this.interval = 0.0;
    this.distanceTravelled = 0.0;
    this.type = 0;
    this.wordsKeys = [];
    this.wordsValues = [];
    this.wordMatches = [];
    this.wordInliers = [];
    this.localMapKeys = [];
    this.localMapValues = [];
    this.refCorners = [];
    this.newCorners = [];
    this.cornerInliers = [];
    this.transform = new geometry_msgs.msg.Transform();
    this.transformFiltered = new geometry_msgs.msg.Transform();
    this.localScanMap = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type OdomInfo
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [lost]
    bufferInfo = _serializer.bool(obj.lost, bufferInfo);
    // Serialize message field [matches]
    bufferInfo = _serializer.int32(obj.matches, bufferInfo);
    // Serialize message field [inliers]
    bufferInfo = _serializer.int32(obj.inliers, bufferInfo);
    // Serialize message field [variance]
    bufferInfo = _serializer.float32(obj.variance, bufferInfo);
    // Serialize message field [features]
    bufferInfo = _serializer.int32(obj.features, bufferInfo);
    // Serialize message field [localMapSize]
    bufferInfo = _serializer.int32(obj.localMapSize, bufferInfo);
    // Serialize message field [localScanMapSize]
    bufferInfo = _serializer.int32(obj.localScanMapSize, bufferInfo);
    // Serialize message field [timeEstimation]
    bufferInfo = _serializer.float32(obj.timeEstimation, bufferInfo);
    // Serialize message field [timeParticleFiltering]
    bufferInfo = _serializer.float32(obj.timeParticleFiltering, bufferInfo);
    // Serialize message field [stamp]
    bufferInfo = _serializer.float32(obj.stamp, bufferInfo);
    // Serialize message field [interval]
    bufferInfo = _serializer.float32(obj.interval, bufferInfo);
    // Serialize message field [distanceTravelled]
    bufferInfo = _serializer.float32(obj.distanceTravelled, bufferInfo);
    // Serialize message field [type]
    bufferInfo = _serializer.int32(obj.type, bufferInfo);
    // Serialize the length for message field [wordsKeys]
    bufferInfo = _serializer.uint32(obj.wordsKeys.length, bufferInfo);
    // Serialize message field [wordsKeys]
    obj.wordsKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [wordsValues]
    bufferInfo = _serializer.uint32(obj.wordsValues.length, bufferInfo);
    // Serialize message field [wordsValues]
    obj.wordsValues.forEach((val) => {
      bufferInfo = KeyPoint.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [wordMatches]
    bufferInfo = _serializer.uint32(obj.wordMatches.length, bufferInfo);
    // Serialize message field [wordMatches]
    obj.wordMatches.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [wordInliers]
    bufferInfo = _serializer.uint32(obj.wordInliers.length, bufferInfo);
    // Serialize message field [wordInliers]
    obj.wordInliers.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [localMapKeys]
    bufferInfo = _serializer.uint32(obj.localMapKeys.length, bufferInfo);
    // Serialize message field [localMapKeys]
    obj.localMapKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [localMapValues]
    bufferInfo = _serializer.uint32(obj.localMapValues.length, bufferInfo);
    // Serialize message field [localMapValues]
    obj.localMapValues.forEach((val) => {
      bufferInfo = Point3f.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [refCorners]
    bufferInfo = _serializer.uint32(obj.refCorners.length, bufferInfo);
    // Serialize message field [refCorners]
    obj.refCorners.forEach((val) => {
      bufferInfo = Point2f.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [newCorners]
    bufferInfo = _serializer.uint32(obj.newCorners.length, bufferInfo);
    // Serialize message field [newCorners]
    obj.newCorners.forEach((val) => {
      bufferInfo = Point2f.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [cornerInliers]
    bufferInfo = _serializer.uint32(obj.cornerInliers.length, bufferInfo);
    // Serialize message field [cornerInliers]
    obj.cornerInliers.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize message field [transform]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.transform, bufferInfo);
    // Serialize message field [transformFiltered]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.transformFiltered, bufferInfo);
    // Serialize the length for message field [localScanMap]
    bufferInfo = _serializer.uint32(obj.localScanMap.length, bufferInfo);
    // Serialize message field [localScanMap]
    bufferInfo.buffer.push(obj.localScanMap);
    bufferInfo.length += obj.localScanMap.length;
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type OdomInfo
    let tmp;
    let len;
    let data = new OdomInfo();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [lost]
    tmp = _deserializer.bool(buffer);
    data.lost = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [matches]
    tmp = _deserializer.int32(buffer);
    data.matches = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [inliers]
    tmp = _deserializer.int32(buffer);
    data.inliers = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [variance]
    tmp = _deserializer.float32(buffer);
    data.variance = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [features]
    tmp = _deserializer.int32(buffer);
    data.features = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localMapSize]
    tmp = _deserializer.int32(buffer);
    data.localMapSize = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localScanMapSize]
    tmp = _deserializer.int32(buffer);
    data.localScanMapSize = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [timeEstimation]
    tmp = _deserializer.float32(buffer);
    data.timeEstimation = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [timeParticleFiltering]
    tmp = _deserializer.float32(buffer);
    data.timeParticleFiltering = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [stamp]
    tmp = _deserializer.float32(buffer);
    data.stamp = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [interval]
    tmp = _deserializer.float32(buffer);
    data.interval = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [distanceTravelled]
    tmp = _deserializer.float32(buffer);
    data.distanceTravelled = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [type]
    tmp = _deserializer.int32(buffer);
    data.type = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [wordsKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordsKeys]
    data.wordsKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.wordsKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [wordsValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordsValues]
    data.wordsValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = KeyPoint.deserialize(buffer);
      data.wordsValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [wordMatches]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordMatches]
    data.wordMatches = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.wordMatches[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [wordInliers]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [wordInliers]
    data.wordInliers = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.wordInliers[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [localMapKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localMapKeys]
    data.localMapKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.localMapKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [localMapValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localMapValues]
    data.localMapValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = Point3f.deserialize(buffer);
      data.localMapValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [refCorners]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [refCorners]
    data.refCorners = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = Point2f.deserialize(buffer);
      data.refCorners[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [newCorners]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [newCorners]
    data.newCorners = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = Point2f.deserialize(buffer);
      data.newCorners[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [cornerInliers]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [cornerInliers]
    data.cornerInliers = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.cornerInliers[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [transform]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.transform = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [transformFiltered]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.transformFiltered = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [localScanMap]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localScanMap]
    data.localScanMap = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/OdomInfo';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1b5746f933de3b103e1951e17dbf25de';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    Header header
    
    #class rtabmap::OdometryInfo
    #{
    #    bool lost;
    #    int matches;
    #    int inliers;
    #    float variance;
    #    int features;
    #    int localMapSize;
    #    float time;
    #
    #    int type; // 0=BOW, 1=Optical Flow, 2=ICP
    #
    #    // BOW odometry
    #    std::multimap<int, cv::KeyPoint> words;
    #    std::vector<int> wordMatches;
    #    std::vector<int> wordInliers;
    #
    #    // Optical Flow odometry
    #    std::vector<cv::Point2f> refCorners;
    #    std::vector<cv::Point2f> newCorners;
    #    std::vector<int> cornerInliers;
    #}
    
    bool lost
    int32 matches
    int32 inliers
    float32 variance
    int32 features
    int32 localMapSize
    int32 localScanMapSize
    float32 timeEstimation
    float32 timeParticleFiltering
    float32 stamp
    float32 interval
    float32 distanceTravelled
    
    int32 type
    
    int32[] wordsKeys
    KeyPoint[] wordsValues
    int32[] wordMatches
    int32[] wordInliers
    int32[] localMapKeys
    Point3f[] localMapValues
    
    Point2f[] refCorners
    Point2f[] newCorners
    int32[] cornerInliers
    
    geometry_msgs/Transform transform
    geometry_msgs/Transform transformFiltered
    
    # compressed local scan map data
    # use rtabmap::util3d::uncompressData() from "rtabmap/core/util3d.h"
    uint8[] localScanMap
    
    
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
    
    `;
  }

};

module.exports = OdomInfo;
