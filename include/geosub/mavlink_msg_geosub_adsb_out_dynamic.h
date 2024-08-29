#pragma once
// MESSAGE GEOSUB_ADSB_OUT_DYNAMIC PACKING

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC 14005


typedef struct __mavlink_geosub_adsb_out_dynamic_t {
 uint32_t utc_time; /*<  UTC Time*/
 int32_t lat; /*<  latitude*/
 int32_t lon; /*<  longitude*/
 int32_t alt_pres; /*<  */
 int32_t alt_gnss; /*<  */
 uint32_t hor_acc; /*<  horizontal acceleration*/
 uint32_t ver_acc; /*<  horizontal acceleration*/
 uint32_t acc_vel; /*<  acceleration velocity*/
 int16_t ver_velocity; /*<  vertical velocity*/
 int16_t ns_vog; /*<  North/South ...*/
 int16_t ew_vog; /*<  East/West ...*/
 uint16_t state; /*<  */
 uint16_t squawk; /*<  squawk*/
 uint8_t fix_type; /*<  fix type*/
 uint8_t num_sats; /*<  Num sats vista*/
 uint8_t em_status; /*<  */
 uint8_t control; /*<  control*/
} mavlink_geosub_adsb_out_dynamic_t;

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN 46
#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN 46
#define MAVLINK_MSG_ID_14005_LEN 46
#define MAVLINK_MSG_ID_14005_MIN_LEN 46

#define MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC 36
#define MAVLINK_MSG_ID_14005_CRC 36



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_OUT_DYNAMIC { \
    14005, \
    "GEOSUB_ADSB_OUT_DYNAMIC", \
    17, \
    {  { "utc_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_adsb_out_dynamic_t, utc_time) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_adsb_out_dynamic_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_adsb_out_dynamic_t, lon) }, \
         { "alt_pres", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_geosub_adsb_out_dynamic_t, alt_pres) }, \
         { "alt_gnss", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_geosub_adsb_out_dynamic_t, alt_gnss) }, \
         { "hor_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_geosub_adsb_out_dynamic_t, hor_acc) }, \
         { "ver_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_geosub_adsb_out_dynamic_t, ver_acc) }, \
         { "acc_vel", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_geosub_adsb_out_dynamic_t, acc_vel) }, \
         { "ver_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_geosub_adsb_out_dynamic_t, ver_velocity) }, \
         { "ns_vog", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_geosub_adsb_out_dynamic_t, ns_vog) }, \
         { "ew_vog", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_geosub_adsb_out_dynamic_t, ew_vog) }, \
         { "state", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_geosub_adsb_out_dynamic_t, state) }, \
         { "squawk", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_geosub_adsb_out_dynamic_t, squawk) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_geosub_adsb_out_dynamic_t, fix_type) }, \
         { "num_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_geosub_adsb_out_dynamic_t, num_sats) }, \
         { "em_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_geosub_adsb_out_dynamic_t, em_status) }, \
         { "control", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_geosub_adsb_out_dynamic_t, control) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_ADSB_OUT_DYNAMIC { \
    "GEOSUB_ADSB_OUT_DYNAMIC", \
    17, \
    {  { "utc_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_adsb_out_dynamic_t, utc_time) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_geosub_adsb_out_dynamic_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_geosub_adsb_out_dynamic_t, lon) }, \
         { "alt_pres", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_geosub_adsb_out_dynamic_t, alt_pres) }, \
         { "alt_gnss", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_geosub_adsb_out_dynamic_t, alt_gnss) }, \
         { "hor_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_geosub_adsb_out_dynamic_t, hor_acc) }, \
         { "ver_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_geosub_adsb_out_dynamic_t, ver_acc) }, \
         { "acc_vel", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_geosub_adsb_out_dynamic_t, acc_vel) }, \
         { "ver_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_geosub_adsb_out_dynamic_t, ver_velocity) }, \
         { "ns_vog", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_geosub_adsb_out_dynamic_t, ns_vog) }, \
         { "ew_vog", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_geosub_adsb_out_dynamic_t, ew_vog) }, \
         { "state", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_geosub_adsb_out_dynamic_t, state) }, \
         { "squawk", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_geosub_adsb_out_dynamic_t, squawk) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_geosub_adsb_out_dynamic_t, fix_type) }, \
         { "num_sats", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_geosub_adsb_out_dynamic_t, num_sats) }, \
         { "em_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_geosub_adsb_out_dynamic_t, em_status) }, \
         { "control", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_geosub_adsb_out_dynamic_t, control) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_adsb_out_dynamic message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 * @param alt_pres  
 * @param alt_gnss  
 * @param hor_acc  horizontal acceleration
 * @param ver_acc  horizontal acceleration
 * @param acc_vel  acceleration velocity
 * @param ver_velocity  vertical velocity
 * @param ns_vog  North/South ...
 * @param ew_vog  East/West ...
 * @param state  
 * @param squawk  squawk
 * @param fix_type  fix type
 * @param num_sats  Num sats vista
 * @param em_status  
 * @param control  control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t utc_time, int32_t lat, int32_t lon, int32_t alt_pres, int32_t alt_gnss, uint32_t hor_acc, uint32_t ver_acc, uint32_t acc_vel, int16_t ver_velocity, int16_t ns_vog, int16_t ew_vog, uint16_t state, uint16_t squawk, uint8_t fix_type, uint8_t num_sats, uint8_t em_status, uint8_t control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt_pres);
    _mav_put_int32_t(buf, 16, alt_gnss);
    _mav_put_uint32_t(buf, 20, hor_acc);
    _mav_put_uint32_t(buf, 24, ver_acc);
    _mav_put_uint32_t(buf, 28, acc_vel);
    _mav_put_int16_t(buf, 32, ver_velocity);
    _mav_put_int16_t(buf, 34, ns_vog);
    _mav_put_int16_t(buf, 36, ew_vog);
    _mav_put_uint16_t(buf, 38, state);
    _mav_put_uint16_t(buf, 40, squawk);
    _mav_put_uint8_t(buf, 42, fix_type);
    _mav_put_uint8_t(buf, 43, num_sats);
    _mav_put_uint8_t(buf, 44, em_status);
    _mav_put_uint8_t(buf, 45, control);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN);
#else
    mavlink_geosub_adsb_out_dynamic_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt_pres = alt_pres;
    packet.alt_gnss = alt_gnss;
    packet.hor_acc = hor_acc;
    packet.ver_acc = ver_acc;
    packet.acc_vel = acc_vel;
    packet.ver_velocity = ver_velocity;
    packet.ns_vog = ns_vog;
    packet.ew_vog = ew_vog;
    packet.state = state;
    packet.squawk = squawk;
    packet.fix_type = fix_type;
    packet.num_sats = num_sats;
    packet.em_status = em_status;
    packet.control = control;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
}

/**
 * @brief Pack a geosub_adsb_out_dynamic message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 * @param alt_pres  
 * @param alt_gnss  
 * @param hor_acc  horizontal acceleration
 * @param ver_acc  horizontal acceleration
 * @param acc_vel  acceleration velocity
 * @param ver_velocity  vertical velocity
 * @param ns_vog  North/South ...
 * @param ew_vog  East/West ...
 * @param state  
 * @param squawk  squawk
 * @param fix_type  fix type
 * @param num_sats  Num sats vista
 * @param em_status  
 * @param control  control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t utc_time,int32_t lat,int32_t lon,int32_t alt_pres,int32_t alt_gnss,uint32_t hor_acc,uint32_t ver_acc,uint32_t acc_vel,int16_t ver_velocity,int16_t ns_vog,int16_t ew_vog,uint16_t state,uint16_t squawk,uint8_t fix_type,uint8_t num_sats,uint8_t em_status,uint8_t control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt_pres);
    _mav_put_int32_t(buf, 16, alt_gnss);
    _mav_put_uint32_t(buf, 20, hor_acc);
    _mav_put_uint32_t(buf, 24, ver_acc);
    _mav_put_uint32_t(buf, 28, acc_vel);
    _mav_put_int16_t(buf, 32, ver_velocity);
    _mav_put_int16_t(buf, 34, ns_vog);
    _mav_put_int16_t(buf, 36, ew_vog);
    _mav_put_uint16_t(buf, 38, state);
    _mav_put_uint16_t(buf, 40, squawk);
    _mav_put_uint8_t(buf, 42, fix_type);
    _mav_put_uint8_t(buf, 43, num_sats);
    _mav_put_uint8_t(buf, 44, em_status);
    _mav_put_uint8_t(buf, 45, control);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN);
#else
    mavlink_geosub_adsb_out_dynamic_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt_pres = alt_pres;
    packet.alt_gnss = alt_gnss;
    packet.hor_acc = hor_acc;
    packet.ver_acc = ver_acc;
    packet.acc_vel = acc_vel;
    packet.ver_velocity = ver_velocity;
    packet.ns_vog = ns_vog;
    packet.ew_vog = ew_vog;
    packet.state = state;
    packet.squawk = squawk;
    packet.fix_type = fix_type;
    packet.num_sats = num_sats;
    packet.em_status = em_status;
    packet.control = control;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
}

/**
 * @brief Encode a geosub_adsb_out_dynamic struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_out_dynamic C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_adsb_out_dynamic_t* geosub_adsb_out_dynamic)
{
    return mavlink_msg_geosub_adsb_out_dynamic_pack(system_id, component_id, msg, geosub_adsb_out_dynamic->utc_time, geosub_adsb_out_dynamic->lat, geosub_adsb_out_dynamic->lon, geosub_adsb_out_dynamic->alt_pres, geosub_adsb_out_dynamic->alt_gnss, geosub_adsb_out_dynamic->hor_acc, geosub_adsb_out_dynamic->ver_acc, geosub_adsb_out_dynamic->acc_vel, geosub_adsb_out_dynamic->ver_velocity, geosub_adsb_out_dynamic->ns_vog, geosub_adsb_out_dynamic->ew_vog, geosub_adsb_out_dynamic->state, geosub_adsb_out_dynamic->squawk, geosub_adsb_out_dynamic->fix_type, geosub_adsb_out_dynamic->num_sats, geosub_adsb_out_dynamic->em_status, geosub_adsb_out_dynamic->control);
}

/**
 * @brief Encode a geosub_adsb_out_dynamic struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_adsb_out_dynamic C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_adsb_out_dynamic_t* geosub_adsb_out_dynamic)
{
    return mavlink_msg_geosub_adsb_out_dynamic_pack_chan(system_id, component_id, chan, msg, geosub_adsb_out_dynamic->utc_time, geosub_adsb_out_dynamic->lat, geosub_adsb_out_dynamic->lon, geosub_adsb_out_dynamic->alt_pres, geosub_adsb_out_dynamic->alt_gnss, geosub_adsb_out_dynamic->hor_acc, geosub_adsb_out_dynamic->ver_acc, geosub_adsb_out_dynamic->acc_vel, geosub_adsb_out_dynamic->ver_velocity, geosub_adsb_out_dynamic->ns_vog, geosub_adsb_out_dynamic->ew_vog, geosub_adsb_out_dynamic->state, geosub_adsb_out_dynamic->squawk, geosub_adsb_out_dynamic->fix_type, geosub_adsb_out_dynamic->num_sats, geosub_adsb_out_dynamic->em_status, geosub_adsb_out_dynamic->control);
}

/**
 * @brief Send a geosub_adsb_out_dynamic message
 * @param chan MAVLink channel to send the message
 *
 * @param utc_time  UTC Time
 * @param lat  latitude
 * @param lon  longitude
 * @param alt_pres  
 * @param alt_gnss  
 * @param hor_acc  horizontal acceleration
 * @param ver_acc  horizontal acceleration
 * @param acc_vel  acceleration velocity
 * @param ver_velocity  vertical velocity
 * @param ns_vog  North/South ...
 * @param ew_vog  East/West ...
 * @param state  
 * @param squawk  squawk
 * @param fix_type  fix type
 * @param num_sats  Num sats vista
 * @param em_status  
 * @param control  control
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_adsb_out_dynamic_send(mavlink_channel_t chan, uint32_t utc_time, int32_t lat, int32_t lon, int32_t alt_pres, int32_t alt_gnss, uint32_t hor_acc, uint32_t ver_acc, uint32_t acc_vel, int16_t ver_velocity, int16_t ns_vog, int16_t ew_vog, uint16_t state, uint16_t squawk, uint8_t fix_type, uint8_t num_sats, uint8_t em_status, uint8_t control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN];
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt_pres);
    _mav_put_int32_t(buf, 16, alt_gnss);
    _mav_put_uint32_t(buf, 20, hor_acc);
    _mav_put_uint32_t(buf, 24, ver_acc);
    _mav_put_uint32_t(buf, 28, acc_vel);
    _mav_put_int16_t(buf, 32, ver_velocity);
    _mav_put_int16_t(buf, 34, ns_vog);
    _mav_put_int16_t(buf, 36, ew_vog);
    _mav_put_uint16_t(buf, 38, state);
    _mav_put_uint16_t(buf, 40, squawk);
    _mav_put_uint8_t(buf, 42, fix_type);
    _mav_put_uint8_t(buf, 43, num_sats);
    _mav_put_uint8_t(buf, 44, em_status);
    _mav_put_uint8_t(buf, 45, control);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
#else
    mavlink_geosub_adsb_out_dynamic_t packet;
    packet.utc_time = utc_time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt_pres = alt_pres;
    packet.alt_gnss = alt_gnss;
    packet.hor_acc = hor_acc;
    packet.ver_acc = ver_acc;
    packet.acc_vel = acc_vel;
    packet.ver_velocity = ver_velocity;
    packet.ns_vog = ns_vog;
    packet.ew_vog = ew_vog;
    packet.state = state;
    packet.squawk = squawk;
    packet.fix_type = fix_type;
    packet.num_sats = num_sats;
    packet.em_status = em_status;
    packet.control = control;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
#endif
}

/**
 * @brief Send a geosub_adsb_out_dynamic message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_adsb_out_dynamic_send_struct(mavlink_channel_t chan, const mavlink_geosub_adsb_out_dynamic_t* geosub_adsb_out_dynamic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_adsb_out_dynamic_send(chan, geosub_adsb_out_dynamic->utc_time, geosub_adsb_out_dynamic->lat, geosub_adsb_out_dynamic->lon, geosub_adsb_out_dynamic->alt_pres, geosub_adsb_out_dynamic->alt_gnss, geosub_adsb_out_dynamic->hor_acc, geosub_adsb_out_dynamic->ver_acc, geosub_adsb_out_dynamic->acc_vel, geosub_adsb_out_dynamic->ver_velocity, geosub_adsb_out_dynamic->ns_vog, geosub_adsb_out_dynamic->ew_vog, geosub_adsb_out_dynamic->state, geosub_adsb_out_dynamic->squawk, geosub_adsb_out_dynamic->fix_type, geosub_adsb_out_dynamic->num_sats, geosub_adsb_out_dynamic->em_status, geosub_adsb_out_dynamic->control);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC, (const char *)geosub_adsb_out_dynamic, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_adsb_out_dynamic_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t utc_time, int32_t lat, int32_t lon, int32_t alt_pres, int32_t alt_gnss, uint32_t hor_acc, uint32_t ver_acc, uint32_t acc_vel, int16_t ver_velocity, int16_t ns_vog, int16_t ew_vog, uint16_t state, uint16_t squawk, uint8_t fix_type, uint8_t num_sats, uint8_t em_status, uint8_t control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, utc_time);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt_pres);
    _mav_put_int32_t(buf, 16, alt_gnss);
    _mav_put_uint32_t(buf, 20, hor_acc);
    _mav_put_uint32_t(buf, 24, ver_acc);
    _mav_put_uint32_t(buf, 28, acc_vel);
    _mav_put_int16_t(buf, 32, ver_velocity);
    _mav_put_int16_t(buf, 34, ns_vog);
    _mav_put_int16_t(buf, 36, ew_vog);
    _mav_put_uint16_t(buf, 38, state);
    _mav_put_uint16_t(buf, 40, squawk);
    _mav_put_uint8_t(buf, 42, fix_type);
    _mav_put_uint8_t(buf, 43, num_sats);
    _mav_put_uint8_t(buf, 44, em_status);
    _mav_put_uint8_t(buf, 45, control);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC, buf, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
#else
    mavlink_geosub_adsb_out_dynamic_t *packet = (mavlink_geosub_adsb_out_dynamic_t *)msgbuf;
    packet->utc_time = utc_time;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt_pres = alt_pres;
    packet->alt_gnss = alt_gnss;
    packet->hor_acc = hor_acc;
    packet->ver_acc = ver_acc;
    packet->acc_vel = acc_vel;
    packet->ver_velocity = ver_velocity;
    packet->ns_vog = ns_vog;
    packet->ew_vog = ew_vog;
    packet->state = state;
    packet->squawk = squawk;
    packet->fix_type = fix_type;
    packet->num_sats = num_sats;
    packet->em_status = em_status;
    packet->control = control;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_ADSB_OUT_DYNAMIC UNPACKING


/**
 * @brief Get field utc_time from geosub_adsb_out_dynamic message
 *
 * @return  UTC Time
 */
static inline uint32_t mavlink_msg_geosub_adsb_out_dynamic_get_utc_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from geosub_adsb_out_dynamic message
 *
 * @return  latitude
 */
static inline int32_t mavlink_msg_geosub_adsb_out_dynamic_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from geosub_adsb_out_dynamic message
 *
 * @return  longitude
 */
static inline int32_t mavlink_msg_geosub_adsb_out_dynamic_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field alt_pres from geosub_adsb_out_dynamic message
 *
 * @return  
 */
static inline int32_t mavlink_msg_geosub_adsb_out_dynamic_get_alt_pres(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt_gnss from geosub_adsb_out_dynamic message
 *
 * @return  
 */
static inline int32_t mavlink_msg_geosub_adsb_out_dynamic_get_alt_gnss(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field hor_acc from geosub_adsb_out_dynamic message
 *
 * @return  horizontal acceleration
 */
static inline uint32_t mavlink_msg_geosub_adsb_out_dynamic_get_hor_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field ver_acc from geosub_adsb_out_dynamic message
 *
 * @return  horizontal acceleration
 */
static inline uint32_t mavlink_msg_geosub_adsb_out_dynamic_get_ver_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field acc_vel from geosub_adsb_out_dynamic message
 *
 * @return  acceleration velocity
 */
static inline uint32_t mavlink_msg_geosub_adsb_out_dynamic_get_acc_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field ver_velocity from geosub_adsb_out_dynamic message
 *
 * @return  vertical velocity
 */
static inline int16_t mavlink_msg_geosub_adsb_out_dynamic_get_ver_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field ns_vog from geosub_adsb_out_dynamic message
 *
 * @return  North/South ...
 */
static inline int16_t mavlink_msg_geosub_adsb_out_dynamic_get_ns_vog(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field ew_vog from geosub_adsb_out_dynamic message
 *
 * @return  East/West ...
 */
static inline int16_t mavlink_msg_geosub_adsb_out_dynamic_get_ew_vog(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field state from geosub_adsb_out_dynamic message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  38);
}

/**
 * @brief Get field squawk from geosub_adsb_out_dynamic message
 *
 * @return  squawk
 */
static inline uint16_t mavlink_msg_geosub_adsb_out_dynamic_get_squawk(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  40);
}

/**
 * @brief Get field fix_type from geosub_adsb_out_dynamic message
 *
 * @return  fix type
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_dynamic_get_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field num_sats from geosub_adsb_out_dynamic message
 *
 * @return  Num sats vista
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_dynamic_get_num_sats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  43);
}

/**
 * @brief Get field em_status from geosub_adsb_out_dynamic message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_dynamic_get_em_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  44);
}

/**
 * @brief Get field control from geosub_adsb_out_dynamic message
 *
 * @return  control
 */
static inline uint8_t mavlink_msg_geosub_adsb_out_dynamic_get_control(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  45);
}

/**
 * @brief Decode a geosub_adsb_out_dynamic message into a struct
 *
 * @param msg The message to decode
 * @param geosub_adsb_out_dynamic C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_adsb_out_dynamic_decode(const mavlink_message_t* msg, mavlink_geosub_adsb_out_dynamic_t* geosub_adsb_out_dynamic)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_adsb_out_dynamic->utc_time = mavlink_msg_geosub_adsb_out_dynamic_get_utc_time(msg);
    geosub_adsb_out_dynamic->lat = mavlink_msg_geosub_adsb_out_dynamic_get_lat(msg);
    geosub_adsb_out_dynamic->lon = mavlink_msg_geosub_adsb_out_dynamic_get_lon(msg);
    geosub_adsb_out_dynamic->alt_pres = mavlink_msg_geosub_adsb_out_dynamic_get_alt_pres(msg);
    geosub_adsb_out_dynamic->alt_gnss = mavlink_msg_geosub_adsb_out_dynamic_get_alt_gnss(msg);
    geosub_adsb_out_dynamic->hor_acc = mavlink_msg_geosub_adsb_out_dynamic_get_hor_acc(msg);
    geosub_adsb_out_dynamic->ver_acc = mavlink_msg_geosub_adsb_out_dynamic_get_ver_acc(msg);
    geosub_adsb_out_dynamic->acc_vel = mavlink_msg_geosub_adsb_out_dynamic_get_acc_vel(msg);
    geosub_adsb_out_dynamic->ver_velocity = mavlink_msg_geosub_adsb_out_dynamic_get_ver_velocity(msg);
    geosub_adsb_out_dynamic->ns_vog = mavlink_msg_geosub_adsb_out_dynamic_get_ns_vog(msg);
    geosub_adsb_out_dynamic->ew_vog = mavlink_msg_geosub_adsb_out_dynamic_get_ew_vog(msg);
    geosub_adsb_out_dynamic->state = mavlink_msg_geosub_adsb_out_dynamic_get_state(msg);
    geosub_adsb_out_dynamic->squawk = mavlink_msg_geosub_adsb_out_dynamic_get_squawk(msg);
    geosub_adsb_out_dynamic->fix_type = mavlink_msg_geosub_adsb_out_dynamic_get_fix_type(msg);
    geosub_adsb_out_dynamic->num_sats = mavlink_msg_geosub_adsb_out_dynamic_get_num_sats(msg);
    geosub_adsb_out_dynamic->em_status = mavlink_msg_geosub_adsb_out_dynamic_get_em_status(msg);
    geosub_adsb_out_dynamic->control = mavlink_msg_geosub_adsb_out_dynamic_get_control(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN;
        memset(geosub_adsb_out_dynamic, 0, MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_LEN);
    memcpy(geosub_adsb_out_dynamic, _MAV_PAYLOAD(msg), len);
#endif
}
