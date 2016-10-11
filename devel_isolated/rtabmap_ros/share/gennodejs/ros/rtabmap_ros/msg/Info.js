// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Info {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.refId = 0;
    this.loopClosureId = 0;
    this.proximityDetectionId = 0;
    this.loopClosureTransform = new geometry_msgs.msg.Transform();
    this.posteriorKeys = [];
    this.posteriorValues = [];
    this.likelihoodKeys = [];
    this.likelihoodValues = [];
    this.rawLikelihoodKeys = [];
    this.rawLikelihoodValues = [];
    this.weightsKeys = [];
    this.weightsValues = [];
    this.statsKeys = [];
    this.statsValues = [];
    this.localPath = [];
    this.currentGoalId = 0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type Info
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [refId]
    bufferInfo = _serializer.int32(obj.refId, bufferInfo);
    // Serialize message field [loopClosureId]
    bufferInfo = _serializer.int32(obj.loopClosureId, bufferInfo);
    // Serialize message field [proximityDetectionId]
    bufferInfo = _serializer.int32(obj.proximityDetectionId, bufferInfo);
    // Serialize message field [loopClosureTransform]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.loopClosureTransform, bufferInfo);
    // Serialize the length for message field [posteriorKeys]
    bufferInfo = _serializer.uint32(obj.posteriorKeys.length, bufferInfo);
    // Serialize message field [posteriorKeys]
    obj.posteriorKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [posteriorValues]
    bufferInfo = _serializer.uint32(obj.posteriorValues.length, bufferInfo);
    // Serialize message field [posteriorValues]
    obj.posteriorValues.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [likelihoodKeys]
    bufferInfo = _serializer.uint32(obj.likelihoodKeys.length, bufferInfo);
    // Serialize message field [likelihoodKeys]
    obj.likelihoodKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [likelihoodValues]
    bufferInfo = _serializer.uint32(obj.likelihoodValues.length, bufferInfo);
    // Serialize message field [likelihoodValues]
    obj.likelihoodValues.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [rawLikelihoodKeys]
    bufferInfo = _serializer.uint32(obj.rawLikelihoodKeys.length, bufferInfo);
    // Serialize message field [rawLikelihoodKeys]
    obj.rawLikelihoodKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [rawLikelihoodValues]
    bufferInfo = _serializer.uint32(obj.rawLikelihoodValues.length, bufferInfo);
    // Serialize message field [rawLikelihoodValues]
    obj.rawLikelihoodValues.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [weightsKeys]
    bufferInfo = _serializer.uint32(obj.weightsKeys.length, bufferInfo);
    // Serialize message field [weightsKeys]
    obj.weightsKeys.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [weightsValues]
    bufferInfo = _serializer.uint32(obj.weightsValues.length, bufferInfo);
    // Serialize message field [weightsValues]
    obj.weightsValues.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [statsKeys]
    bufferInfo = _serializer.uint32(obj.statsKeys.length, bufferInfo);
    // Serialize message field [statsKeys]
    obj.statsKeys.forEach((val) => {
      bufferInfo = _serializer.string(val, bufferInfo);
    });
    // Serialize the length for message field [statsValues]
    bufferInfo = _serializer.uint32(obj.statsValues.length, bufferInfo);
    // Serialize message field [statsValues]
    obj.statsValues.forEach((val) => {
      bufferInfo = _serializer.float32(val, bufferInfo);
    });
    // Serialize the length for message field [localPath]
    bufferInfo = _serializer.uint32(obj.localPath.length, bufferInfo);
    // Serialize message field [localPath]
    obj.localPath.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize message field [currentGoalId]
    bufferInfo = _serializer.int32(obj.currentGoalId, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type Info
    let tmp;
    let len;
    let data = new Info();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [refId]
    tmp = _deserializer.int32(buffer);
    data.refId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [loopClosureId]
    tmp = _deserializer.int32(buffer);
    data.loopClosureId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [proximityDetectionId]
    tmp = _deserializer.int32(buffer);
    data.proximityDetectionId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [loopClosureTransform]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.loopClosureTransform = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [posteriorKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [posteriorKeys]
    data.posteriorKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.posteriorKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [posteriorValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [posteriorValues]
    data.posteriorValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.posteriorValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [likelihoodKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [likelihoodKeys]
    data.likelihoodKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.likelihoodKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [likelihoodValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [likelihoodValues]
    data.likelihoodValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.likelihoodValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [rawLikelihoodKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [rawLikelihoodKeys]
    data.rawLikelihoodKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.rawLikelihoodKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [rawLikelihoodValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [rawLikelihoodValues]
    data.rawLikelihoodValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.rawLikelihoodValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [weightsKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [weightsKeys]
    data.weightsKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.weightsKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [weightsValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [weightsValues]
    data.weightsValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.weightsValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [statsKeys]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [statsKeys]
    data.statsKeys = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.string(buffer);
      data.statsKeys[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [statsValues]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [statsValues]
    data.statsValues = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.float32(buffer);
      data.statsValues[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [localPath]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [localPath]
    data.localPath = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.localPath[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [currentGoalId]
    tmp = _deserializer.int32(buffer);
    data.currentGoalId = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/Info';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a3319209ed98ef442877eb716ab8963b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    ########################################
    # RTAB-Map info with statistics 
    ########################################
    
    Header header
    
    int32 refId
    int32 loopClosureId
    int32 proximityDetectionId
    
    geometry_msgs/Transform loopClosureTransform
    
    ####
    # For statistics...
    ####
    # std::map<int, float> posterior;
    int32[] posteriorKeys
    float32[] posteriorValues
    
    # std::map<int, float> likelihood;
    int32[] likelihoodKeys
    float32[] likelihoodValues
    
    # std::map<int, float> rawLikelihood;
    int32[] rawLikelihoodKeys
    float32[] rawLikelihoodValues
    
    # std::map<int, int> weights;
    int32[] weightsKeys
    int32[] weightsValues
    
    # std::map<std::string, float> stats
    string[] statsKeys
    float32[] statsValues
    
    # std::vector<int> localPath
    int32[] localPath
    int32 currentGoalId
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
    
    `;
  }

};

module.exports = Info;
