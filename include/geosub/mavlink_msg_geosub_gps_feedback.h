#pragma once
// MESSAGE GEOSUB_GPS_FEEDBACK PACKING

#define MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK 14010


typedef struct __mavlink_geosub_gps_feedback_t {
 uint32_t utc_time; /*<  UTC Time*/
 int32_t lat; /*<  latitude*/
 int32_t lon; /*<  longitude*/
} mavlink_geosub_gps_feedback_t;

#define MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN 12
#define MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN 12
#define MAVLINK_MSG_ID_14010_LEN 12
#define MAVLINK_MSG_ID_14010_MIN_LEN 12

#define MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC 86
#define MAVLINK_MSG_ID_14010_CRC 86



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_GPS_FEEDBACK { \
    14010, \
    "GEOSUB_GPS_FEEDBACK", \
    3, \
    {  { "utc_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_gps_feedback_t, utc_time) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_gps_feedback_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_gps_feedback_t, lon) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_GPS_FEEDBACK { \
    "GEOSUB_GPS_FEEDBACK", \
    3, \
    {  { "utc_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_gps_feedback_t, utc_time) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_gps_feedback_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_gps_feedback_t, lon) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_gps_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_gps_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t utc_time, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN);
#else
    mavlink_geosub_gps_feedback_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
}

/**
 * @brief Pack a geosub_gps_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_gps_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t utc_time,int32_t lat,int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN);
#else
    mavlink_geosub_gps_feedback_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
}

/**
 * @brief Encode a geosub_gps_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_gps_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_gps_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_gps_feedback_t* geosub_gps_feedback)
{
    return mavlink_msg_geosub_gps_feedback_pack(system_id, component_id, msg, geosub_gps_feedback->utc_time, geosub_gps_feedback->lat, geosub_gps_feedback->lon);
}

/**
 * @brief Encode a geosub_gps_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_gps_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_gps_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_gps_feedback_t* geosub_gps_feedback)
{
    return mavlink_msg_geosub_gps_feedback_pack_chan(system_id, component_id, chan, msg, geosub_gps_feedback->utc_time, geosub_gps_feedback->lat, geosub_gps_feedback->lon);
}

/**
 * @brief Send a geosub_gps_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_gps_feedback_send(mavlink_channel_t chan, uint32_t utc_time, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK, buf, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
#else
    mavlink_geosub_gps_feedback_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a geosub_gps_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_gps_feedback_send_struct(mavlink_channel_t chan, const mavlink_geosub_gps_feedback_t* geosub_gps_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_gps_feedback_send(chan, geosub_gps_feedback->utc_time, geosub_gps_feedback->lat, geosub_gps_feedback->lon);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK, (const char *)geosub_gps_feedback, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_gps_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t utc_time, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK, buf, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
#else
    mavlink_geosub_gps_feedback_t *packet = (mavlink_geosub_gps_feedback_t *)msgbuf;
    packet->utc_time = utc_time;
    packet->lat = lat;
    packet->lon = lon;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_GPS_FEEDBACK UNPACKING


/**
 * @brief Get field utc_time from geosub_gps_feedback message
 *
 * @return  UTC Time
 */
static inline uint32_t mavlink_msg_geosub_gps_feedback_get_utc_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from geosub_gps_feedback message
 *
 * @return  latitude
 */
static inline int32_t mavlink_msg_geosub_gps_feedback_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from geosub_gps_feedback message
 *
 * @return  longitude
 */
static inline int32_t mavlink_msg_geosub_gps_feedback_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a geosub_gps_feedback message into a struct
 *
 * @param msg The message to decode
 * @param geosub_gps_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_gps_feedback_decode(const mavlink_message_t* msg, mavlink_geosub_gps_feedback_t* geosub_gps_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_gps_feedback->utc_time = mavlink_msg_geosub_gps_feedback_get_utc_time(msg);
    geosub_gps_feedback->lat = mavlink_msg_geosub_gps_feedback_get_lat(msg);
    geosub_gps_feedback->lon = mavlink_msg_geosub_gps_feedback_get_lon(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN;
        memset(geosub_gps_feedback, 0, MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_LEN);
    memcpy(geosub_gps_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
