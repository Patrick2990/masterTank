// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------

class Point2f {
  constructor() {
    this.x = 0.0;
    this.y = 0.0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type Point2f
    // Serialize message field [x]
    bufferInfo = _serializer.float32(obj.x, bufferInfo);
    // Serialize message field [y]
    bufferInfo = _serializer.float32(obj.y, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type Point2f
    let tmp;
    let len;
    let data = new Point2f();
    // Deserialize message field [x]
    tmp = _deserializer.float32(buffer);
    data.x = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [y]
    tmp = _deserializer.float32(buffer);
    data.y = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/Point2f';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ff8d7d66dd3e4b731ef14a45d38888b6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #class cv::Point2f
    #{
    #    float x;
    #    float y;
    #}
    
    float32 x
    float32 y
    `;
  }

};

module.exports = Point2f;
