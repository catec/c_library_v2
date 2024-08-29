#pragma once
// MESSAGE GEOSUB_MISC_VALUES PACKING

#define MAVLINK_MSG_ID_GEOSUB_MISC_VALUES 14003


typedef struct __mavlink_geosub_misc_values_t {
 float integrity; /*<  integrity*/
 uint8_t num_sat; /*<  Number of satellites*/
 int8_t sbas_correction; /*<  Yaw Position*/
} mavlink_geosub_misc_values_t;

#define MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN 6
#define MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN 6
#define MAVLINK_MSG_ID_14003_LEN 6
#define MAVLINK_MSG_ID_14003_MIN_LEN 6

#define MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC 204
#define MAVLINK_MSG_ID_14003_CRC 204



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_MISC_VALUES { \
    14003, \
    "GEOSUB_MISC_VALUES", \
    3, \
    {  { "integrity", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_misc_values_t, integrity) }, \
         { "num_sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_geosub_misc_values_t, num_sat) }, \
         { "sbas_correction", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_geosub_misc_values_t, sbas_correction) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_MISC_VALUES { \
    "GEOSUB_MISC_VALUES", \
    3, \
    {  { "integrity", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_misc_values_t, integrity) }, \
         { "num_sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_geosub_misc_values_t, num_sat) }, \
         { "sbas_correction", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_geosub_misc_values_t, sbas_correction) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_misc_values message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param integrity  integrity
 * @param num_sat  Number of satellites
 * @param sbas_correction  Yaw Position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_misc_values_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float integrity, uint8_t num_sat, int8_t sbas_correction)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN];
    _mav_put_float(buf, 0, integrity);
    _mav_put_uint8_t(buf, 4, num_sat);
    _mav_put_int8_t(buf, 5, sbas_correction);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN);
#else
    mavlink_geosub_misc_values_t packet;
    packet.integrity = integrity;
    packet.num_sat = num_sat;
    packet.sbas_correction = sbas_correction;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MISC_VALUES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
}

/**
 * @brief Pack a geosub_misc_values message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param integrity  integrity
 * @param num_sat  Number of satellites
 * @param sbas_correction  Yaw Position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_misc_values_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float integrity,uint8_t num_sat,int8_t sbas_correction)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN];
    _mav_put_float(buf, 0, integrity);
    _mav_put_uint8_t(buf, 4, num_sat);
    _mav_put_int8_t(buf, 5, sbas_correction);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN);
#else
    mavlink_geosub_misc_values_t packet;
    packet.integrity = integrity;
    packet.num_sat = num_sat;
    packet.sbas_correction = sbas_correction;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MISC_VALUES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
}

/**
 * @brief Encode a geosub_misc_values struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_misc_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_misc_values_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_misc_values_t* geosub_misc_values)
{
    return mavlink_msg_geosub_misc_values_pack(system_id, component_id, msg, geosub_misc_values->integrity, geosub_misc_values->num_sat, geosub_misc_values->sbas_correction);
}

/**
 * @brief Encode a geosub_misc_values struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_misc_values C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_misc_values_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_misc_values_t* geosub_misc_values)
{
    return mavlink_msg_geosub_misc_values_pack_chan(system_id, component_id, chan, msg, geosub_misc_values->integrity, geosub_misc_values->num_sat, geosub_misc_values->sbas_correction);
}

/**
 * @brief Send a geosub_misc_values message
 * @param chan MAVLink channel to send the message
 *
 * @param integrity  integrity
 * @param num_sat  Number of satellites
 * @param sbas_correction  Yaw Position
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_misc_values_send(mavlink_channel_t chan, float integrity, uint8_t num_sat, int8_t sbas_correction)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN];
    _mav_put_float(buf, 0, integrity);
    _mav_put_uint8_t(buf, 4, num_sat);
    _mav_put_int8_t(buf, 5, sbas_correction);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
#else
    mavlink_geosub_misc_values_t packet;
    packet.integrity = integrity;
    packet.num_sat = num_sat;
    packet.sbas_correction = sbas_correction;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
#endif
}

/**
 * @brief Send a geosub_misc_values message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_misc_values_send_struct(mavlink_channel_t chan, const mavlink_geosub_misc_values_t* geosub_misc_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_misc_values_send(chan, geosub_misc_values->integrity, geosub_misc_values->num_sat, geosub_misc_values->sbas_correction);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES, (const char *)geosub_misc_values, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_misc_values_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float integrity, uint8_t num_sat, int8_t sbas_correction)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, integrity);
    _mav_put_uint8_t(buf, 4, num_sat);
    _mav_put_int8_t(buf, 5, sbas_correction);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES, buf, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
#else
    mavlink_geosub_misc_values_t *packet = (mavlink_geosub_misc_values_t *)msgbuf;
    packet->integrity = integrity;
    packet->num_sat = num_sat;
    packet->sbas_correction = sbas_correction;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_MISC_VALUES UNPACKING


/**
 * @brief Get field integrity from geosub_misc_values message
 *
 * @return  integrity
 */
static inline float mavlink_msg_geosub_misc_values_get_integrity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field num_sat from geosub_misc_values message
 *
 * @return  Number of satellites
 */
static inline uint8_t mavlink_msg_geosub_misc_values_get_num_sat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field sbas_correction from geosub_misc_values message
 *
 * @return  Yaw Position
 */
static inline int8_t mavlink_msg_geosub_misc_values_get_sbas_correction(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Decode a geosub_misc_values message into a struct
 *
 * @param msg The message to decode
 * @param geosub_misc_values C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_misc_values_decode(const mavlink_message_t* msg, mavlink_geosub_misc_values_t* geosub_misc_values)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_misc_values->integrity = mavlink_msg_geosub_misc_values_get_integrity(msg);
    geosub_misc_values->num_sat = mavlink_msg_geosub_misc_values_get_num_sat(msg);
    geosub_misc_values->sbas_correction = mavlink_msg_geosub_misc_values_get_sbas_correction(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN;
        memset(geosub_misc_values, 0, MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_LEN);
    memcpy(geosub_misc_values, _MAV_PAYLOAD(msg), len);
#endif
}
