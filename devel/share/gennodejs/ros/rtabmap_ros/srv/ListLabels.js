// Auto-generated. Do not edit!

// (in-package rtabmap_ros.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class ListLabelsRequest {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type ListLabelsRequest
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type ListLabelsRequest
    let tmp;
    let len;
    let data = new ListLabelsRequest();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/ListLabelsRequest';
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

class ListLabelsResponse {
  constructor() {
    this.labels = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type ListLabelsResponse
    // Serialize the length for message field [labels]
    bufferInfo = _serializer.uint32(obj.labels.length, bufferInfo);
    // Serialize message field [labels]
    obj.labels.forEach((val) => {
      bufferInfo = _serializer.string(val, bufferInfo);
    });
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type ListLabelsResponse
    let tmp;
    let len;
    let data = new ListLabelsResponse();
    // Deserialize array length for message field [labels]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [labels]
    data.labels = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = _deserializer.string(buffer);
      data.labels[i] = tmp.data;
      buffer = tmp.buffer;
    }
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/ListLabelsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '17b562487ca772bdfa2c078ef00d870f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    string[] labels
    
    `;
  }

};

module.exports = {
  Request: ListLabelsRequest,
  Response: ListLabelsResponse
};
