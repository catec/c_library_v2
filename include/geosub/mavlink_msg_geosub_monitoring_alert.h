#pragma once
// MESSAGE GEOSUB_MONITORING_ALERT PACKING

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT 14007


typedef struct __mavlink_geosub_monitoring_alert_t {
 uint32_t ICAO_address; /*<  ICAO Address*/
 uint8_t alert_type; /*<  Alert Type*/
 uint8_t threat_level; /*<  see MAV_COLLISION_THREAT_LEVEL enum*/
 uint8_t collision_src; /*<  see MAV_COLLISION_SRC enum*/
 uint8_t collision_action; /*<  see MAV_COLLISION_ACTION enum*/
 uint8_t status_adsb; /*<  */
} mavlink_geosub_monitoring_alert_t;

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN 9
#define MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN 9
#define MAVLINK_MSG_ID_14007_LEN 9
#define MAVLINK_MSG_ID_14007_MIN_LEN 9

#define MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC 108
#define MAVLINK_MSG_ID_14007_CRC 108



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_MONITORING_ALERT { \
    14007, \
    "GEOSUB_MONITORING_ALERT", \
    6, \
    {  { "alert_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_geosub_monitoring_alert_t, alert_type) }, \
         { "ICAO_address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_monitoring_alert_t, ICAO_address) }, \
         { "threat_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_geosub_monitoring_alert_t, threat_level) }, \
         { "collision_src", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_geosub_monitoring_alert_t, collision_src) }, \
         { "collision_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_geosub_monitoring_alert_t, collision_action) }, \
         { "status_adsb", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_geosub_monitoring_alert_t, status_adsb) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_MONITORING_ALERT { \
    "GEOSUB_MONITORING_ALERT", \
    6, \
    {  { "alert_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_geosub_monitoring_alert_t, alert_type) }, \
         { "ICAO_address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_monitoring_alert_t, ICAO_address) }, \
         { "threat_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_geosub_monitoring_alert_t, threat_level) }, \
         { "collision_src", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_geosub_monitoring_alert_t, collision_src) }, \
         { "collision_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_geosub_monitoring_alert_t, collision_action) }, \
         { "status_adsb", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_geosub_monitoring_alert_t, status_adsb) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_monitoring_alert message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param alert_type  Alert Type
 * @param ICAO_address  ICAO Address
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param status_adsb  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_monitoring_alert_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t alert_type, uint32_t ICAO_address, uint8_t threat_level, uint8_t collision_src, uint8_t collision_action, uint8_t status_adsb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN];
    _mav_put_uint32_t(buf, 0, ICAO_address);
    _mav_put_uint8_t(buf, 4, alert_type);
    _mav_put_uint8_t(buf, 5, threat_level);
    _mav_put_uint8_t(buf, 6, collision_src);
    _mav_put_uint8_t(buf, 7, collision_action);
    _mav_put_uint8_t(buf, 8, status_adsb);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN);
#else
    mavlink_geosub_monitoring_alert_t packet;
    packet.ICAO_address = ICAO_address;
    packet.alert_type = alert_type;
    packet.threat_level = threat_level;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.status_adsb = status_adsb;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
}

/**
 * @brief Pack a geosub_monitoring_alert message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param alert_type  Alert Type
 * @param ICAO_address  ICAO Address
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param status_adsb  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_monitoring_alert_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t alert_type,uint32_t ICAO_address,uint8_t threat_level,uint8_t collision_src,uint8_t collision_action,uint8_t status_adsb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN];
    _mav_put_uint32_t(buf, 0, ICAO_address);
    _mav_put_uint8_t(buf, 4, alert_type);
    _mav_put_uint8_t(buf, 5, threat_level);
    _mav_put_uint8_t(buf, 6, collision_src);
    _mav_put_uint8_t(buf, 7, collision_action);
    _mav_put_uint8_t(buf, 8, status_adsb);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN);
#else
    mavlink_geosub_monitoring_alert_t packet;
    packet.ICAO_address = ICAO_address;
    packet.alert_type = alert_type;
    packet.threat_level = threat_level;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.status_adsb = status_adsb;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
}

/**
 * @brief Encode a geosub_monitoring_alert struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_monitoring_alert C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_monitoring_alert_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_monitoring_alert_t* geosub_monitoring_alert)
{
    return mavlink_msg_geosub_monitoring_alert_pack(system_id, component_id, msg, geosub_monitoring_alert->alert_type, geosub_monitoring_alert->ICAO_address, geosub_monitoring_alert->threat_level, geosub_monitoring_alert->collision_src, geosub_monitoring_alert->collision_action, geosub_monitoring_alert->status_adsb);
}

/**
 * @brief Encode a geosub_monitoring_alert struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_monitoring_alert C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_monitoring_alert_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_monitoring_alert_t* geosub_monitoring_alert)
{
    return mavlink_msg_geosub_monitoring_alert_pack_chan(system_id, component_id, chan, msg, geosub_monitoring_alert->alert_type, geosub_monitoring_alert->ICAO_address, geosub_monitoring_alert->threat_level, geosub_monitoring_alert->collision_src, geosub_monitoring_alert->collision_action, geosub_monitoring_alert->status_adsb);
}

/**
 * @brief Send a geosub_monitoring_alert message
 * @param chan MAVLink channel to send the message
 *
 * @param alert_type  Alert Type
 * @param ICAO_address  ICAO Address
 * @param threat_level  see MAV_COLLISION_THREAT_LEVEL enum
 * @param collision_src  see MAV_COLLISION_SRC enum
 * @param collision_action  see MAV_COLLISION_ACTION enum
 * @param status_adsb  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_monitoring_alert_send(mavlink_channel_t chan, uint8_t alert_type, uint32_t ICAO_address, uint8_t threat_level, uint8_t collision_src, uint8_t collision_action, uint8_t status_adsb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN];
    _mav_put_uint32_t(buf, 0, ICAO_address);
    _mav_put_uint8_t(buf, 4, alert_type);
    _mav_put_uint8_t(buf, 5, threat_level);
    _mav_put_uint8_t(buf, 6, collision_src);
    _mav_put_uint8_t(buf, 7, collision_action);
    _mav_put_uint8_t(buf, 8, status_adsb);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT, buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
#else
    mavlink_geosub_monitoring_alert_t packet;
    packet.ICAO_address = ICAO_address;
    packet.alert_type = alert_type;
    packet.threat_level = threat_level;
    packet.collision_src = collision_src;
    packet.collision_action = collision_action;
    packet.status_adsb = status_adsb;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
#endif
}

/**
 * @brief Send a geosub_monitoring_alert message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_monitoring_alert_send_struct(mavlink_channel_t chan, const mavlink_geosub_monitoring_alert_t* geosub_monitoring_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_monitoring_alert_send(chan, geosub_monitoring_alert->alert_type, geosub_monitoring_alert->ICAO_address, geosub_monitoring_alert->threat_level, geosub_monitoring_alert->collision_src, geosub_monitoring_alert->collision_action, geosub_monitoring_alert->status_adsb);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT, (const char *)geosub_monitoring_alert, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_monitoring_alert_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t alert_type, uint32_t ICAO_address, uint8_t threat_level, uint8_t collision_src, uint8_t collision_action, uint8_t status_adsb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, ICAO_address);
    _mav_put_uint8_t(buf, 4, alert_type);
    _mav_put_uint8_t(buf, 5, threat_level);
    _mav_put_uint8_t(buf, 6, collision_src);
    _mav_put_uint8_t(buf, 7, collision_action);
    _mav_put_uint8_t(buf, 8, status_adsb);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT, buf, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
#else
    mavlink_geosub_monitoring_alert_t *packet = (mavlink_geosub_monitoring_alert_t *)msgbuf;
    packet->ICAO_address = ICAO_address;
    packet->alert_type = alert_type;
    packet->threat_level = threat_level;
    packet->collision_src = collision_src;
    packet->collision_action = collision_action;
    packet->status_adsb = status_adsb;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_MONITORING_ALERT UNPACKING


/**
 * @brief Get field alert_type from geosub_monitoring_alert message
 *
 * @return  Alert Type
 */
static inline uint8_t mavlink_msg_geosub_monitoring_alert_get_alert_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field ICAO_address from geosub_monitoring_alert message
 *
 * @return  ICAO Address
 */
static inline uint32_t mavlink_msg_geosub_monitoring_alert_get_ICAO_address(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field threat_level from geosub_monitoring_alert message
 *
 * @return  see MAV_COLLISION_THREAT_LEVEL enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_alert_get_threat_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field collision_src from geosub_monitoring_alert message
 *
 * @return  see MAV_COLLISION_SRC enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_alert_get_collision_src(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field collision_action from geosub_monitoring_alert message
 *
 * @return  see MAV_COLLISION_ACTION enum
 */
static inline uint8_t mavlink_msg_geosub_monitoring_alert_get_collision_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field status_adsb from geosub_monitoring_alert message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_geosub_monitoring_alert_get_status_adsb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a geosub_monitoring_alert message into a struct
 *
 * @param msg The message to decode
 * @param geosub_monitoring_alert C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_monitoring_alert_decode(const mavlink_message_t* msg, mavlink_geosub_monitoring_alert_t* geosub_monitoring_alert)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_monitoring_alert->ICAO_address = mavlink_msg_geosub_monitoring_alert_get_ICAO_address(msg);
    geosub_monitoring_alert->alert_type = mavlink_msg_geosub_monitoring_alert_get_alert_type(msg);
    geosub_monitoring_alert->threat_level = mavlink_msg_geosub_monitoring_alert_get_threat_level(msg);
    geosub_monitoring_alert->collision_src = mavlink_msg_geosub_monitoring_alert_get_collision_src(msg);
    geosub_monitoring_alert->collision_action = mavlink_msg_geosub_monitoring_alert_get_collision_action(msg);
    geosub_monitoring_alert->status_adsb = mavlink_msg_geosub_monitoring_alert_get_status_adsb(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN;
        memset(geosub_monitoring_alert, 0, MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_LEN);
    memcpy(geosub_monitoring_alert, _MAV_PAYLOAD(msg), len);
#endif
}
