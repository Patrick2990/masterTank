// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class UserData {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.rows = 0;
    this.cols = 0;
    this.type = 0;
    this.data = [];
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type UserData
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [rows]
    bufferInfo = _serializer.uint32(obj.rows, bufferInfo);
    // Serialize message field [cols]
    bufferInfo = _serializer.uint32(obj.cols, bufferInfo);
    // Serialize message field [type]
    bufferInfo = _serializer.uint32(obj.type, bufferInfo);
    // Serialize the length for message field [data]
    bufferInfo = _serializer.uint32(obj.data.length, bufferInfo);
    // Serialize message field [data]
    bufferInfo.buffer.push(obj.data);
    bufferInfo.length += obj.data.length;
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type UserData
    let tmp;
    let len;
    let data = new UserData();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [rows]
    tmp = _deserializer.uint32(buffer);
    data.rows = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [cols]
    tmp = _deserializer.uint32(buffer);
    data.cols = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [type]
    tmp = _deserializer.uint32(buffer);
    data.type = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [data]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [data]
    data.data = buffer.slice(0, len);
    buffer =  buffer.slice(len);
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/UserData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e2b3ca3c96ccd4baa19ca1aeef9ec767';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    Header header
    
    # OpenCV matrix containing the user data. A matrix of type CV_8UC1 
    # with 1 row is considered to be compressed (with rtabmap::compressData() method).
    # If you have one dimension unsigned 8 bits uncompressed data, make sure to transpose it
    # (to have multiple rows instead of multiple columns) in order to be detected as
    # not compressed.
    uint32 rows
    uint32 cols
    uint32 type
    uint8[] data
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
    
    `;
  }

};

module.exports = UserData;
