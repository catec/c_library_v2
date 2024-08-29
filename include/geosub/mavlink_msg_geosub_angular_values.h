#pragma once
// MESSAGE GEOSUB_ANGULAR_VALUES PACKING

#define MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES 14002


typedef struct __mavlink_geosub_angular_values_t {
 float roll_pos; /*<  Roll Position*/
 float pitch_pos; /*<  Pitch Position*/
 float yaw_pos; /*<  Yaw Position*/
 float roll_vel; /*<  Roll Velocity*/
 float pitch_vel; /*<  Pitch Velocity*/
 float yaw_vel; /*<  Yaw Velocity*/
 float roll_acc; /*<  Roll Acceleration*/
 float pitch_acc; /*<  Pitch Acceleration*/
 float yaw_acc; /*<  Yaw Acceleration*/
} mavlink_geosub_angular_values_t;

#define MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN 36
#define MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN 36
#define MAVLINK_MSG_ID_14002_LEN 36
#define MAVLINK_MSG_ID_14002_MIN_LEN 36

#define MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC 222
#define MAVLINK_MSG_ID_14002_CRC 222



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_ANGULAR_VALUES { \
    14002, \
    "GEOSUB_ANGULAR_VALUES", \
    9, \
    {  { "roll_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_angular_values_t, roll_pos) }, \
         { "pitch_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_angular_values_t, pitch_pos) }, \
         { "yaw_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_angular_values_t, yaw_pos) }, \
         { "roll_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_angular_values_t, roll_vel) }, \
         { "pitch_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_angular_values_t, pitch_vel) }, \
         { "yaw_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_angular_values_t, yaw_vel) }, \
         { "roll_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_angular_values_t, roll_acc) }, \
         { "pitch_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_angular_values_t, pitch_acc) }, \
         { "yaw_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_angular_values_t, yaw_acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_ANGULAR_VALUES { \
    "GEOSUB_ANGULAR_VALUES", \
    9, \
    {  { "roll_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_angular_values_t, roll_pos) }, \
         { "pitch_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_angular_values_t, pitch_pos) }, \
         { "yaw_pos", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_angular_values_t, yaw_pos) }, \
         { "roll_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_angular_values_t, roll_vel) }, \
         { "pitch_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_angular_values_t, pitch_vel) }, \
         { "yaw_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_angular_values_t, yaw_vel) }, \
         { "roll_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_angular_values_t, roll_acc) }, \
         { "pitch_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_angular_values_t, pitch_acc) }, \
         { "yaw_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_angular_values_t, yaw_acc) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_angular_values message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param roll_pos  Roll Position
 * @param pitch_pos  Pitch Position
 * @param yaw_pos  Yaw Position
 * @param roll_vel  Roll Velocity
 * @param pitch_vel  Pitch Velocity
 * @param yaw_vel  Yaw Velocity
 * @param roll_acc  Roll Acceleration
 * @param pitch_acc  Pitch Acceleration
 * @param yaw_acc  Yaw Acceleration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_angular_values_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float roll_pos, float pitch_pos, float yaw_pos, float roll_vel, float pitch_vel, float yaw_vel, float roll_acc, float pitch_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN];
    _mav_put_float(buf, 0, roll_pos);
    _mav_put_float(buf, 4, pitch_pos);
    _mav_put_float(buf, 8, yaw_pos);
    _mav_put_float(buf, 12, roll_vel);
    _mav_put_float(buf, 16, pitch_vel);
    _mav_put_float(buf, 20, yaw_vel);
    _mav_put_float(buf, 24, roll_acc);
    _mav_put_float(buf, 28, pitch_acc);
    _mav_put_float(buf, 32, yaw_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN);
#else
    mavlink_geosub_angular_values_t packet;
    packet.roll_pos = roll_pos;
    packet.pitch_pos = pitch_pos;
    packet.yaw_pos = yaw_pos;
    packet.roll_vel = roll_vel;
    packet.pitch_vel = pitch_vel;
    packet.yaw_vel = yaw_vel;
    packet.roll_acc = roll_acc;
    packet.pitch_acc = pitch_acc;
    packet.yaw_acc = yaw_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
}

/**
 * @brief Pack a geosub_angular_values message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roll_pos  Roll Position
 * @param pitch_pos  Pitch Position
 * @param yaw_pos  Yaw Position
 * @param roll_vel  Roll Velocity
 * @param pitch_vel  Pitch Velocity
 * @param yaw_vel  Yaw Velocity
 * @param roll_acc  Roll Acceleration
 * @param pitch_acc  Pitch Acceleration
 * @param yaw_acc  Yaw Acceleration
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_angular_values_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float roll_pos,float pitch_pos,float yaw_pos,float roll_vel,float pitch_vel,float yaw_vel,float roll_acc,float pitch_acc,float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN];
    _mav_put_float(buf, 0, roll_pos);
    _mav_put_float(buf, 4, pitch_pos);
    _mav_put_float(buf, 8, yaw_pos);
    _mav_put_float(buf, 12, roll_vel);
    _mav_put_float(buf, 16, pitch_vel);
    _mav_put_float(buf, 20, yaw_vel);
    _mav_put_float(buf, 24, roll_acc);
    _mav_put_float(buf, 28, pitch_acc);
    _mav_put_float(buf, 32, yaw_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN);
#else
    mavlink_geosub_angular_values_t packet;
    packet.roll_pos = roll_pos;
    packet.pitch_pos = pitch_pos;
    packet.yaw_pos = yaw_pos;
    packet.roll_vel = roll_vel;
    packet.pitch_vel = pitch_vel;
    packet.yaw_vel = yaw_vel;
    packet.roll_acc = roll_acc;
    packet.pitch_acc = pitch_acc;
    packet.yaw_acc = yaw_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
}

/**
 * @brief Encode a geosub_angular_values struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_angular_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_angular_values_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_angular_values_t* geosub_angular_values)
{
    return mavlink_msg_geosub_angular_values_pack(system_id, component_id, msg, geosub_angular_values->roll_pos, geosub_angular_values->pitch_pos, geosub_angular_values->yaw_pos, geosub_angular_values->roll_vel, geosub_angular_values->pitch_vel, geosub_angular_values->yaw_vel, geosub_angular_values->roll_acc, geosub_angular_values->pitch_acc, geosub_angular_values->yaw_acc);
}

/**
 * @brief Encode a geosub_angular_values struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_angular_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_angular_values_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_angular_values_t* geosub_angular_values)
{
    return mavlink_msg_geosub_angular_values_pack_chan(system_id, component_id, chan, msg, geosub_angular_values->roll_pos, geosub_angular_values->pitch_pos, geosub_angular_values->yaw_pos, geosub_angular_values->roll_vel, geosub_angular_values->pitch_vel, geosub_angular_values->yaw_vel, geosub_angular_values->roll_acc, geosub_angular_values->pitch_acc, geosub_angular_values->yaw_acc);
}

/**
 * @brief Send a geosub_angular_values message
 * @param chan MAVLink channel to send the message
 *
 * @param roll_pos  Roll Position
 * @param pitch_pos  Pitch Position
 * @param yaw_pos  Yaw Position
 * @param roll_vel  Roll Velocity
 * @param pitch_vel  Pitch Velocity
 * @param yaw_vel  Yaw Velocity
 * @param roll_acc  Roll Acceleration
 * @param pitch_acc  Pitch Acceleration
 * @param yaw_acc  Yaw Acceleration
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_angular_values_send(mavlink_channel_t chan, float roll_pos, float pitch_pos, float yaw_pos, float roll_vel, float pitch_vel, float yaw_vel, float roll_acc, float pitch_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN];
    _mav_put_float(buf, 0, roll_pos);
    _mav_put_float(buf, 4, pitch_pos);
    _mav_put_float(buf, 8, yaw_pos);
    _mav_put_float(buf, 12, roll_vel);
    _mav_put_float(buf, 16, pitch_vel);
    _mav_put_float(buf, 20, yaw_vel);
    _mav_put_float(buf, 24, roll_acc);
    _mav_put_float(buf, 28, pitch_acc);
    _mav_put_float(buf, 32, yaw_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
#else
    mavlink_geosub_angular_values_t packet;
    packet.roll_pos = roll_pos;
    packet.pitch_pos = pitch_pos;
    packet.yaw_pos = yaw_pos;
    packet.roll_vel = roll_vel;
    packet.pitch_vel = pitch_vel;
    packet.yaw_vel = yaw_vel;
    packet.roll_acc = roll_acc;
    packet.pitch_acc = pitch_acc;
    packet.yaw_acc = yaw_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
#endif
}

/**
 * @brief Send a geosub_angular_values message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_angular_values_send_struct(mavlink_channel_t chan, const mavlink_geosub_angular_values_t* geosub_angular_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_angular_values_send(chan, geosub_angular_values->roll_pos, geosub_angular_values->pitch_pos, geosub_angular_values->yaw_pos, geosub_angular_values->roll_vel, geosub_angular_values->pitch_vel, geosub_angular_values->yaw_vel, geosub_angular_values->roll_acc, geosub_angular_values->pitch_acc, geosub_angular_values->yaw_acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES, (const char *)geosub_angular_values, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_angular_values_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float roll_pos, float pitch_pos, float yaw_pos, float roll_vel, float pitch_vel, float yaw_vel, float roll_acc, float pitch_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, roll_pos);
    _mav_put_float(buf, 4, pitch_pos);
    _mav_put_float(buf, 8, yaw_pos);
    _mav_put_float(buf, 12, roll_vel);
    _mav_put_float(buf, 16, pitch_vel);
    _mav_put_float(buf, 20, yaw_vel);
    _mav_put_float(buf, 24, roll_acc);
    _mav_put_float(buf, 28, pitch_acc);
    _mav_put_float(buf, 32, yaw_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
#else
    mavlink_geosub_angular_values_t *packet = (mavlink_geosub_angular_values_t *)msgbuf;
    packet->roll_pos = roll_pos;
    packet->pitch_pos = pitch_pos;
    packet->yaw_pos = yaw_pos;
    packet->roll_vel = roll_vel;
    packet->pitch_vel = pitch_vel;
    packet->yaw_vel = yaw_vel;
    packet->roll_acc = roll_acc;
    packet->pitch_acc = pitch_acc;
    packet->yaw_acc = yaw_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_ANGULAR_VALUES UNPACKING


/**
 * @brief Get field roll_pos from geosub_angular_values message
 *
 * @return  Roll Position
 */
static inline float mavlink_msg_geosub_angular_values_get_roll_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_pos from geosub_angular_values message
 *
 * @return  Pitch Position
 */
static inline float mavlink_msg_geosub_angular_values_get_pitch_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yaw_pos from geosub_angular_values message
 *
 * @return  Yaw Position
 */
static inline float mavlink_msg_geosub_angular_values_get_yaw_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field roll_vel from geosub_angular_values message
 *
 * @return  Roll Velocity
 */
static inline float mavlink_msg_geosub_angular_values_get_roll_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch_vel from geosub_angular_values message
 *
 * @return  Pitch Velocity
 */
static inline float mavlink_msg_geosub_angular_values_get_pitch_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw_vel from geosub_angular_values message
 *
 * @return  Yaw Velocity
 */
static inline float mavlink_msg_geosub_angular_values_get_yaw_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field roll_acc from geosub_angular_values message
 *
 * @return  Roll Acceleration
 */
static inline float mavlink_msg_geosub_angular_values_get_roll_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field pitch_acc from geosub_angular_values message
 *
 * @return  Pitch Acceleration
 */
static inline float mavlink_msg_geosub_angular_values_get_pitch_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field yaw_acc from geosub_angular_values message
 *
 * @return  Yaw Acceleration
 */
static inline float mavlink_msg_geosub_angular_values_get_yaw_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a geosub_angular_values message into a struct
 *
 * @param msg The message to decode
 * @param geosub_angular_values C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_angular_values_decode(const mavlink_message_t* msg, mavlink_geosub_angular_values_t* geosub_angular_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_angular_values->roll_pos = mavlink_msg_geosub_angular_values_get_roll_pos(msg);
    geosub_angular_values->pitch_pos = mavlink_msg_geosub_angular_values_get_pitch_pos(msg);
    geosub_angular_values->yaw_pos = mavlink_msg_geosub_angular_values_get_yaw_pos(msg);
    geosub_angular_values->roll_vel = mavlink_msg_geosub_angular_values_get_roll_vel(msg);
    geosub_angular_values->pitch_vel = mavlink_msg_geosub_angular_values_get_pitch_vel(msg);
    geosub_angular_values->yaw_vel = mavlink_msg_geosub_angular_values_get_yaw_vel(msg);
    geosub_angular_values->roll_acc = mavlink_msg_geosub_angular_values_get_roll_acc(msg);
    geosub_angular_values->pitch_acc = mavlink_msg_geosub_angular_values_get_pitch_acc(msg);
    geosub_angular_values->yaw_acc = mavlink_msg_geosub_angular_values_get_yaw_acc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN;
        memset(geosub_angular_values, 0, MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_LEN);
    memcpy(geosub_angular_values, _MAV_PAYLOAD(msg), len);
#endif
}
