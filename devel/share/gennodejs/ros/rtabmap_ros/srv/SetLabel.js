// Auto-generated. Do not edit!

// (in-package rtabmap_ros.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetLabelRequest {
  constructor() {
    this.node_id = 0;
    this.node_label = '';
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type SetLabelRequest
    // Serialize message field [node_id]
    bufferInfo = _serializer.int32(obj.node_id, bufferInfo);
    // Serialize message field [node_label]
    bufferInfo = _serializer.string(obj.node_label, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type SetLabelRequest
    let tmp;
    let len;
    let data = new SetLabelRequest();
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
    return 'rtabmap_ros/SetLabelRequest';
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

class SetLabelResponse {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type SetLabelResponse
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type SetLabelResponse
    let tmp;
    let len;
    let data = new SetLabelResponse();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'rtabmap_ros/SetLabelResponse';
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
  Request: SetLabelRequest,
  Response: SetLabelResponse
};
