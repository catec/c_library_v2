#pragma once
// MESSAGE GEOSUB_DEVICE_STATUS PACKING

#define MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS 14009


typedef struct __mavlink_geosub_device_status_t {
 uint32_t status; /*<  Device Status*/
} mavlink_geosub_device_status_t;

#define MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN 4
#define MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN 4
#define MAVLINK_MSG_ID_14009_LEN 4
#define MAVLINK_MSG_ID_14009_MIN_LEN 4

#define MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC 105
#define MAVLINK_MSG_ID_14009_CRC 105



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEOSUB_DEVICE_STATUS { \
    14009, \
    "GEOSUB_DEVICE_STATUS", \
    1, \
    {  { "status", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_device_status_t, status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEOSUB_DEVICE_STATUS { \
    "GEOSUB_DEVICE_STATUS", \
    1, \
    {  { "status", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_geosub_device_status_t, status) }, \
         } \
}
#endif

/**
 * @brief Pack a geosub_device_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  Device Status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_device_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN);
#else
    mavlink_geosub_device_status_t packet;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
}

/**
 * @brief Pack a geosub_device_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  Device Status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_geosub_device_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN);
#else
    mavlink_geosub_device_status_t packet;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
}

/**
 * @brief Encode a geosub_device_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param geosub_device_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_device_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_geosub_device_status_t* geosub_device_status)
{
    return mavlink_msg_geosub_device_status_pack(system_id, component_id, msg, geosub_device_status->status);
}

/**
 * @brief Encode a geosub_device_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param geosub_device_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_geosub_device_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_geosub_device_status_t* geosub_device_status)
{
    return mavlink_msg_geosub_device_status_pack_chan(system_id, component_id, chan, msg, geosub_device_status->status);
}

/**
 * @brief Send a geosub_device_status message
 * @param chan MAVLink channel to send the message
 *
 * @param status  Device Status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_geosub_device_status_send(mavlink_channel_t chan, uint32_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS, buf, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
#else
    mavlink_geosub_device_status_t packet;
    packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
#endif
}

/**
 * @brief Send a geosub_device_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_geosub_device_status_send_struct(mavlink_channel_t chan, const mavlink_geosub_device_status_t* geosub_device_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_geosub_device_status_send(chan, geosub_device_status->status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS, (const char *)geosub_device_status, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_geosub_device_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS, buf, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
#else
    mavlink_geosub_device_status_t *packet = (mavlink_geosub_device_status_t *)msgbuf;
    packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS, (const char *)packet, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE GEOSUB_DEVICE_STATUS UNPACKING


/**
 * @brief Get field status from geosub_device_status message
 *
 * @return  Device Status
 */
static inline uint32_t mavlink_msg_geosub_device_status_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a geosub_device_status message into a struct
 *
 * @param msg The message to decode
 * @param geosub_device_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_geosub_device_status_decode(const mavlink_message_t* msg, mavlink_geosub_device_status_t* geosub_device_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    geosub_device_status->status = mavlink_msg_geosub_device_status_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN;
        memset(geosub_device_status, 0, MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_LEN);
    memcpy(geosub_device_status, _MAV_PAYLOAD(msg), len);
#endif
}
