// Auto-generated. Do not edit!

// (in-package rtabmap_ros.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class PublishMapRequest {
  constructor() {
    this.global = false;
    this.optimized = false;
    this.graphOnly = false;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type PublishMapRequest
    // Serialize message field [global]
    bufferInfo = _serializer.bool(obj.global, bufferInfo);
    // Serialize message field [optimized]
    bufferInfo = _serializer.bool(obj.optimized, bufferInfo);
    // Serialize message field [graphOnly]
    bufferInfo = _serializer.bool(obj.graphOnly, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type PublishMapRequest
    let tmp;
    let len;
    let data = new PublishMapRequest();
    // Deserialize message field [global]
    tmp = _deserializer.bool(buffer);
    data.global = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [optimized]
    tmp = _deserializer.bool(buffer);
    data.optimized = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [graphOnly]
    tmp = _deserializer.bool(buffer);
    data.graphOnly = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/PublishMapRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6213f9f13cced23f4d224b22f59d839c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    bool global
    bool optimized
    bool graphOnly
    
    `;
  }

};

class PublishMapResponse {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type PublishMapResponse
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type PublishMapResponse
    let tmp;
    let len;
    let data = new PublishMapResponse();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/PublishMapResponse';
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
  Request: PublishMapRequest,
  Response: PublishMapResponse
};
