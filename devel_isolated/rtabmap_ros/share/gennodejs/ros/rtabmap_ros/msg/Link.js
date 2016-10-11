// Auto-generated. Do not edit!

// (in-package rtabmap_ros.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Link {
  constructor() {
    this.fromId = 0;
    this.toId = 0;
    this.type = 0;
    this.transform = new geometry_msgs.msg.Transform();
    this.rotVariance = 0.0;
    this.transVariance = 0.0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type Link
    // Serialize message field [fromId]
    bufferInfo = _serializer.int32(obj.fromId, bufferInfo);
    // Serialize message field [toId]
    bufferInfo = _serializer.int32(obj.toId, bufferInfo);
    // Serialize message field [type]
    bufferInfo = _serializer.int32(obj.type, bufferInfo);
    // Serialize message field [transform]
    bufferInfo = geometry_msgs.msg.Transform.serialize(obj.transform, bufferInfo);
    // Serialize message field [rotVariance]
    bufferInfo = _serializer.float32(obj.rotVariance, bufferInfo);
    // Serialize message field [transVariance]
    bufferInfo = _serializer.float32(obj.transVariance, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type Link
    let tmp;
    let len;
    let data = new Link();
    // Deserialize message field [fromId]
    tmp = _deserializer.int32(buffer);
    data.fromId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [toId]
    tmp = _deserializer.int32(buffer);
    data.toId = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [type]
    tmp = _deserializer.int32(buffer);
    data.type = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [transform]
    tmp = geometry_msgs.msg.Transform.deserialize(buffer);
    data.transform = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [rotVariance]
    tmp = _deserializer.float32(buffer);
    data.rotVariance = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [transVariance]
    tmp = _deserializer.float32(buffer);
    data.transVariance = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'rtabmap_ros/Link';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'aab00d57f13a2febcbee54fbb44691d2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #class rtabmap::Link
    #{
    #   int from;
    #   int to;
    #   Type type;
    #   Transform transform;
    #   float variance;
    #}
    
    int32 fromId
    int32 toId
    int32 type
    geometry_msgs/Transform transform
    float32 rotVariance
    float32 transVariance
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

module.exports = Link;
