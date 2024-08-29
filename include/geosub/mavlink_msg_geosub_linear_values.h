#pragma once
// MESSAGE GEOSUB_LINEAR_VALUES PACKING

#define MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES 14001


typedef struct __mavlink_geosub_linear_values_t {
 float x_pos; /*<  X Position*/
 float y_pos; /*<  Y Position*/
 float z_pos; /*<  Z Position*/
 float x_vel; /*<  X Velocity*/
 float y_vel; /*<  Y Velocity*/
 float z_vel; /*<  Z Velocity*/
 float x_acc; /*<  X Acceleration*/
 float y_acc; /*<  Y Acceleration*/
 float z_acc; /*<  Z Acceleration*/
} mavlink_geosub_linear_values_t;

#define MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN 36
#define MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN 36
#define MAVLINK_MSG_ID_14001_LEN 36
#define MAVLINK_MSG_ID_14001_MIN_LEN 36

#define MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC 71
#define MAVLINK_MSG_ID_14001_CRC 71



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_LINEAR_VALUES { \
    14001, \
    "GEOSUB_LINEAR_VALUES", \
    9, \
    {  { "x_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_linear_values_t, x_pos) }, \
         { "y_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_linear_values_t, y_pos) }, \
         { "z_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_linear_values_t, z_pos) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_linear_values_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_linear_values_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_linear_values_t, z_vel) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_linear_values_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_linear_values_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_linear_values_t, z_acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_LINEAR_VALUES { \
    "GEOSUB_LINEAR_VALUES", \
    9, \
    {  { "x_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_linear_values_t, x_pos) }, \
         { "y_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_linear_values_t, y_pos) }, \
         { "z_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_linear_values_t, z_pos) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_linear_values_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_linear_values_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_linear_values_t, z_vel) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_linear_values_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_linear_values_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_linear_values_t, z_acc) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_linear_values message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x_pos  X Position
 * @param y_pos  Y Position
 * @param z_pos  Z Position
 * @param x_vel  X Velocity
 * @param y_vel  Y Velocity
 * @param z_vel  Z Velocity
 * @param x_acc  X Acceleration
 * @param y_acc  Y Acceleration
 * @param z_acc  Z Acceleration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_linear_values_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x_pos, float y_pos, float z_pos, float x_vel, float y_vel, float z_vel, float x_acc, float y_acc, float z_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN];
    _mav_put_float(buf, 0, x_pos);
    _mav_put_float(buf, 4, y_pos);
    _mav_put_float(buf, 8, z_pos);
    _mav_put_float(buf, 12, x_vel);
    _mav_put_float(buf, 16, y_vel);
    _mav_put_float(buf, 20, z_vel);
    _mav_put_float(buf, 24, x_acc);
    _mav_put_float(buf, 28, y_acc);
    _mav_put_float(buf, 32, z_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN);
#else
    mavlink_geosub_linear_values_t packet;
    packet.x_pos = x_pos;
    packet.y_pos = y_pos;
    packet.z_pos = z_pos;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
}

/**
 * @brief Pack a geosub_linear_values message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x_pos  X Position
 * @param y_pos  Y Position
 * @param z_pos  Z Position
 * @param x_vel  X Velocity
 * @param y_vel  Y Velocity
 * @param z_vel  Z Velocity
 * @param x_acc  X Acceleration
 * @param y_acc  Y Acceleration
 * @param z_acc  Z Acceleration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_linear_values_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x_pos,float y_pos,float z_pos,float x_vel,float y_vel,float z_vel,float x_acc,float y_acc,float z_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN];
    _mav_put_float(buf, 0, x_pos);
    _mav_put_float(buf, 4, y_pos);
    _mav_put_float(buf, 8, z_pos);
    _mav_put_float(buf, 12, x_vel);
    _mav_put_float(buf, 16, y_vel);
    _mav_put_float(buf, 20, z_vel);
    _mav_put_float(buf, 24, x_acc);
    _mav_put_float(buf, 28, y_acc);
    _mav_put_float(buf, 32, z_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN);
#else
    mavlink_geosub_linear_values_t packet;
    packet.x_pos = x_pos;
    packet.y_pos = y_pos;
    packet.z_pos = z_pos;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
}

/**
 * @brief Encode a geosub_linear_values struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_linear_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_linear_values_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_linear_values_t* geosub_linear_values)
{
    return mavlink_msg_geosub_linear_values_pack(system_id, component_id, msg, geosub_linear_values->x_pos, geosub_linear_values->y_pos, geosub_linear_values->z_pos, geosub_linear_values->x_vel, geosub_linear_values->y_vel, geosub_linear_values->z_vel, geosub_linear_values->x_acc, geosub_linear_values->y_acc, geosub_linear_values->z_acc);
}

/**
 * @brief Encode a geosub_linear_values struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_linear_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_linear_values_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_linear_values_t* geosub_linear_values)
{
    return mavlink_msg_geosub_linear_values_pack_chan(system_id, component_id, chan, msg, geosub_linear_values->x_pos, geosub_linear_values->y_pos, geosub_linear_values->z_pos, geosub_linear_values->x_vel, geosub_linear_values->y_vel, geosub_linear_values->z_vel, geosub_linear_values->x_acc, geosub_linear_values->y_acc, geosub_linear_values->z_acc);
}

/**
 * @brief Send a geosub_linear_values message
 * @param chan MAVLink channel to send the message
 *
 * @param x_pos  X Position
 * @param y_pos  Y Position
 * @param z_pos  Z Position
 * @param x_vel  X Velocity
 * @param y_vel  Y Velocity
 * @param z_vel  Z Velocity
 * @param x_acc  X Acceleration
 * @param y_acc  Y Acceleration
 * @param z_acc  Z Acceleration
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_linear_values_send(mavlink_channel_t chan, float x_pos, float y_pos, float z_pos, float x_vel, float y_vel, float z_vel, float x_acc, float y_acc, float z_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN];
    _mav_put_float(buf, 0, x_pos);
    _mav_put_float(buf, 4, y_pos);
    _mav_put_float(buf, 8, z_pos);
    _mav_put_float(buf, 12, x_vel);
    _mav_put_float(buf, 16, y_vel);
    _mav_put_float(buf, 20, z_vel);
    _mav_put_float(buf, 24, x_acc);
    _mav_put_float(buf, 28, y_acc);
    _mav_put_float(buf, 32, z_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
#else
    mavlink_geosub_linear_values_t packet;
    packet.x_pos = x_pos;
    packet.y_pos = y_pos;
    packet.z_pos = z_pos;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
#endif
}

/**
 * @brief Send a geosub_linear_values message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_linear_values_send_struct(mavlink_channel_t chan, const mavlink_geosub_linear_values_t* geosub_linear_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_linear_values_send(chan, geosub_linear_values->x_pos, geosub_linear_values->y_pos, geosub_linear_values->z_pos, geosub_linear_values->x_vel, geosub_linear_values->y_vel, geosub_linear_values->z_vel, geosub_linear_values->x_acc, geosub_linear_values->y_acc, geosub_linear_values->z_acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES, (const char *)geosub_linear_values, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_linear_values_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x_pos, float y_pos, float z_pos, float x_vel, float y_vel, float z_vel, float x_acc, float y_acc, float z_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x_pos);
    _mav_put_float(buf, 4, y_pos);
    _mav_put_float(buf, 8, z_pos);
    _mav_put_float(buf, 12, x_vel);
    _mav_put_float(buf, 16, y_vel);
    _mav_put_float(buf, 20, z_vel);
    _mav_put_float(buf, 24, x_acc);
    _mav_put_float(buf, 28, y_acc);
    _mav_put_float(buf, 32, z_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
#else
    mavlink_geosub_linear_values_t *packet = (mavlink_geosub_linear_values_t *)msgbuf;
    packet->x_pos = x_pos;
    packet->y_pos = y_pos;
    packet->z_pos = z_pos;
    packet->x_vel = x_vel;
    packet->y_vel = y_vel;
    packet->z_vel = z_vel;
    packet->x_acc = x_acc;
    packet->y_acc = y_acc;
    packet->z_acc = z_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_LINEAR_VALUES UNPACKING


/**
 * @brief Get field x_pos from geosub_linear_values message
 *
 * @return  X Position
 */
static inline float mavlink_msg_geosub_linear_values_get_x_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y_pos from geosub_linear_values message
 *
 * @return  Y Position
 */
static inline float mavlink_msg_geosub_linear_values_get_y_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z_pos from geosub_linear_values message
 *
 * @return  Z Position
 */
static inline float mavlink_msg_geosub_linear_values_get_z_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field x_vel from geosub_linear_values message
 *
 * @return  X Velocity
 */
static inline float mavlink_msg_geosub_linear_values_get_x_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field y_vel from geosub_linear_values message
 *
 * @return  Y Velocity
 */
static inline float mavlink_msg_geosub_linear_values_get_y_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field z_vel from geosub_linear_values message
 *
 * @return  Z Velocity
 */
static inline float mavlink_msg_geosub_linear_values_get_z_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field x_acc from geosub_linear_values message
 *
 * @return  X Acceleration
 */
static inline float mavlink_msg_geosub_linear_values_get_x_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field y_acc from geosub_linear_values message
 *
 * @return  Y Acceleration
 */
static inline float mavlink_msg_geosub_linear_values_get_y_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field z_acc from geosub_linear_values message
 *
 * @return  Z Acceleration
 */
static inline float mavlink_msg_geosub_linear_values_get_z_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a geosub_linear_values message into a struct
 *
 * @param msg The message to decode
 * @param geosub_linear_values C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_linear_values_decode(const mavlink_message_t* msg, mavlink_geosub_linear_values_t* geosub_linear_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_linear_values->x_pos = mavlink_msg_geosub_linear_values_get_x_pos(msg);
    geosub_linear_values->y_pos = mavlink_msg_geosub_linear_values_get_y_pos(msg);
    geosub_linear_values->z_pos = mavlink_msg_geosub_linear_values_get_z_pos(msg);
    geosub_linear_values->x_vel = mavlink_msg_geosub_linear_values_get_x_vel(msg);
    geosub_linear_values->y_vel = mavlink_msg_geosub_linear_values_get_y_vel(msg);
    geosub_linear_values->z_vel = mavlink_msg_geosub_linear_values_get_z_vel(msg);
    geosub_linear_values->x_acc = mavlink_msg_geosub_linear_values_get_x_acc(msg);
    geosub_linear_values->y_acc = mavlink_msg_geosub_linear_values_get_y_acc(msg);
    geosub_linear_values->z_acc = mavlink_msg_geosub_linear_values_get_z_acc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN;
        memset(geosub_linear_values, 0, MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_LEN);
    memcpy(geosub_linear_values, _MAV_PAYLOAD(msg), len);
#endif
}
