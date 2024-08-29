#pragma once
// MESSAGE GEOSUB_ADSB_OUT_STATIC PACKING

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC 14006


typedef struct __mavlink_geosub_adsb_out_static_t {
 uint16_t stall_speed; /*<  Stall Speed*/
 uint8_t ICAO_address[3]; /*<  ICAO Address*/
 uint8_t integrity; /*<  Integrity*/
 char callsign[8]; /*<  calssign*/
 uint8_t capability; /*<  Capability*/
 uint8_t emitter; /*<  Emitter*/
 uint8_t alw_encode; /*<  ALW encode*/
 uint8_t gps_lat_offs; /*<  gps latitude offset*/
 uint8_t gps_lon_offs; /*<  gps longitude offset*/
} mavlink_geosub_adsb_out_static_t;

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN 19
#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN 19
#define MAVLINK_MSG_ID_14006_LEN 19
#define MAVLINK_MSG_ID_14006_MIN_LEN 19

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC 122
#define MAVLINK_MSG_ID_14006_CRC 122

#define MAVLINK_MSG_GEOSUB_ADSB_OUT_STATIC_FIELD_ICAO_ADDRESS_LEN 3
#define MAVLINK_MSG_GEOSUB_ADSB_OUT_STATIC_FIELD_CALLSIGN_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_OUT_STATIC { \
    14006, \
    "GEOSUB_ADSB_OUT_STATIC", \
    9, \
    {  { "ICAO_address", NULL, MAVLINK_TYPE_UINT8_T, 3, 2, offsetof(mavlink_geosub_adsb_out_static_t, ICAO_address) }, \
         { "integrity", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_geosub_adsb_out_static_t, integrity) }, \
         { "stall_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_geosub_adsb_out_static_t, stall_speed) }, \
         { "callsign", NULL, MAVLINK_TYPE_CHAR, 8, 6, offsetof(mavlink_geosub_adsb_out_static_t, callsign) }, \
         { "capability", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_geosub_adsb_out_static_t, capability) }, \
         { "emitter", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_geosub_adsb_out_static_t, emitter) }, \
         { "alw_encode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_geosub_adsb_out_static_t, alw_encode) }, \
         { "gps_lat_offs", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_geosub_adsb_out_static_t, gps_lat_offs) }, \
         { "gps_lon_offs", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_geosub_adsb_out_static_t, gps_lon_offs) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_OUT_STATIC { \
    "GEOSUB_ADSB_OUT_STATIC", \
    9, \
    {  { "ICAO_address", NULL, MAVLINK_TYPE_UINT8_T, 3, 2, offsetof(mavlink_geosub_adsb_out_static_t, ICAO_address) }, \
         { "integrity", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_geosub_adsb_out_static_t, integrity) }, \
         { "stall_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_geosub_adsb_out_static_t, stall_speed) }, \
         { "callsign", NULL, MAVLINK_TYPE_CHAR, 8, 6, offsetof(mavlink_geosub_adsb_out_static_t, callsign) }, \
         { "capability", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_geosub_adsb_out_static_t, capability) }, \
         { "emitter", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_geosub_adsb_out_static_t, emitter) }, \
         { "alw_encode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_geosub_adsb_out_static_t, alw_encode) }, \
         { "gps_lat_offs", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_geosub_adsb_out_static_t, gps_lat_offs) }, \
         { "gps_lon_offs", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_geosub_adsb_out_static_t, gps_lon_offs) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_adsb_out_static message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ICAO_address  ICAO Address
 * @param integrity  Integrity
 * @param stall_speed  Stall Speed
 * @param callsign  calssign
 * @param capability  Capability
 * @param emitter  Emitter
 * @param alw_encode  ALW encode
 * @param gps_lat_offs  gps latitude offset
 * @param gps_lon_offs  gps longitude offset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *ICAO_address, uint8_t integrity, uint16_t stall_speed, const char *callsign, uint8_t capability, uint8_t emitter, uint8_t alw_encode, uint8_t gps_lat_offs, uint8_t gps_lon_offs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN];
    _mav_put_uint16_t(buf, 0, stall_speed);
    _mav_put_uint8_t(buf, 5, integrity);
    _mav_put_uint8_t(buf, 14, capability);
    _mav_put_uint8_t(buf, 15, emitter);
    _mav_put_uint8_t(buf, 16, alw_encode);
    _mav_put_uint8_t(buf, 17, gps_lat_offs);
    _mav_put_uint8_t(buf, 18, gps_lon_offs);
    _mav_put_uint8_t_array(buf, 2, ICAO_address, 3);
    _mav_put_char_array(buf, 6, callsign, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN);
#else
    mavlink_geosub_adsb_out_static_t packet;
    packet.stall_speed = stall_speed;
    packet.integrity = integrity;
    packet.capability = capability;
    packet.emitter = emitter;
    packet.alw_encode = alw_encode;
    packet.gps_lat_offs = gps_lat_offs;
    packet.gps_lon_offs = gps_lon_offs;
    mav_array_memcpy(packet.ICAO_address, ICAO_address, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
}

/**
 * @brief Pack a geosub_adsb_out_static message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ICAO_address  ICAO Address
 * @param integrity  Integrity
 * @param stall_speed  Stall Speed
 * @param callsign  calssign
 * @param capability  Capability
 * @param emitter  Emitter
 * @param alw_encode  ALW encode
 * @param gps_lat_offs  gps latitude offset
 * @param gps_lon_offs  gps longitude offset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *ICAO_address,uint8_t integrity,uint16_t stall_speed,const char *callsign,uint8_t capability,uint8_t emitter,uint8_t alw_encode,uint8_t gps_lat_offs,uint8_t gps_lon_offs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN];
    _mav_put_uint16_t(buf, 0, stall_speed);
    _mav_put_uint8_t(buf, 5, integrity);
    _mav_put_uint8_t(buf, 14, capability);
    _mav_put_uint8_t(buf, 15, emitter);
    _mav_put_uint8_t(buf, 16, alw_encode);
    _mav_put_uint8_t(buf, 17, gps_lat_offs);
    _mav_put_uint8_t(buf, 18, gps_lon_offs);
    _mav_put_uint8_t_array(buf, 2, ICAO_address, 3);
    _mav_put_char_array(buf, 6, callsign, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN);
#else
    mavlink_geosub_adsb_out_static_t packet;
    packet.stall_speed = stall_speed;
    packet.integrity = integrity;
    packet.capability = capability;
    packet.emitter = emitter;
    packet.alw_encode = alw_encode;
    packet.gps_lat_offs = gps_lat_offs;
    packet.gps_lon_offs = gps_lon_offs;
    mav_array_memcpy(packet.ICAO_address, ICAO_address, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
}

/**
 * @brief Encode a geosub_adsb_out_static struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_out_static C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_adsb_out_static_t* geosub_adsb_out_static)
{
    return mavlink_msg_geosub_adsb_out_static_pack(system_id, component_id, msg, geosub_adsb_out_static->ICAO_address, geosub_adsb_out_static->integrity, geosub_adsb_out_static->stall_speed, geosub_adsb_out_static->callsign, geosub_adsb_out_static->capability, geosub_adsb_out_static->emitter, geosub_adsb_out_static->alw_encode, geosub_adsb_out_static->gps_lat_offs, geosub_adsb_out_static->gps_lon_offs);
}

/**
 * @brief Encode a geosub_adsb_out_static struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_out_static C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_adsb_out_static_t* geosub_adsb_out_static)
{
    return mavlink_msg_geosub_adsb_out_static_pack_chan(system_id, component_id, chan, msg, geosub_adsb_out_static->ICAO_address, geosub_adsb_out_static->integrity, geosub_adsb_out_static->stall_speed, geosub_adsb_out_static->callsign, geosub_adsb_out_static->capability, geosub_adsb_out_static->emitter, geosub_adsb_out_static->alw_encode, geosub_adsb_out_static->gps_lat_offs, geosub_adsb_out_static->gps_lon_offs);
}

/**
 * @brief Send a geosub_adsb_out_static message
 * @param chan MAVLink channel to send the message
 *
 * @param ICAO_address  ICAO Address
 * @param integrity  Integrity
 * @param stall_speed  Stall Speed
 * @param callsign  calssign
 * @param capability  Capability
 * @param emitter  Emitter
 * @param alw_encode  ALW encode
 * @param gps_lat_offs  gps latitude offset
 * @param gps_lon_offs  gps longitude offset
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_adsb_out_static_send(mavlink_channel_t chan, const uint8_t *ICAO_address, uint8_t integrity, uint16_t stall_speed, const char *callsign, uint8_t capability, uint8_t emitter, uint8_t alw_encode, uint8_t gps_lat_offs, uint8_t gps_lon_offs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN];
    _mav_put_uint16_t(buf, 0, stall_speed);
    _mav_put_uint8_t(buf, 5, integrity);
    _mav_put_uint8_t(buf, 14, capability);
    _mav_put_uint8_t(buf, 15, emitter);
    _mav_put_uint8_t(buf, 16, alw_encode);
    _mav_put_uint8_t(buf, 17, gps_lat_offs);
    _mav_put_uint8_t(buf, 18, gps_lon_offs);
    _mav_put_uint8_t_array(buf, 2, ICAO_address, 3);
    _mav_put_char_array(buf, 6, callsign, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
#else
    mavlink_geosub_adsb_out_static_t packet;
    packet.stall_speed = stall_speed;
    packet.integrity = integrity;
    packet.capability = capability;
    packet.emitter = emitter;
    packet.alw_encode = alw_encode;
    packet.gps_lat_offs = gps_lat_offs;
    packet.gps_lon_offs = gps_lon_offs;
    mav_array_memcpy(packet.ICAO_address, ICAO_address, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
#endif
}

/**
 * @brief Send a geosub_adsb_out_static message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_adsb_out_static_send_struct(mavlink_channel_t chan, const mavlink_geosub_adsb_out_static_t* geosub_adsb_out_static)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_adsb_out_static_send(chan, geosub_adsb_out_static->ICAO_address, geosub_adsb_out_static->integrity, geosub_adsb_out_static->stall_speed, geosub_adsb_out_static->callsign, geosub_adsb_out_static->capability, geosub_adsb_out_static->emitter, geosub_adsb_out_static->alw_encode, geosub_adsb_out_static->gps_lat_offs, geosub_adsb_out_static->gps_lon_offs);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC, (const char *)geosub_adsb_out_static, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_adsb_out_static_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *ICAO_address, uint8_t integrity, uint16_t stall_speed, const char *callsign, uint8_t capability, uint8_t emitter, uint8_t alw_encode, uint8_t gps_lat_offs, uint8_t gps_lon_offs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, stall_speed);
    _mav_put_uint8_t(buf, 5, integrity);
    _mav_put_uint8_t(buf, 14, capability);
    _mav_put_uint8_t(buf, 15, emitter);
    _mav_put_uint8_t(buf, 16, alw_encode);
    _mav_put_uint8_t(buf, 17, gps_lat_offs);
    _mav_put_uint8_t(buf, 18, gps_lon_offs);
    _mav_put_uint8_t_array(buf, 2, ICAO_address, 3);
    _mav_put_char_array(buf, 6, callsign, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
#else
    mavlink_geosub_adsb_out_static_t *packet = (mavlink_geosub_adsb_out_static_t *)msgbuf;
    packet->stall_speed = stall_speed;
    packet->integrity = integrity;
    packet->capability = capability;
    packet->emitter = emitter;
    packet->alw_encode = alw_encode;
    packet->gps_lat_offs = gps_lat_offs;
    packet->gps_lon_offs = gps_lon_offs;
    mav_array_memcpy(packet->ICAO_address, ICAO_address, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->callsign, callsign, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_ADSB_OUT_STATIC UNPACKING


/**
 * @brief Get field ICAO_address from geosub_adsb_out_static message
 *
 * @return  ICAO Address
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_get_ICAO_address(const mavlink_message_t* msg, uint8_t *ICAO_address)
{
    return _MAV_RETURN_uint8_t_array(msg, ICAO_address, 3,  2);
}

/**
 * @brief Get field integrity from geosub_adsb_out_static message
 *
 * @return  Integrity
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_integrity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field stall_speed from geosub_adsb_out_static message
 *
 * @return  Stall Speed
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_get_stall_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field callsign from geosub_adsb_out_static message
 *
 * @return  calssign
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_static_get_callsign(const mavlink_message_t* msg, char *callsign)
{
    return _MAV_RETURN_char_array(msg, callsign, 8,  6);
}

/**
 * @brief Get field capability from geosub_adsb_out_static message
 *
 * @return  Capability
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_capability(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field emitter from geosub_adsb_out_static message
 *
 * @return  Emitter
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_emitter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field alw_encode from geosub_adsb_out_static message
 *
 * @return  ALW encode
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_alw_encode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field gps_lat_offs from geosub_adsb_out_static message
 *
 * @return  gps latitude offset
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_gps_lat_offs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field gps_lon_offs from geosub_adsb_out_static message
 *
 * @return  gps longitude offset
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_static_get_gps_lon_offs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Decode a geosub_adsb_out_static message into a struct
 *
 * @param msg The message to decode
 * @param geosub_adsb_out_static C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_adsb_out_static_decode(const mavlink_message_t* msg, mavlink_geosub_adsb_out_static_t* geosub_adsb_out_static)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_adsb_out_static->stall_speed = mavlink_msg_geosub_adsb_out_static_get_stall_speed(msg);
    mavlink_msg_geosub_adsb_out_static_get_ICAO_address(msg, geosub_adsb_out_static->ICAO_address);
    geosub_adsb_out_static->integrity = mavlink_msg_geosub_adsb_out_static_get_integrity(msg);
    mavlink_msg_geosub_adsb_out_static_get_callsign(msg, geosub_adsb_out_static->callsign);
    geosub_adsb_out_static->capability = mavlink_msg_geosub_adsb_out_static_get_capability(msg);
    geosub_adsb_out_static->emitter = mavlink_msg_geosub_adsb_out_static_get_emitter(msg);
    geosub_adsb_out_static->alw_encode = mavlink_msg_geosub_adsb_out_static_get_alw_encode(msg);
    geosub_adsb_out_static->gps_lat_offs = mavlink_msg_geosub_adsb_out_static_get_gps_lat_offs(msg);
    geosub_adsb_out_static->gps_lon_offs = mavlink_msg_geosub_adsb_out_static_get_gps_lon_offs(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN;
        memset(geosub_adsb_out_static, 0, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_LEN);
    memcpy(geosub_adsb_out_static, _MAV_PAYLOAD(msg), len);
#endif
}
