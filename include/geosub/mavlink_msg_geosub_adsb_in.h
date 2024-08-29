#pragma once
// MESSAGE GEOSUB_ADSB_IN PACKING

#define MAVLINK_MSG_ID_GEOSUB_ADSB_IN 14004


typedef struct __mavlink_geosub_adsb_in_t {
 uint32_t icao_address; /*<  ICAO Address*/
 int32_t lat; /*<  latitude*/
 int32_t lon; /*<  longitude*/
 int32_t alt; /*<  altitude*/
 uint16_t heading; /*<  heading*/
 uint16_t hor_velocity; /*<  horizontal velocity*/
 int16_t ver_velocity; /*<  vertical velocity*/
 uint16_t valid_flags; /*<  valid flags*/
 uint16_t squawk; /*<  squawk*/
 uint8_t altitude_type; /*<  altitude type*/
 char callsign[9]; /*<  calssign*/
 uint8_t emitter_type; /*<  emitter type*/
 uint8_t tslc; /*<  tslc*/
} mavlink_geosub_adsb_in_t;

#define MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN 38
#define MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN 38
#define MAVLINK_MSG_ID_14004_LEN 38
#define MAVLINK_MSG_ID_14004_MIN_LEN 38

#define MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC 208
#define MAVLINK_MSG_ID_14004_CRC 208

#define MAVLINK_MSG_GEOSUB_ADSB_IN_FIELD_CALLSIGN_LEN 9

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_IN { \
    14004, \
    "GEOSUB_ADSB_IN", \
    13, \
    {  { "icao_address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_adsb_in_t, icao_address) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_adsb_in_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_adsb_in_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_geosub_adsb_in_t, alt) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_geosub_adsb_in_t, heading) }, \
         { "hor_velocity", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_geosub_adsb_in_t, hor_velocity) }, \
         { "ver_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_geosub_adsb_in_t, ver_velocity) }, \
         { "valid_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_geosub_adsb_in_t, valid_flags) }, \
         { "squawk", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_geosub_adsb_in_t, squawk) }, \
         { "altitude_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_geosub_adsb_in_t, altitude_type) }, \
         { "callsign", NULL, MAVLINK_TYPE_CHAR, 9, 27, offsetof(mavlink_geosub_adsb_in_t, callsign) }, \
         { "emitter_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_geosub_adsb_in_t, emitter_type) }, \
         { "tslc", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_geosub_adsb_in_t, tslc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_IN { \
    "GEOSUB_ADSB_IN", \
    13, \
    {  { "icao_address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_adsb_in_t, icao_address) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_adsb_in_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_adsb_in_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_geosub_adsb_in_t, alt) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_geosub_adsb_in_t, heading) }, \
         { "hor_velocity", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_geosub_adsb_in_t, hor_velocity) }, \
         { "ver_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_geosub_adsb_in_t, ver_velocity) }, \
         { "valid_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_geosub_adsb_in_t, valid_flags) }, \
         { "squawk", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_geosub_adsb_in_t, squawk) }, \
         { "altitude_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_geosub_adsb_in_t, altitude_type) }, \
         { "callsign", NULL, MAVLINK_TYPE_CHAR, 9, 27, offsetof(mavlink_geosub_adsb_in_t, callsign) }, \
         { "emitter_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_geosub_adsb_in_t, emitter_type) }, \
         { "tslc", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_geosub_adsb_in_t, tslc) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_adsb_in message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param icao_address  ICAO Address
 * @param lat  latitude
 * @param lon  longitude
 * @param alt  altitude
 * @param heading  heading
 * @param hor_velocity  horizontal velocity
 * @param ver_velocity  vertical velocity
 * @param valid_flags  valid flags
 * @param squawk  squawk
 * @param altitude_type  altitude type
 * @param callsign  calssign
 * @param emitter_type  emitter type
 * @param tslc  tslc
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t icao_address, int32_t lat, int32_t lon, int32_t alt, uint16_t heading, uint16_t hor_velocity, int16_t ver_velocity, uint16_t valid_flags, uint16_t squawk, uint8_t altitude_type, const char *callsign, uint8_t emitter_type, uint8_t tslc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN];
    _mav_put_uint32_t(buf, 0, icao_address);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_uint16_t(buf, 16, heading);
    _mav_put_uint16_t(buf, 18, hor_velocity);
    _mav_put_int16_t(buf, 20, ver_velocity);
    _mav_put_uint16_t(buf, 22, valid_flags);
    _mav_put_uint16_t(buf, 24, squawk);
    _mav_put_uint8_t(buf, 26, altitude_type);
    _mav_put_uint8_t(buf, 36, emitter_type);
    _mav_put_uint8_t(buf, 37, tslc);
    _mav_put_char_array(buf, 27, callsign, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN);
#else
    mavlink_geosub_adsb_in_t packet;
    packet.icao_address = icao_address;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.heading = heading;
    packet.hor_velocity = hor_velocity;
    packet.ver_velocity = ver_velocity;
    packet.valid_flags = valid_flags;
    packet.squawk = squawk;
    packet.altitude_type = altitude_type;
    packet.emitter_type = emitter_type;
    packet.tslc = tslc;
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_IN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
}

/**
 * @brief Pack a geosub_adsb_in message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param icao_address  ICAO Address
 * @param lat  latitude
 * @param lon  longitude
 * @param alt  altitude
 * @param heading  heading
 * @param hor_velocity  horizontal velocity
 * @param ver_velocity  vertical velocity
 * @param valid_flags  valid flags
 * @param squawk  squawk
 * @param altitude_type  altitude type
 * @param callsign  calssign
 * @param emitter_type  emitter type
 * @param tslc  tslc
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t icao_address,int32_t lat,int32_t lon,int32_t alt,uint16_t heading,uint16_t hor_velocity,int16_t ver_velocity,uint16_t valid_flags,uint16_t squawk,uint8_t altitude_type,const char *callsign,uint8_t emitter_type,uint8_t tslc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN];
    _mav_put_uint32_t(buf, 0, icao_address);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_uint16_t(buf, 16, heading);
    _mav_put_uint16_t(buf, 18, hor_velocity);
    _mav_put_int16_t(buf, 20, ver_velocity);
    _mav_put_uint16_t(buf, 22, valid_flags);
    _mav_put_uint16_t(buf, 24, squawk);
    _mav_put_uint8_t(buf, 26, altitude_type);
    _mav_put_uint8_t(buf, 36, emitter_type);
    _mav_put_uint8_t(buf, 37, tslc);
    _mav_put_char_array(buf, 27, callsign, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN);
#else
    mavlink_geosub_adsb_in_t packet;
    packet.icao_address = icao_address;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.heading = heading;
    packet.hor_velocity = hor_velocity;
    packet.ver_velocity = ver_velocity;
    packet.valid_flags = valid_flags;
    packet.squawk = squawk;
    packet.altitude_type = altitude_type;
    packet.emitter_type = emitter_type;
    packet.tslc = tslc;
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_IN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
}

/**
 * @brief Encode a geosub_adsb_in struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_adsb_in_t* geosub_adsb_in)
{
    return mavlink_msg_geosub_adsb_in_pack(system_id, component_id, msg, geosub_adsb_in->icao_address, geosub_adsb_in->lat, geosub_adsb_in->lon, geosub_adsb_in->alt, geosub_adsb_in->heading, geosub_adsb_in->hor_velocity, geosub_adsb_in->ver_velocity, geosub_adsb_in->valid_flags, geosub_adsb_in->squawk, geosub_adsb_in->altitude_type, geosub_adsb_in->callsign, geosub_adsb_in->emitter_type, geosub_adsb_in->tslc);
}

/**
 * @brief Encode a geosub_adsb_in struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_adsb_in_t* geosub_adsb_in)
{
    return mavlink_msg_geosub_adsb_in_pack_chan(system_id, component_id, chan, msg, geosub_adsb_in->icao_address, geosub_adsb_in->lat, geosub_adsb_in->lon, geosub_adsb_in->alt, geosub_adsb_in->heading, geosub_adsb_in->hor_velocity, geosub_adsb_in->ver_velocity, geosub_adsb_in->valid_flags, geosub_adsb_in->squawk, geosub_adsb_in->altitude_type, geosub_adsb_in->callsign, geosub_adsb_in->emitter_type, geosub_adsb_in->tslc);
}

/**
 * @brief Send a geosub_adsb_in message
 * @param chan MAVLink channel to send the message
 *
 * @param icao_address  ICAO Address
 * @param lat  latitude
 * @param lon  longitude
 * @param alt  altitude
 * @param heading  heading
 * @param hor_velocity  horizontal velocity
 * @param ver_velocity  vertical velocity
 * @param valid_flags  valid flags
 * @param squawk  squawk
 * @param altitude_type  altitude type
 * @param callsign  calssign
 * @param emitter_type  emitter type
 * @param tslc  tslc
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_adsb_in_send(mavlink_channel_t chan, uint32_t icao_address, int32_t lat, int32_t lon, int32_t alt, uint16_t heading, uint16_t hor_velocity, int16_t ver_velocity, uint16_t valid_flags, uint16_t squawk, uint8_t altitude_type, const char *callsign, uint8_t emitter_type, uint8_t tslc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN];
    _mav_put_uint32_t(buf, 0, icao_address);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_uint16_t(buf, 16, heading);
    _mav_put_uint16_t(buf, 18, hor_velocity);
    _mav_put_int16_t(buf, 20, ver_velocity);
    _mav_put_uint16_t(buf, 22, valid_flags);
    _mav_put_uint16_t(buf, 24, squawk);
    _mav_put_uint8_t(buf, 26, altitude_type);
    _mav_put_uint8_t(buf, 36, emitter_type);
    _mav_put_uint8_t(buf, 37, tslc);
    _mav_put_char_array(buf, 27, callsign, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
#else
    mavlink_geosub_adsb_in_t packet;
    packet.icao_address = icao_address;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.heading = heading;
    packet.hor_velocity = hor_velocity;
    packet.ver_velocity = ver_velocity;
    packet.valid_flags = valid_flags;
    packet.squawk = squawk;
    packet.altitude_type = altitude_type;
    packet.emitter_type = emitter_type;
    packet.tslc = tslc;
    mav_array_memcpy(packet.callsign, callsign, sizeof(char)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
#endif
}

/**
 * @brief Send a geosub_adsb_in message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_adsb_in_send_struct(mavlink_channel_t chan, const mavlink_geosub_adsb_in_t* geosub_adsb_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_adsb_in_send(chan, geosub_adsb_in->icao_address, geosub_adsb_in->lat, geosub_adsb_in->lon, geosub_adsb_in->alt, geosub_adsb_in->heading, geosub_adsb_in->hor_velocity, geosub_adsb_in->ver_velocity, geosub_adsb_in->valid_flags, geosub_adsb_in->squawk, geosub_adsb_in->altitude_type, geosub_adsb_in->callsign, geosub_adsb_in->emitter_type, geosub_adsb_in->tslc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN, (const char *)geosub_adsb_in, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_adsb_in_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t icao_address, int32_t lat, int32_t lon, int32_t alt, uint16_t heading, uint16_t hor_velocity, int16_t ver_velocity, uint16_t valid_flags, uint16_t squawk, uint8_t altitude_type, const char *callsign, uint8_t emitter_type, uint8_t tslc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, icao_address);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_uint16_t(buf, 16, heading);
    _mav_put_uint16_t(buf, 18, hor_velocity);
    _mav_put_int16_t(buf, 20, ver_velocity);
    _mav_put_uint16_t(buf, 22, valid_flags);
    _mav_put_uint16_t(buf, 24, squawk);
    _mav_put_uint8_t(buf, 26, altitude_type);
    _mav_put_uint8_t(buf, 36, emitter_type);
    _mav_put_uint8_t(buf, 37, tslc);
    _mav_put_char_array(buf, 27, callsign, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
#else
    mavlink_geosub_adsb_in_t *packet = (mavlink_geosub_adsb_in_t *)msgbuf;
    packet->icao_address = icao_address;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->heading = heading;
    packet->hor_velocity = hor_velocity;
    packet->ver_velocity = ver_velocity;
    packet->valid_flags = valid_flags;
    packet->squawk = squawk;
    packet->altitude_type = altitude_type;
    packet->emitter_type = emitter_type;
    packet->tslc = tslc;
    mav_array_memcpy(packet->callsign, callsign, sizeof(char)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_IN, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_ADSB_IN UNPACKING


/**
 * @brief Get field icao_address from geosub_adsb_in message
 *
 * @return  ICAO Address
 */
static inline uint32_t mavlink_msg_geosub_adsb_in_get_icao_address(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from geosub_adsb_in message
 *
 * @return  latitude
 */
static inline int32_t mavlink_msg_geosub_adsb_in_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from geosub_adsb_in message
 *
 * @return  longitude
 */
static inline int32_t mavlink_msg_geosub_adsb_in_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field alt from geosub_adsb_in message
 *
 * @return  altitude
 */
static inline int32_t mavlink_msg_geosub_adsb_in_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field heading from geosub_adsb_in message
 *
 * @return  heading
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field hor_velocity from geosub_adsb_in message
 *
 * @return  horizontal velocity
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_get_hor_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field ver_velocity from geosub_adsb_in message
 *
 * @return  vertical velocity
 */
static inline int16_t mavlink_msg_geosub_adsb_in_get_ver_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field valid_flags from geosub_adsb_in message
 *
 * @return  valid flags
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_get_valid_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field squawk from geosub_adsb_in message
 *
 * @return  squawk
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_get_squawk(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field altitude_type from geosub_adsb_in message
 *
 * @return  altitude type
 */
static inline uint8_t mavlink_msg_geosub_adsb_in_get_altitude_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field callsign from geosub_adsb_in message
 *
 * @return  calssign
 */
static inline uint16_t mavlink_msg_geosub_adsb_in_get_callsign(const mavlink_message_t* msg, char *callsign)
{
    return _MAV_RETURN_char_array(msg, callsign, 9,  27);
}

/**
 * @brief Get field emitter_type from geosub_adsb_in message
 *
 * @return  emitter type
 */
static inline uint8_t mavlink_msg_geosub_adsb_in_get_emitter_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field tslc from geosub_adsb_in message
 *
 * @return  tslc
 */
static inline uint8_t mavlink_msg_geosub_adsb_in_get_tslc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Decode a geosub_adsb_in message into a struct
 *
 * @param msg The message to decode
 * @param geosub_adsb_in C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_adsb_in_decode(const mavlink_message_t* msg, mavlink_geosub_adsb_in_t* geosub_adsb_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_adsb_in->icao_address = mavlink_msg_geosub_adsb_in_get_icao_address(msg);
    geosub_adsb_in->lat = mavlink_msg_geosub_adsb_in_get_lat(msg);
    geosub_adsb_in->lon = mavlink_msg_geosub_adsb_in_get_lon(msg);
    geosub_adsb_in->alt = mavlink_msg_geosub_adsb_in_get_alt(msg);
    geosub_adsb_in->heading = mavlink_msg_geosub_adsb_in_get_heading(msg);
    geosub_adsb_in->hor_velocity = mavlink_msg_geosub_adsb_in_get_hor_velocity(msg);
    geosub_adsb_in->ver_velocity = mavlink_msg_geosub_adsb_in_get_ver_velocity(msg);
    geosub_adsb_in->valid_flags = mavlink_msg_geosub_adsb_in_get_valid_flags(msg);
    geosub_adsb_in->squawk = mavlink_msg_geosub_adsb_in_get_squawk(msg);
    geosub_adsb_in->altitude_type = mavlink_msg_geosub_adsb_in_get_altitude_type(msg);
    mavlink_msg_geosub_adsb_in_get_callsign(msg, geosub_adsb_in->callsign);
    geosub_adsb_in->emitter_type = mavlink_msg_geosub_adsb_in_get_emitter_type(msg);
    geosub_adsb_in->tslc = mavlink_msg_geosub_adsb_in_get_tslc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN;
        memset(geosub_adsb_in, 0, MAVLINK_MSG_ID_GEOSUB_ADSB_IN_LEN);
    memcpy(geosub_adsb_in, _MAV_PAYLOAD(msg), len);
#endif
}
