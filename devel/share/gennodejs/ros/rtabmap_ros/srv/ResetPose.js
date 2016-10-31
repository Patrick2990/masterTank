// Auto-generated. Do not edit!

// (in-package rtabmap_ros.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class ResetPoseRequest {
  constructor() {
    this.x = 0.0;
    this.y = 0.0;
    this.z = 0.0;
    this.roll = 0.0;
    this.pitch = 0.0;
    this.yaw = 0.0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type ResetPoseRequest
    // Serialize message field [x]
    bufferInfo = _serializer.float32(obj.x, bufferInfo);
    // Serialize message field [y]
    bufferInfo = _serializer.float32(obj.y, bufferInfo);
    // Serialize message field [z]
    bufferInfo = _serializer.float32(obj.z, bufferInfo);
    // Serialize message field [roll]
    bufferInfo = _serializer.float32(obj.roll, bufferInfo);
    // Serialize message field [pitch]
    bufferInfo = _serializer.float32(obj.pitch, bufferInfo);
    // Serialize message field [yaw]
    bufferInfo = _serializer.float32(obj.yaw, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type ResetPoseRequest
    let tmp;
    let len;
    let data = new ResetPoseRequest();
    // Deserialize message field [x]
    tmp = _deserializer.float32(buffer);
    data.x = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [y]
    tmp = _deserializer.float32(buffer);
    data.y = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [z]
    tmp = _deserializer.float32(buffer);
    data.z = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [roll]
    tmp = _deserializer.float32(buffer);
    data.roll = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [pitch]
    tmp = _deserializer.float32(buffer);
    data.pitch = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [yaw]
    tmp = _deserializer.float32(buffer);
    data.yaw = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/ResetPoseRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3d5697f0c9e8859325238b57521f8f4e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    float32 x
    float32 y
    float32 z
    float32 roll
    float32 pitch
    float32 yaw
    
    `;
  }

};

class ResetPoseResponse {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type ResetPoseResponse
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type ResetPoseResponse
    let tmp;
    let len;
    let data = new ResetPoseResponse();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/ResetPoseResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    `;
  }

};

module.exports = {
  Request: ResetPoseRequest,
  Response: ResetPoseResponse
};
