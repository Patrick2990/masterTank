// Auto-generated. Do not edit!

// (in-package rtabmap_ros.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------

let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class SetGoalRequest {
  constructor() {
    this.node_id = 0;
    this.node_label = '';
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type SetGoalRequest
    // Serialize message field [node_id]
    bufferInfo = _serializer.int32(obj.node_id, bufferInfo);
    // Serialize message field [node_label]
    bufferInfo = _serializer.string(obj.node_label, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type SetGoalRequest
    let tmp;
    let len;
    let data = new SetGoalRequest();
    // Deserialize message field [node_id]
    tmp = _deserializer.int32(buffer);
    data.node_id = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [node_label]
    tmp = _deserializer.string(buffer);
    data.node_label = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/SetGoalRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'baadfb04a43ec26085eb7bebc9a80862';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    int32 node_id
    string node_label
    
    `;
  }

};

class SetGoalResponse {
  constructor() {
    this.path_ids = [];
    this.path_poses = [];
    this.planning_time = 0.0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type SetGoalResponse
    // Serialize the length for message field [path_ids]
    bufferInfo = _serializer.uint32(obj.path_ids.length, bufferInfo);
    // Serialize message field [path_ids]
    obj.path_ids.forEach((val) => {
      bufferInfo = _serializer.int32(val, bufferInfo);
    });
    // Serialize the length for message field [path_poses]
    bufferInfo = _serializer.uint32(obj.path_poses.length, bufferInfo);
    // Serialize message field [path_poses]
    obj.path_poses.forEach((val) => {
      bufferInfo = geometry_msgs.msg.Pose.serialize(val, bufferInfo);
    });
    // Serialize message field [planning_time]
    bufferInfo = _serializer.float32(obj.planning_time, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type SetGoalResponse
    let tmp;
    let len;
    let data = new SetGoalResponse();
    // Deserialize array length for message field [path_ids]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [path_ids]
    data.path_ids = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.int32(buffer);
      data.path_ids[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [path_poses]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [path_poses]
    data.path_poses = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = geometry_msgs.msg.Pose.deserialize(buffer);
      data.path_poses[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [planning_time]
    tmp = _deserializer.float32(buffer);
    data.planning_time = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/SetGoalResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'adca6a85ab21f03d516676b74309de28';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    int32[] path_ids
    geometry_msgs/Pose[] path_poses
    float32 planning_time
    
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
    
    `;
  }

};

module.exports = {
  Request: SetGoalRequest,
  Response: SetGoalResponse
};
