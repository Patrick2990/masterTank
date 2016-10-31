// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Goal {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.node_id = 0;
    this.node_label = '';
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type Goal
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [node_id]
    bufferInfo = _serializer.int32(obj.node_id, bufferInfo);
    // Serialize message field [node_label]
    bufferInfo = _serializer.string(obj.node_label, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type Goal
    let tmp;
    let len;
    let data = new Goal();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
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
    // Returns string type for a message object
    return 'rtabmap_ros/Goal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '549abfc1888e0f4a564870f6e066ed73';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    Header header
    
    # Set either node_id or node_label
    int32 node_id
    string node_label
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

module.exports = Goal;
