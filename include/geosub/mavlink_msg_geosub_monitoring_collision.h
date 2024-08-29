#pragma once
// MESSAGE GEOSUB_MONITORING_COLLISION PACKING

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION 14008


typedef struct __mavlink_geosub_monitoring_collision_t {
 uint32_t id; /*<  id*/
 float time_to_minimum_delta; /*<  Time to minimum delta*/
 float altitude_minimum_delta; /*<  Altitude minimum delta*/
 float horizontal_minimum_delta; /*<  Horizontal minimum delta*/
 uint8_t collision_src; /*<  see MAV_COLLISION_SRC enum*/
 uint8_t collision_action; /*<  see MAV_COLLISION_ACTION enum*/
 uint8_t threat_level; /*<  see MAV_COLLISION_THREAT_LEVEL enum*/
} mavlink_geosub_monitoring_collision_t;

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN 19
#define MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN 19
#define MAVLINK_MSG_ID_14008_LEN 19
#define MAVLINK_MSG_ID_14008_MIN_LEN 19

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC 2
#define MAVLINK_MSG_ID_14008_CRC 2



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_MONITORING_COLLISION { \
    14008, \
    "GEOSUB_MONITORING_COLLISION", \
    7, \
    {  { "collision_src", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_geosub_monitoring_collision_t, collision_src) }, \
         { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_monitoring_collision_t, id) }, \
         { "collision_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_geosub_monitoring_collision_t, collision_action) }, \
         { "threat_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_geosub_monitoring_collision_t, threat_level) }, \
         { "time_to_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_monitoring_collision_t, time_to_minimum_delta) }, \
         { "altitude_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_monitoring_collision_t, altitude_minimum_delta) }, \
         { "horizontal_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_monitoring_collision_t, horizontal_minimum_delta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_MONITORING_COLLISION { \
    "GEOSUB_MONITORING_COLLISION", \
    7, \
    {  { "collision_src", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_geosub_monitoring_collision_t, collision_src) }, \
         { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_monitoring_collision_t, id) }, \
         { "collision_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_geosub_monitoring_collision_t, collision_action) }, \
         { "threat_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_geosub_monitoring_collision_t, threat_level) }, \
         { "time_to_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_monitoring_collision_t, time_to_minimum_delta) }, \
         { "altitude_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_monitoring_collision_t, altitude_minimum_delta) }, \
         { "horizontal_minimum_delta", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_monitoring_collision_t, horizontal_minimum_delta) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_monitoring_collision message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param id  id
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param time_to_minimum_delta  Time to minimum delta
 * @param altitude_minimum_delta  Altitude minimum delta
 * @param horizontal_minimum_delta  Horizontal minimum delta
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_monitoring_collision_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t collision_src, uint32_t id, uint8_t collision_action, uint8_t threat_level, float time_to_minimum_delta, float altitude_minimum_delta, float horizontal_minimum_delta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, time_to_minimum_delta);
    _mav_put_float(buf, 8, altitude_minimum_delta);
    _mav_put_float(buf, 12, horizontal_minimum_delta);
    _mav_put_uint8_t(buf, 16, collision_src);
    _mav_put_uint8_t(buf, 17, collision_action);
    _mav_put_uint8_t(buf, 18, threat_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN);
#else
    mavlink_geosub_monitoring_collision_t packet;
    packet.id = id;
    packet.time_to_minimum_delta = time_to_minimum_delta;
    packet.altitude_minimum_delta = altitude_minimum_delta;
    packet.horizontal_minimum_delta = horizontal_minimum_delta;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.threat_level = threat_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
}

/**
 * @brief Pack a geosub_monitoring_collision message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param id  id
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param time_to_minimum_delta  Time to minimum delta
 * @param altitude_minimum_delta  Altitude minimum delta
 * @param horizontal_minimum_delta  Horizontal minimum delta
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_monitoring_collision_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t collision_src,uint32_t id,uint8_t collision_action,uint8_t threat_level,float time_to_minimum_delta,float altitude_minimum_delta,float horizontal_minimum_delta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, time_to_minimum_delta);
    _mav_put_float(buf, 8, altitude_minimum_delta);
    _mav_put_float(buf, 12, horizontal_minimum_delta);
    _mav_put_uint8_t(buf, 16, collision_src);
    _mav_put_uint8_t(buf, 17, collision_action);
    _mav_put_uint8_t(buf, 18, threat_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN);
#else
    mavlink_geosub_monitoring_collision_t packet;
    packet.id = id;
    packet.time_to_minimum_delta = time_to_minimum_delta;
    packet.altitude_minimum_delta = altitude_minimum_delta;
    packet.horizontal_minimum_delta = horizontal_minimum_delta;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.threat_level = threat_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
}

/**
 * @brief Encode a geosub_monitoring_collision struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_monitoring_collision C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_monitoring_collision_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_monitoring_collision_t* geosub_monitoring_collision)
{
    return mavlink_msg_geosub_monitoring_collision_pack(system_id, component_id, msg, geosub_monitoring_collision->collision_src, geosub_monitoring_collision->id, geosub_monitoring_collision->collision_action, geosub_monitoring_collision->threat_level, geosub_monitoring_collision->time_to_minimum_delta, geosub_monitoring_collision->altitude_minimum_delta, geosub_monitoring_collision->horizontal_minimum_delta);
}

/**
 * @brief Encode a geosub_monitoring_collision struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_monitoring_collision C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_monitoring_collision_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_monitoring_collision_t* geosub_monitoring_collision)
{
    return mavlink_msg_geosub_monitoring_collision_pack_chan(system_id, component_id, chan, msg, geosub_monitoring_collision->collision_src, geosub_monitoring_collision->id, geosub_monitoring_collision->collision_action, geosub_monitoring_collision->threat_level, geosub_monitoring_collision->time_to_minimum_delta, geosub_monitoring_collision->altitude_minimum_delta, geosub_monitoring_collision->horizontal_minimum_delta);
}

/**
 * @brief Send a geosub_monitoring_collision message
 * @param chan MAVLink channel to send the message
 *
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param id  id
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param time_to_minimum_delta  Time to minimum delta
 * @param altitude_minimum_delta  Altitude minimum delta
 * @param horizontal_minimum_delta  Horizontal minimum delta
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_monitoring_collision_send(mavlink_channel_t chan, uint8_t collision_src, uint32_t id, uint8_t collision_action, uint8_t threat_level, float time_to_minimum_delta, float altitude_minimum_delta, float horizontal_minimum_delta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, time_to_minimum_delta);
    _mav_put_float(buf, 8, altitude_minimum_delta);
    _mav_put_float(buf, 12, horizontal_minimum_delta);
    _mav_put_uint8_t(buf, 16, collision_src);
    _mav_put_uint8_t(buf, 17, collision_action);
    _mav_put_uint8_t(buf, 18, threat_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION, buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
#else
    mavlink_geosub_monitoring_collision_t packet;
    packet.id = id;
    packet.time_to_minimum_delta = time_to_minimum_delta;
    packet.altitude_minimum_delta = altitude_minimum_delta;
    packet.horizontal_minimum_delta = horizontal_minimum_delta;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.threat_level = threat_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
#endif
}

/**
 * @brief Send a geosub_monitoring_collision message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_monitoring_collision_send_struct(mavlink_channel_t chan, const mavlink_geosub_monitoring_collision_t* geosub_monitoring_collision)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_monitoring_collision_send(chan, geosub_monitoring_collision->collision_src, geosub_monitoring_collision->id, geosub_monitoring_collision->collision_action, geosub_monitoring_collision->threat_level, geosub_monitoring_collision->time_to_minimum_delta, geosub_monitoring_collision->altitude_minimum_delta, geosub_monitoring_collision->horizontal_minimum_delta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION, (const char *)geosub_monitoring_collision, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_monitoring_collision_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t collision_src, uint32_t id, uint8_t collision_action, uint8_t threat_level, float time_to_minimum_delta, float altitude_minimum_delta, float horizontal_minimum_delta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, time_to_minimum_delta);
    _mav_put_float(buf, 8, altitude_minimum_delta);
    _mav_put_float(buf, 12, horizontal_minimum_delta);
    _mav_put_uint8_t(buf, 16, collision_src);
    _mav_put_uint8_t(buf, 17, collision_action);
    _mav_put_uint8_t(buf, 18, threat_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION, buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
#else
    mavlink_geosub_monitoring_collision_t *packet = (mavlink_geosub_monitoring_collision_t *)msgbuf;
    packet->id = id;
    packet->time_to_minimum_delta = time_to_minimum_delta;
    packet->altitude_minimum_delta = altitude_minimum_delta;
    packet->horizontal_minimum_delta = horizontal_minimum_delta;
    packet->collision_src = collision_src;
    packet->collision_action = collision_action;
    packet->threat_level = threat_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_MONITORING_COLLISION UNPACKING


/**
 * @brief Get field collision_src from geosub_monitoring_collision message
 *
 * @return  see MAV_COLLISION_SRC enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_collision_get_collision_src(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field id from geosub_monitoring_collision message
 *
 * @return  id
 */
static inline uint32_t mavlink_msg_geosub_monitoring_collision_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field collision_action from geosub_monitoring_collision message
 *
 * @return  see MAV_COLLISION_ACTION enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_collision_get_collision_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field threat_level from geosub_monitoring_collision message
 *
 * @return  see MAV_COLLISION_THREAT_LEVEL enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_collision_get_threat_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field time_to_minimum_delta from geosub_monitoring_collision message
 *
 * @return  Time to minimum delta
 */
static inline float mavlink_msg_geosub_monitoring_collision_get_time_to_minimum_delta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field altitude_minimum_delta from geosub_monitoring_collision message
 *
 * @return  Altitude minimum delta
 */
static inline float mavlink_msg_geosub_monitoring_collision_get_altitude_minimum_delta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field horizontal_minimum_delta from geosub_monitoring_collision message
 *
 * @return  Horizontal minimum delta
 */
static inline float mavlink_msg_geosub_monitoring_collision_get_horizontal_minimum_delta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a geosub_monitoring_collision message into a struct
 *
 * @param msg The message to decode
 * @param geosub_monitoring_collision C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_monitoring_collision_decode(const mavlink_message_t* msg, mavlink_geosub_monitoring_collision_t* geosub_monitoring_collision)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_monitoring_collision->id = mavlink_msg_geosub_monitoring_collision_get_id(msg);
    geosub_monitoring_collision->time_to_minimum_delta = mavlink_msg_geosub_monitoring_collision_get_time_to_minimum_delta(msg);
    geosub_monitoring_collision->altitude_minimum_delta = mavlink_msg_geosub_monitoring_collision_get_altitude_minimum_delta(msg);
    geosub_monitoring_collision->horizontal_minimum_delta = mavlink_msg_geosub_monitoring_collision_get_horizontal_minimum_delta(msg);
    geosub_monitoring_collision->collision_src = mavlink_msg_geosub_monitoring_collision_get_collision_src(msg);
    geosub_monitoring_collision->collision_action = mavlink_msg_geosub_monitoring_collision_get_collision_action(msg);
    geosub_monitoring_collision->threat_level = mavlink_msg_geosub_monitoring_collision_get_threat_level(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN;
        memset(geosub_monitoring_collision, 0, MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_LEN);
    memcpy(geosub_monitoring_collision, _MAV_PAYLOAD(msg), len);
#endif
}
