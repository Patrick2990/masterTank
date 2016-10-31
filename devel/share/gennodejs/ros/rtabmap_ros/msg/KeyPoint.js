// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let Point2f = require('./Point2f.js');

//-----------------------------------------------------------

class KeyPoint {
  constructor() {
    this.pt = new Point2f();
    this.size = 0.0;
    this.angle = 0.0;
    this.response = 0.0;
    this.octave = 0;
    this.class_id = 0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type KeyPoint
    // Serialize message field [pt]
    bufferInfo = Point2f.serialize(obj.pt, bufferInfo);
    // Serialize message field [size]
    bufferInfo = _serializer.float32(obj.size, bufferInfo);
    // Serialize message field [angle]
    bufferInfo = _serializer.float32(obj.angle, bufferInfo);
    // Serialize message field [response]
    bufferInfo = _serializer.float32(obj.response, bufferInfo);
    // Serialize message field [octave]
    bufferInfo = _serializer.int32(obj.octave, bufferInfo);
    // Serialize message field [class_id]
    bufferInfo = _serializer.int32(obj.class_id, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type KeyPoint
    let tmp;
    let len;
    let data = new KeyPoint();
    // Deserialize message field [pt]
    tmp = Point2f.deserialize(buffer);
    data.pt = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [size]
    tmp = _deserializer.float32(buffer);
    data.size = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [angle]
    tmp = _deserializer.float32(buffer);
    data.angle = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [response]
    tmp = _deserializer.float32(buffer);
    data.response = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [octave]
    tmp = _deserializer.int32(buffer);
    data.octave = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [class_id]
    tmp = _deserializer.int32(buffer);
    data.class_id = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/KeyPoint';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '11cefb08bec6034bef3e32ec473dc6a7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    `;
  }

};

module.exports = KeyPoint;
