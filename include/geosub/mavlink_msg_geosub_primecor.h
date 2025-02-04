#pragma once
// MESSAGE GEOSUB_PRIMECOR PACKING

#define MAVLINK_MSG_ID_GEOSUB_PRIMECOR 14010


typedef struct __mavlink_geosub_primecor_t {
 float lat; /*<  Latitude (degrees)*/
 float lng; /*<  Longitude (degrees)*/
 float altGps; /*<  GPS altitude (m)*/
 float hdop; /*<  Horizontal precision*/
 float velms; /*<  Speed (m/s)*/
 float pdop; /*<  Position dilution of precision*/
 float vdop; /*<  Vertical dilution of precision*/
 float pressBar; /*<  Barometric pressure (mbar)*/
 float altBar; /*<  Barometric altitude (m)*/
 float altAgl; /*<  AGL altitude (m)*/
 float altAmsl; /*<  AMSL altitude (m)*/
 float tempBar; /*<  Ambient temperature (°C)*/
 uint16_t msgID; /*<  Sequence number*/
 uint16_t batLvl; /*<  Battery voltage level (mV)*/
 uint8_t hdr; /*<  Message header*/
 char devSN[17]; /*<  Device serial number*/
 int8_t rssi; /*<  Network signal quality*/
 char date[6]; /*<  Date (ddmmaa)*/
 char time[9]; /*<  Time (hhmmssnnn)*/
 uint8_t fixState; /*<  Fix state*/
 char cog[6]; /*<  Course over ground*/
 uint8_t numSat; /*<  Number of satellites*/
 char end[2]; /*<  End symbols*/
} mavlink_geosub_primecor_t;

#define MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN 96
#define MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN 96
#define MAVLINK_MSG_ID_14010_LEN 96
#define MAVLINK_MSG_ID_14010_MIN_LEN 96

#define MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC 77
#define MAVLINK_MSG_ID_14010_CRC 77

#define MAVLINK_MSG_GEOSUB_PRIMECOR_FIELD_DEVSN_LEN 17
#define MAVLINK_MSG_GEOSUB_PRIMECOR_FIELD_DATE_LEN 6
#define MAVLINK_MSG_GEOSUB_PRIMECOR_FIELD_TIME_LEN 9
#define MAVLINK_MSG_GEOSUB_PRIMECOR_FIELD_COG_LEN 6
#define MAVLINK_MSG_GEOSUB_PRIMECOR_FIELD_END_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_PRIMECOR { \
    14010, \
    "GEOSUB_PRIMECOR", \
    23, \
    {  { "msgID", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_geosub_primecor_t, msgID) }, \
         { "hdr", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_geosub_primecor_t, hdr) }, \
         { "devSN", NULL, MAVLINK_TYPE_CHAR, 17, 53, offsetof(mavlink_geosub_primecor_t, devSN) }, \
         { "batLvl", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_geosub_primecor_t, batLvl) }, \
         { "rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 70, offsetof(mavlink_geosub_primecor_t, rssi) }, \
         { "date", NULL, MAVLINK_TYPE_CHAR, 6, 71, offsetof(mavlink_geosub_primecor_t, date) }, \
         { "time", NULL, MAVLINK_TYPE_CHAR, 9, 77, offsetof(mavlink_geosub_primecor_t, time) }, \
         { "lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_primecor_t, lat) }, \
         { "lng", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_primecor_t, lng) }, \
         { "altGps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_primecor_t, altGps) }, \
         { "hdop", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_primecor_t, hdop) }, \
         { "velms", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_primecor_t, velms) }, \
         { "fixState", NULL, MAVLINK_TYPE_UINT8_T, 0, 86, offsetof(mavlink_geosub_primecor_t, fixState) }, \
         { "cog", NULL, MAVLINK_TYPE_CHAR, 6, 87, offsetof(mavlink_geosub_primecor_t, cog) }, \
         { "numSat", NULL, MAVLINK_TYPE_UINT8_T, 0, 93, offsetof(mavlink_geosub_primecor_t, numSat) }, \
         { "pdop", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_primecor_t, pdop) }, \
         { "vdop", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_primecor_t, vdop) }, \
         { "pressBar", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_primecor_t, pressBar) }, \
         { "altBar", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_primecor_t, altBar) }, \
         { "altAgl", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_geosub_primecor_t, altAgl) }, \
         { "altAmsl", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_geosub_primecor_t, altAmsl) }, \
         { "tempBar", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_geosub_primecor_t, tempBar) }, \
         { "end", NULL, MAVLINK_TYPE_CHAR, 2, 94, offsetof(mavlink_geosub_primecor_t, end) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_PRIMECOR { \
    "GEOSUB_PRIMECOR", \
    23, \
    {  { "msgID", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_geosub_primecor_t, msgID) }, \
         { "hdr", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_geosub_primecor_t, hdr) }, \
         { "devSN", NULL, MAVLINK_TYPE_CHAR, 17, 53, offsetof(mavlink_geosub_primecor_t, devSN) }, \
         { "batLvl", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_geosub_primecor_t, batLvl) }, \
         { "rssi", NULL, MAVLINK_TYPE_INT8_T, 0, 70, offsetof(mavlink_geosub_primecor_t, rssi) }, \
         { "date", NULL, MAVLINK_TYPE_CHAR, 6, 71, offsetof(mavlink_geosub_primecor_t, date) }, \
         { "time", NULL, MAVLINK_TYPE_CHAR, 9, 77, offsetof(mavlink_geosub_primecor_t, time) }, \
         { "lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_geosub_primecor_t, lat) }, \
         { "lng", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_geosub_primecor_t, lng) }, \
         { "altGps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_geosub_primecor_t, altGps) }, \
         { "hdop", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_geosub_primecor_t, hdop) }, \
         { "velms", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_geosub_primecor_t, velms) }, \
         { "fixState", NULL, MAVLINK_TYPE_UINT8_T, 0, 86, offsetof(mavlink_geosub_primecor_t, fixState) }, \
         { "cog", NULL, MAVLINK_TYPE_CHAR, 6, 87, offsetof(mavlink_geosub_primecor_t, cog) }, \
         { "numSat", NULL, MAVLINK_TYPE_UINT8_T, 0, 93, offsetof(mavlink_geosub_primecor_t, numSat) }, \
         { "pdop", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_geosub_primecor_t, pdop) }, \
         { "vdop", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_geosub_primecor_t, vdop) }, \
         { "pressBar", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_geosub_primecor_t, pressBar) }, \
         { "altBar", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_geosub_primecor_t, altBar) }, \
         { "altAgl", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_geosub_primecor_t, altAgl) }, \
         { "altAmsl", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_geosub_primecor_t, altAmsl) }, \
         { "tempBar", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_geosub_primecor_t, tempBar) }, \
         { "end", NULL, MAVLINK_TYPE_CHAR, 2, 94, offsetof(mavlink_geosub_primecor_t, end) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_primecor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param msgID  Sequence number
 * @param hdr  Message header
 * @param devSN  Device serial number
 * @param batLvl  Battery voltage level (mV)
 * @param rssi  Network signal quality
 * @param date  Date (ddmmaa)
 * @param time  Time (hhmmssnnn)
 * @param lat  Latitude (degrees)
 * @param lng  Longitude (degrees)
 * @param altGps  GPS altitude (m)
 * @param hdop  Horizontal precision
 * @param velms  Speed (m/s)
 * @param fixState  Fix state
 * @param cog  Course over ground
 * @param numSat  Number of satellites
 * @param pdop  Position dilution of precision
 * @param vdop  Vertical dilution of precision
 * @param pressBar  Barometric pressure (mbar)
 * @param altBar  Barometric altitude (m)
 * @param altAgl  AGL altitude (m)
 * @param altAmsl  AMSL altitude (m)
 * @param tempBar  Ambient temperature (°C)
 * @param end  End symbols
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_primecor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t msgID, uint8_t hdr, const char *devSN, uint16_t batLvl, int8_t rssi, const char *date, const char *time, float lat, float lng, float altGps, float hdop, float velms, uint8_t fixState, const char *cog, uint8_t numSat, float pdop, float vdop, float pressBar, float altBar, float altAgl, float altAmsl, float tempBar, const char *end)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lng);
    _mav_put_float(buf, 8, altGps);
    _mav_put_float(buf, 12, hdop);
    _mav_put_float(buf, 16, velms);
    _mav_put_float(buf, 20, pdop);
    _mav_put_float(buf, 24, vdop);
    _mav_put_float(buf, 28, pressBar);
    _mav_put_float(buf, 32, altBar);
    _mav_put_float(buf, 36, altAgl);
    _mav_put_float(buf, 40, altAmsl);
    _mav_put_float(buf, 44, tempBar);
    _mav_put_uint16_t(buf, 48, msgID);
    _mav_put_uint16_t(buf, 50, batLvl);
    _mav_put_uint8_t(buf, 52, hdr);
    _mav_put_int8_t(buf, 70, rssi);
    _mav_put_uint8_t(buf, 86, fixState);
    _mav_put_uint8_t(buf, 93, numSat);
    _mav_put_char_array(buf, 53, devSN, 17);
    _mav_put_char_array(buf, 71, date, 6);
    _mav_put_char_array(buf, 77, time, 9);
    _mav_put_char_array(buf, 87, cog, 6);
    _mav_put_char_array(buf, 94, end, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN);
#else
    mavlink_geosub_primecor_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.altGps = altGps;
    packet.hdop = hdop;
    packet.velms = velms;
    packet.pdop = pdop;
    packet.vdop = vdop;
    packet.pressBar = pressBar;
    packet.altBar = altBar;
    packet.altAgl = altAgl;
    packet.altAmsl = altAmsl;
    packet.tempBar = tempBar;
    packet.msgID = msgID;
    packet.batLvl = batLvl;
    packet.hdr = hdr;
    packet.rssi = rssi;
    packet.fixState = fixState;
    packet.numSat = numSat;
    mav_array_memcpy(packet.devSN, devSN, sizeof(char)*17);
    mav_array_memcpy(packet.date, date, sizeof(char)*6);
    mav_array_memcpy(packet.time, time, sizeof(char)*9);
    mav_array_memcpy(packet.cog, cog, sizeof(char)*6);
    mav_array_memcpy(packet.end, end, sizeof(char)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_PRIMECOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
}

/**
 * @brief Pack a geosub_primecor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param msgID  Sequence number
 * @param hdr  Message header
 * @param devSN  Device serial number
 * @param batLvl  Battery voltage level (mV)
 * @param rssi  Network signal quality
 * @param date  Date (ddmmaa)
 * @param time  Time (hhmmssnnn)
 * @param lat  Latitude (degrees)
 * @param lng  Longitude (degrees)
 * @param altGps  GPS altitude (m)
 * @param hdop  Horizontal precision
 * @param velms  Speed (m/s)
 * @param fixState  Fix state
 * @param cog  Course over ground
 * @param numSat  Number of satellites
 * @param pdop  Position dilution of precision
 * @param vdop  Vertical dilution of precision
 * @param pressBar  Barometric pressure (mbar)
 * @param altBar  Barometric altitude (m)
 * @param altAgl  AGL altitude (m)
 * @param altAmsl  AMSL altitude (m)
 * @param tempBar  Ambient temperature (°C)
 * @param end  End symbols
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_primecor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t msgID,uint8_t hdr,const char *devSN,uint16_t batLvl,int8_t rssi,const char *date,const char *time,float lat,float lng,float altGps,float hdop,float velms,uint8_t fixState,const char *cog,uint8_t numSat,float pdop,float vdop,float pressBar,float altBar,float altAgl,float altAmsl,float tempBar,const char *end)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lng);
    _mav_put_float(buf, 8, altGps);
    _mav_put_float(buf, 12, hdop);
    _mav_put_float(buf, 16, velms);
    _mav_put_float(buf, 20, pdop);
    _mav_put_float(buf, 24, vdop);
    _mav_put_float(buf, 28, pressBar);
    _mav_put_float(buf, 32, altBar);
    _mav_put_float(buf, 36, altAgl);
    _mav_put_float(buf, 40, altAmsl);
    _mav_put_float(buf, 44, tempBar);
    _mav_put_uint16_t(buf, 48, msgID);
    _mav_put_uint16_t(buf, 50, batLvl);
    _mav_put_uint8_t(buf, 52, hdr);
    _mav_put_int8_t(buf, 70, rssi);
    _mav_put_uint8_t(buf, 86, fixState);
    _mav_put_uint8_t(buf, 93, numSat);
    _mav_put_char_array(buf, 53, devSN, 17);
    _mav_put_char_array(buf, 71, date, 6);
    _mav_put_char_array(buf, 77, time, 9);
    _mav_put_char_array(buf, 87, cog, 6);
    _mav_put_char_array(buf, 94, end, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN);
#else
    mavlink_geosub_primecor_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.altGps = altGps;
    packet.hdop = hdop;
    packet.velms = velms;
    packet.pdop = pdop;
    packet.vdop = vdop;
    packet.pressBar = pressBar;
    packet.altBar = altBar;
    packet.altAgl = altAgl;
    packet.altAmsl = altAmsl;
    packet.tempBar = tempBar;
    packet.msgID = msgID;
    packet.batLvl = batLvl;
    packet.hdr = hdr;
    packet.rssi = rssi;
    packet.fixState = fixState;
    packet.numSat = numSat;
    mav_array_memcpy(packet.devSN, devSN, sizeof(char)*17);
    mav_array_memcpy(packet.date, date, sizeof(char)*6);
    mav_array_memcpy(packet.time, time, sizeof(char)*9);
    mav_array_memcpy(packet.cog, cog, sizeof(char)*6);
    mav_array_memcpy(packet.end, end, sizeof(char)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_PRIMECOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
}

/**
 * @brief Encode a geosub_primecor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_primecor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_primecor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_primecor_t* geosub_primecor)
{
    return mavlink_msg_geosub_primecor_pack(system_id, component_id, msg, geosub_primecor->msgID, geosub_primecor->hdr, geosub_primecor->devSN, geosub_primecor->batLvl, geosub_primecor->rssi, geosub_primecor->date, geosub_primecor->time, geosub_primecor->lat, geosub_primecor->lng, geosub_primecor->altGps, geosub_primecor->hdop, geosub_primecor->velms, geosub_primecor->fixState, geosub_primecor->cog, geosub_primecor->numSat, geosub_primecor->pdop, geosub_primecor->vdop, geosub_primecor->pressBar, geosub_primecor->altBar, geosub_primecor->altAgl, geosub_primecor->altAmsl, geosub_primecor->tempBar, geosub_primecor->end);
}

/**
 * @brief Encode a geosub_primecor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_primecor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_primecor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_primecor_t* geosub_primecor)
{
    return mavlink_msg_geosub_primecor_pack_chan(system_id, component_id, chan, msg, geosub_primecor->msgID, geosub_primecor->hdr, geosub_primecor->devSN, geosub_primecor->batLvl, geosub_primecor->rssi, geosub_primecor->date, geosub_primecor->time, geosub_primecor->lat, geosub_primecor->lng, geosub_primecor->altGps, geosub_primecor->hdop, geosub_primecor->velms, geosub_primecor->fixState, geosub_primecor->cog, geosub_primecor->numSat, geosub_primecor->pdop, geosub_primecor->vdop, geosub_primecor->pressBar, geosub_primecor->altBar, geosub_primecor->altAgl, geosub_primecor->altAmsl, geosub_primecor->tempBar, geosub_primecor->end);
}

/**
 * @brief Send a geosub_primecor message
 * @param chan MAVLink channel to send the message
 *
 * @param msgID  Sequence number
 * @param hdr  Message header
 * @param devSN  Device serial number
 * @param batLvl  Battery voltage level (mV)
 * @param rssi  Network signal quality
 * @param date  Date (ddmmaa)
 * @param time  Time (hhmmssnnn)
 * @param lat  Latitude (degrees)
 * @param lng  Longitude (degrees)
 * @param altGps  GPS altitude (m)
 * @param hdop  Horizontal precision
 * @param velms  Speed (m/s)
 * @param fixState  Fix state
 * @param cog  Course over ground
 * @param numSat  Number of satellites
 * @param pdop  Position dilution of precision
 * @param vdop  Vertical dilution of precision
 * @param pressBar  Barometric pressure (mbar)
 * @param altBar  Barometric altitude (m)
 * @param altAgl  AGL altitude (m)
 * @param altAmsl  AMSL altitude (m)
 * @param tempBar  Ambient temperature (°C)
 * @param end  End symbols
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_primecor_send(mavlink_channel_t chan, uint16_t msgID, uint8_t hdr, const char *devSN, uint16_t batLvl, int8_t rssi, const char *date, const char *time, float lat, float lng, float altGps, float hdop, float velms, uint8_t fixState, const char *cog, uint8_t numSat, float pdop, float vdop, float pressBar, float altBar, float altAgl, float altAmsl, float tempBar, const char *end)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lng);
    _mav_put_float(buf, 8, altGps);
    _mav_put_float(buf, 12, hdop);
    _mav_put_float(buf, 16, velms);
    _mav_put_float(buf, 20, pdop);
    _mav_put_float(buf, 24, vdop);
    _mav_put_float(buf, 28, pressBar);
    _mav_put_float(buf, 32, altBar);
    _mav_put_float(buf, 36, altAgl);
    _mav_put_float(buf, 40, altAmsl);
    _mav_put_float(buf, 44, tempBar);
    _mav_put_uint16_t(buf, 48, msgID);
    _mav_put_uint16_t(buf, 50, batLvl);
    _mav_put_uint8_t(buf, 52, hdr);
    _mav_put_int8_t(buf, 70, rssi);
    _mav_put_uint8_t(buf, 86, fixState);
    _mav_put_uint8_t(buf, 93, numSat);
    _mav_put_char_array(buf, 53, devSN, 17);
    _mav_put_char_array(buf, 71, date, 6);
    _mav_put_char_array(buf, 77, time, 9);
    _mav_put_char_array(buf, 87, cog, 6);
    _mav_put_char_array(buf, 94, end, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR, buf, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
#else
    mavlink_geosub_primecor_t packet;
    packet.lat = lat;
    packet.lng = lng;
    packet.altGps = altGps;
    packet.hdop = hdop;
    packet.velms = velms;
    packet.pdop = pdop;
    packet.vdop = vdop;
    packet.pressBar = pressBar;
    packet.altBar = altBar;
    packet.altAgl = altAgl;
    packet.altAmsl = altAmsl;
    packet.tempBar = tempBar;
    packet.msgID = msgID;
    packet.batLvl = batLvl;
    packet.hdr = hdr;
    packet.rssi = rssi;
    packet.fixState = fixState;
    packet.numSat = numSat;
    mav_array_memcpy(packet.devSN, devSN, sizeof(char)*17);
    mav_array_memcpy(packet.date, date, sizeof(char)*6);
    mav_array_memcpy(packet.time, time, sizeof(char)*9);
    mav_array_memcpy(packet.cog, cog, sizeof(char)*6);
    mav_array_memcpy(packet.end, end, sizeof(char)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
#endif
}

/**
 * @brief Send a geosub_primecor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_primecor_send_struct(mavlink_channel_t chan, const mavlink_geosub_primecor_t* geosub_primecor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_primecor_send(chan, geosub_primecor->msgID, geosub_primecor->hdr, geosub_primecor->devSN, geosub_primecor->batLvl, geosub_primecor->rssi, geosub_primecor->date, geosub_primecor->time, geosub_primecor->lat, geosub_primecor->lng, geosub_primecor->altGps, geosub_primecor->hdop, geosub_primecor->velms, geosub_primecor->fixState, geosub_primecor->cog, geosub_primecor->numSat, geosub_primecor->pdop, geosub_primecor->vdop, geosub_primecor->pressBar, geosub_primecor->altBar, geosub_primecor->altAgl, geosub_primecor->altAmsl, geosub_primecor->tempBar, geosub_primecor->end);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR, (const char *)geosub_primecor, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_primecor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t msgID, uint8_t hdr, const char *devSN, uint16_t batLvl, int8_t rssi, const char *date, const char *time, float lat, float lng, float altGps, float hdop, float velms, uint8_t fixState, const char *cog, uint8_t numSat, float pdop, float vdop, float pressBar, float altBar, float altAgl, float altAmsl, float tempBar, const char *end)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lng);
    _mav_put_float(buf, 8, altGps);
    _mav_put_float(buf, 12, hdop);
    _mav_put_float(buf, 16, velms);
    _mav_put_float(buf, 20, pdop);
    _mav_put_float(buf, 24, vdop);
    _mav_put_float(buf, 28, pressBar);
    _mav_put_float(buf, 32, altBar);
    _mav_put_float(buf, 36, altAgl);
    _mav_put_float(buf, 40, altAmsl);
    _mav_put_float(buf, 44, tempBar);
    _mav_put_uint16_t(buf, 48, msgID);
    _mav_put_uint16_t(buf, 50, batLvl);
    _mav_put_uint8_t(buf, 52, hdr);
    _mav_put_int8_t(buf, 70, rssi);
    _mav_put_uint8_t(buf, 86, fixState);
    _mav_put_uint8_t(buf, 93, numSat);
    _mav_put_char_array(buf, 53, devSN, 17);
    _mav_put_char_array(buf, 71, date, 6);
    _mav_put_char_array(buf, 77, time, 9);
    _mav_put_char_array(buf, 87, cog, 6);
    _mav_put_char_array(buf, 94, end, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR, buf, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
#else
    mavlink_geosub_primecor_t *packet = (mavlink_geosub_primecor_t *)msgbuf;
    packet->lat = lat;
    packet->lng = lng;
    packet->altGps = altGps;
    packet->hdop = hdop;
    packet->velms = velms;
    packet->pdop = pdop;
    packet->vdop = vdop;
    packet->pressBar = pressBar;
    packet->altBar = altBar;
    packet->altAgl = altAgl;
    packet->altAmsl = altAmsl;
    packet->tempBar = tempBar;
    packet->msgID = msgID;
    packet->batLvl = batLvl;
    packet->hdr = hdr;
    packet->rssi = rssi;
    packet->fixState = fixState;
    packet->numSat = numSat;
    mav_array_memcpy(packet->devSN, devSN, sizeof(char)*17);
    mav_array_memcpy(packet->date, date, sizeof(char)*6);
    mav_array_memcpy(packet->time, time, sizeof(char)*9);
    mav_array_memcpy(packet->cog, cog, sizeof(char)*6);
    mav_array_memcpy(packet->end, end, sizeof(char)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_PRIMECOR, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_PRIMECOR UNPACKING


/**
 * @brief Get field msgID from geosub_primecor message
 *
 * @return  Sequence number
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_msgID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field hdr from geosub_primecor message
 *
 * @return  Message header
 */
static inline uint8_t mavlink_msg_geosub_primecor_get_hdr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  52);
}

/**
 * @brief Get field devSN from geosub_primecor message
 *
 * @return  Device serial number
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_devSN(const mavlink_message_t* msg, char *devSN)
{
    return _MAV_RETURN_char_array(msg, devSN, 17,  53);
}

/**
 * @brief Get field batLvl from geosub_primecor message
 *
 * @return  Battery voltage level (mV)
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_batLvl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  50);
}

/**
 * @brief Get field rssi from geosub_primecor message
 *
 * @return  Network signal quality
 */
static inline int8_t mavlink_msg_geosub_primecor_get_rssi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  70);
}

/**
 * @brief Get field date from geosub_primecor message
 *
 * @return  Date (ddmmaa)
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_date(const mavlink_message_t* msg, char *date)
{
    return _MAV_RETURN_char_array(msg, date, 6,  71);
}

/**
 * @brief Get field time from geosub_primecor message
 *
 * @return  Time (hhmmssnnn)
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_time(const mavlink_message_t* msg, char *time)
{
    return _MAV_RETURN_char_array(msg, time, 9,  77);
}

/**
 * @brief Get field lat from geosub_primecor message
 *
 * @return  Latitude (degrees)
 */
static inline float mavlink_msg_geosub_primecor_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field lng from geosub_primecor message
 *
 * @return  Longitude (degrees)
 */
static inline float mavlink_msg_geosub_primecor_get_lng(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field altGps from geosub_primecor message
 *
 * @return  GPS altitude (m)
 */
static inline float mavlink_msg_geosub_primecor_get_altGps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field hdop from geosub_primecor message
 *
 * @return  Horizontal precision
 */
static inline float mavlink_msg_geosub_primecor_get_hdop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field velms from geosub_primecor message
 *
 * @return  Speed (m/s)
 */
static inline float mavlink_msg_geosub_primecor_get_velms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field fixState from geosub_primecor message
 *
 * @return  Fix state
 */
static inline uint8_t mavlink_msg_geosub_primecor_get_fixState(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  86);
}

/**
 * @brief Get field cog from geosub_primecor message
 *
 * @return  Course over ground
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_cog(const mavlink_message_t* msg, char *cog)
{
    return _MAV_RETURN_char_array(msg, cog, 6,  87);
}

/**
 * @brief Get field numSat from geosub_primecor message
 *
 * @return  Number of satellites
 */
static inline uint8_t mavlink_msg_geosub_primecor_get_numSat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  93);
}

/**
 * @brief Get field pdop from geosub_primecor message
 *
 * @return  Position dilution of precision
 */
static inline float mavlink_msg_geosub_primecor_get_pdop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vdop from geosub_primecor message
 *
 * @return  Vertical dilution of precision
 */
static inline float mavlink_msg_geosub_primecor_get_vdop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field pressBar from geosub_primecor message
 *
 * @return  Barometric pressure (mbar)
 */
static inline float mavlink_msg_geosub_primecor_get_pressBar(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field altBar from geosub_primecor message
 *
 * @return  Barometric altitude (m)
 */
static inline float mavlink_msg_geosub_primecor_get_altBar(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field altAgl from geosub_primecor message
 *
 * @return  AGL altitude (m)
 */
static inline float mavlink_msg_geosub_primecor_get_altAgl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field altAmsl from geosub_primecor message
 *
 * @return  AMSL altitude (m)
 */
static inline float mavlink_msg_geosub_primecor_get_altAmsl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field tempBar from geosub_primecor message
 *
 * @return  Ambient temperature (°C)
 */
static inline float mavlink_msg_geosub_primecor_get_tempBar(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field end from geosub_primecor message
 *
 * @return  End symbols
 */
static inline uint16_t mavlink_msg_geosub_primecor_get_end(const mavlink_message_t* msg, char *end)
{
    return _MAV_RETURN_char_array(msg, end, 2,  94);
}

/**
 * @brief Decode a geosub_primecor message into a struct
 *
 * @param msg The message to decode
 * @param geosub_primecor C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_primecor_decode(const mavlink_message_t* msg, mavlink_geosub_primecor_t* geosub_primecor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_primecor->lat = mavlink_msg_geosub_primecor_get_lat(msg);
    geosub_primecor->lng = mavlink_msg_geosub_primecor_get_lng(msg);
    geosub_primecor->altGps = mavlink_msg_geosub_primecor_get_altGps(msg);
    geosub_primecor->hdop = mavlink_msg_geosub_primecor_get_hdop(msg);
    geosub_primecor->velms = mavlink_msg_geosub_primecor_get_velms(msg);
    geosub_primecor->pdop = mavlink_msg_geosub_primecor_get_pdop(msg);
    geosub_primecor->vdop = mavlink_msg_geosub_primecor_get_vdop(msg);
    geosub_primecor->pressBar = mavlink_msg_geosub_primecor_get_pressBar(msg);
    geosub_primecor->altBar = mavlink_msg_geosub_primecor_get_altBar(msg);
    geosub_primecor->altAgl = mavlink_msg_geosub_primecor_get_altAgl(msg);
    geosub_primecor->altAmsl = mavlink_msg_geosub_primecor_get_altAmsl(msg);
    geosub_primecor->tempBar = mavlink_msg_geosub_primecor_get_tempBar(msg);
    geosub_primecor->msgID = mavlink_msg_geosub_primecor_get_msgID(msg);
    geosub_primecor->batLvl = mavlink_msg_geosub_primecor_get_batLvl(msg);
    geosub_primecor->hdr = mavlink_msg_geosub_primecor_get_hdr(msg);
    mavlink_msg_geosub_primecor_get_devSN(msg, geosub_primecor->devSN);
    geosub_primecor->rssi = mavlink_msg_geosub_primecor_get_rssi(msg);
    mavlink_msg_geosub_primecor_get_date(msg, geosub_primecor->date);
    mavlink_msg_geosub_primecor_get_time(msg, geosub_primecor->time);
    geosub_primecor->fixState = mavlink_msg_geosub_primecor_get_fixState(msg);
    mavlink_msg_geosub_primecor_get_cog(msg, geosub_primecor->cog);
    geosub_primecor->numSat = mavlink_msg_geosub_primecor_get_numSat(msg);
    mavlink_msg_geosub_primecor_get_end(msg, geosub_primecor->end);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN;
        memset(geosub_primecor, 0, MAVLINK_MSG_ID_GEOSUB_PRIMECOR_LEN);
    memcpy(geosub_primecor, _MAV_PAYLOAD(msg), len);
#endif
}
