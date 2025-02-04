/** @file
 *    @brief MAVLink comm protocol testsuite generated from geosub.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef GEOSUB_TESTSUITE_H
#define GEOSUB_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_uAvionix(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_geosub(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_uAvionix(system_id, component_id, last_msg);
    mavlink_test_geosub(system_id, component_id, last_msg);
}
#endif

#include "../uAvionix/testsuite.h"


static void mavlink_test_geosub_linear_values(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_linear_values_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0
    };
    mavlink_geosub_linear_values_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x_pos = packet_in.x_pos;
        packet1.y_pos = packet_in.y_pos;
        packet1.z_pos = packet_in.z_pos;
        packet1.x_vel = packet_in.x_vel;
        packet1.y_vel = packet_in.y_vel;
        packet1.z_vel = packet_in.z_vel;
        packet1.x_acc = packet_in.x_acc;
        packet1.y_acc = packet_in.y_acc;
        packet1.z_acc = packet_in.z_acc;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_LINEAR_VALUES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_linear_values_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_linear_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_linear_values_pack(system_id, component_id, &msg , packet1.x_pos , packet1.y_pos , packet1.z_pos , packet1.x_vel , packet1.y_vel , packet1.z_vel , packet1.x_acc , packet1.y_acc , packet1.z_acc );
    mavlink_msg_geosub_linear_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_linear_values_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x_pos , packet1.y_pos , packet1.z_pos , packet1.x_vel , packet1.y_vel , packet1.z_vel , packet1.x_acc , packet1.y_acc , packet1.z_acc );
    mavlink_msg_geosub_linear_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_linear_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_linear_values_send(MAVLINK_COMM_1 , packet1.x_pos , packet1.y_pos , packet1.z_pos , packet1.x_vel , packet1.y_vel , packet1.z_vel , packet1.x_acc , packet1.y_acc , packet1.z_acc );
    mavlink_msg_geosub_linear_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_angular_values(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_angular_values_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0
    };
    mavlink_geosub_angular_values_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.roll_pos = packet_in.roll_pos;
        packet1.pitch_pos = packet_in.pitch_pos;
        packet1.yaw_pos = packet_in.yaw_pos;
        packet1.roll_vel = packet_in.roll_vel;
        packet1.pitch_vel = packet_in.pitch_vel;
        packet1.yaw_vel = packet_in.yaw_vel;
        packet1.roll_acc = packet_in.roll_acc;
        packet1.pitch_acc = packet_in.pitch_acc;
        packet1.yaw_acc = packet_in.yaw_acc;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_ANGULAR_VALUES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_angular_values_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_angular_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_angular_values_pack(system_id, component_id, &msg , packet1.roll_pos , packet1.pitch_pos , packet1.yaw_pos , packet1.roll_vel , packet1.pitch_vel , packet1.yaw_vel , packet1.roll_acc , packet1.pitch_acc , packet1.yaw_acc );
    mavlink_msg_geosub_angular_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_angular_values_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.roll_pos , packet1.pitch_pos , packet1.yaw_pos , packet1.roll_vel , packet1.pitch_vel , packet1.yaw_vel , packet1.roll_acc , packet1.pitch_acc , packet1.yaw_acc );
    mavlink_msg_geosub_angular_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_angular_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_angular_values_send(MAVLINK_COMM_1 , packet1.roll_pos , packet1.pitch_pos , packet1.yaw_pos , packet1.roll_vel , packet1.pitch_vel , packet1.yaw_vel , packet1.roll_acc , packet1.pitch_acc , packet1.yaw_acc );
    mavlink_msg_geosub_angular_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_misc_values(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_MISC_VALUES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_misc_values_t packet_in = {
        17.0,17,84
    };
    mavlink_geosub_misc_values_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.integrity = packet_in.integrity;
        packet1.num_sat = packet_in.num_sat;
        packet1.sbas_correction = packet_in.sbas_correction;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_MISC_VALUES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_misc_values_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_misc_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_misc_values_pack(system_id, component_id, &msg , packet1.integrity , packet1.num_sat , packet1.sbas_correction );
    mavlink_msg_geosub_misc_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_misc_values_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.integrity , packet1.num_sat , packet1.sbas_correction );
    mavlink_msg_geosub_misc_values_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_misc_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_misc_values_send(MAVLINK_COMM_1 , packet1.integrity , packet1.num_sat , packet1.sbas_correction );
    mavlink_msg_geosub_misc_values_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_adsb_in(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_ADSB_IN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_adsb_in_t packet_in = {
        963497464,963497672,963497880,963498088,18067,18171,18275,18379,18483,211,"BCDEFGHI",113,180
    };
    mavlink_geosub_adsb_in_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.icao_address = packet_in.icao_address;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.heading = packet_in.heading;
        packet1.hor_velocity = packet_in.hor_velocity;
        packet1.ver_velocity = packet_in.ver_velocity;
        packet1.valid_flags = packet_in.valid_flags;
        packet1.squawk = packet_in.squawk;
        packet1.altitude_type = packet_in.altitude_type;
        packet1.emitter_type = packet_in.emitter_type;
        packet1.tslc = packet_in.tslc;
        
        mav_array_memcpy(packet1.callsign, packet_in.callsign, sizeof(char)*9);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_ADSB_IN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_in_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_adsb_in_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_in_pack(system_id, component_id, &msg , packet1.icao_address , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.hor_velocity , packet1.ver_velocity , packet1.valid_flags , packet1.squawk , packet1.altitude_type , packet1.callsign , packet1.emitter_type , packet1.tslc );
    mavlink_msg_geosub_adsb_in_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_in_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.icao_address , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.hor_velocity , packet1.ver_velocity , packet1.valid_flags , packet1.squawk , packet1.altitude_type , packet1.callsign , packet1.emitter_type , packet1.tslc );
    mavlink_msg_geosub_adsb_in_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_adsb_in_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_in_send(MAVLINK_COMM_1 , packet1.icao_address , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.hor_velocity , packet1.ver_velocity , packet1.valid_flags , packet1.squawk , packet1.altitude_type , packet1.callsign , packet1.emitter_type , packet1.tslc );
    mavlink_msg_geosub_adsb_in_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_adsb_out_dynamic(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_adsb_out_dynamic_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,963498504,963498712,963498920,18899,19003,19107,19211,19315,3,70,137,204
    };
    mavlink_geosub_adsb_out_dynamic_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.utc_time = packet_in.utc_time;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt_pres = packet_in.alt_pres;
        packet1.alt_gnss = packet_in.alt_gnss;
        packet1.hor_acc = packet_in.hor_acc;
        packet1.ver_acc = packet_in.ver_acc;
        packet1.acc_vel = packet_in.acc_vel;
        packet1.ver_velocity = packet_in.ver_velocity;
        packet1.ns_vog = packet_in.ns_vog;
        packet1.ew_vog = packet_in.ew_vog;
        packet1.state = packet_in.state;
        packet1.squawk = packet_in.squawk;
        packet1.fix_type = packet_in.fix_type;
        packet1.num_sats = packet_in.num_sats;
        packet1.em_status = packet_in.em_status;
        packet1.control = packet_in.control;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_DYNAMIC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_dynamic_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_adsb_out_dynamic_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_dynamic_pack(system_id, component_id, &msg , packet1.utc_time , packet1.lat , packet1.lon , packet1.alt_pres , packet1.alt_gnss , packet1.hor_acc , packet1.ver_acc , packet1.acc_vel , packet1.ver_velocity , packet1.ns_vog , packet1.ew_vog , packet1.state , packet1.squawk , packet1.fix_type , packet1.num_sats , packet1.em_status , packet1.control );
    mavlink_msg_geosub_adsb_out_dynamic_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_dynamic_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.utc_time , packet1.lat , packet1.lon , packet1.alt_pres , packet1.alt_gnss , packet1.hor_acc , packet1.ver_acc , packet1.acc_vel , packet1.ver_velocity , packet1.ns_vog , packet1.ew_vog , packet1.state , packet1.squawk , packet1.fix_type , packet1.num_sats , packet1.em_status , packet1.control );
    mavlink_msg_geosub_adsb_out_dynamic_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_adsb_out_dynamic_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_dynamic_send(MAVLINK_COMM_1 , packet1.utc_time , packet1.lat , packet1.lon , packet1.alt_pres , packet1.alt_gnss , packet1.hor_acc , packet1.ver_acc , packet1.acc_vel , packet1.ver_velocity , packet1.ns_vog , packet1.ew_vog , packet1.state , packet1.squawk , packet1.fix_type , packet1.num_sats , packet1.em_status , packet1.control );
    mavlink_msg_geosub_adsb_out_dynamic_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_adsb_out_static(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_adsb_out_static_t packet_in = {
        17235,{ 139, 140, 141 },84,"GHIJKLM",175,242,53,120,187
    };
    mavlink_geosub_adsb_out_static_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.stall_speed = packet_in.stall_speed;
        packet1.integrity = packet_in.integrity;
        packet1.capability = packet_in.capability;
        packet1.emitter = packet_in.emitter;
        packet1.alw_encode = packet_in.alw_encode;
        packet1.gps_lat_offs = packet_in.gps_lat_offs;
        packet1.gps_lon_offs = packet_in.gps_lon_offs;
        
        mav_array_memcpy(packet1.ICAO_address, packet_in.ICAO_address, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.callsign, packet_in.callsign, sizeof(char)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_ADSB_OUT_STATIC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_static_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_adsb_out_static_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_static_pack(system_id, component_id, &msg , packet1.ICAO_address , packet1.integrity , packet1.stall_speed , packet1.callsign , packet1.capability , packet1.emitter , packet1.alw_encode , packet1.gps_lat_offs , packet1.gps_lon_offs );
    mavlink_msg_geosub_adsb_out_static_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_static_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ICAO_address , packet1.integrity , packet1.stall_speed , packet1.callsign , packet1.capability , packet1.emitter , packet1.alw_encode , packet1.gps_lat_offs , packet1.gps_lon_offs );
    mavlink_msg_geosub_adsb_out_static_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_adsb_out_static_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_adsb_out_static_send(MAVLINK_COMM_1 , packet1.ICAO_address , packet1.integrity , packet1.stall_speed , packet1.callsign , packet1.capability , packet1.emitter , packet1.alw_encode , packet1.gps_lat_offs , packet1.gps_lon_offs );
    mavlink_msg_geosub_adsb_out_static_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_monitoring_alert(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_monitoring_alert_t packet_in = {
        963497464,17,84,151,218,29
    };
    mavlink_geosub_monitoring_alert_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ICAO_address = packet_in.ICAO_address;
        packet1.alert_type = packet_in.alert_type;
        packet1.threat_level = packet_in.threat_level;
        packet1.collision_src = packet_in.collision_src;
        packet1.collision_action = packet_in.collision_action;
        packet1.status_adsb = packet_in.status_adsb;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_MONITORING_ALERT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_alert_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_monitoring_alert_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_alert_pack(system_id, component_id, &msg , packet1.alert_type , packet1.ICAO_address , packet1.threat_level , packet1.collision_src , packet1.collision_action , packet1.status_adsb );
    mavlink_msg_geosub_monitoring_alert_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_alert_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.alert_type , packet1.ICAO_address , packet1.threat_level , packet1.collision_src , packet1.collision_action , packet1.status_adsb );
    mavlink_msg_geosub_monitoring_alert_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_monitoring_alert_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_alert_send(MAVLINK_COMM_1 , packet1.alert_type , packet1.ICAO_address , packet1.threat_level , packet1.collision_src , packet1.collision_action , packet1.status_adsb );
    mavlink_msg_geosub_monitoring_alert_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_monitoring_collision(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_monitoring_collision_t packet_in = {
        963497464,45.0,73.0,101.0,53,120,187
    };
    mavlink_geosub_monitoring_collision_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.id = packet_in.id;
        packet1.time_to_minimum_delta = packet_in.time_to_minimum_delta;
        packet1.altitude_minimum_delta = packet_in.altitude_minimum_delta;
        packet1.horizontal_minimum_delta = packet_in.horizontal_minimum_delta;
        packet1.collision_src = packet_in.collision_src;
        packet1.collision_action = packet_in.collision_action;
        packet1.threat_level = packet_in.threat_level;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_MONITORING_COLLISION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_collision_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_monitoring_collision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_collision_pack(system_id, component_id, &msg , packet1.collision_src , packet1.id , packet1.collision_action , packet1.threat_level , packet1.time_to_minimum_delta , packet1.altitude_minimum_delta , packet1.horizontal_minimum_delta );
    mavlink_msg_geosub_monitoring_collision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_collision_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.collision_src , packet1.id , packet1.collision_action , packet1.threat_level , packet1.time_to_minimum_delta , packet1.altitude_minimum_delta , packet1.horizontal_minimum_delta );
    mavlink_msg_geosub_monitoring_collision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_monitoring_collision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_monitoring_collision_send(MAVLINK_COMM_1 , packet1.collision_src , packet1.id , packet1.collision_action , packet1.threat_level , packet1.time_to_minimum_delta , packet1.altitude_minimum_delta , packet1.horizontal_minimum_delta );
    mavlink_msg_geosub_monitoring_collision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_device_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_device_status_t packet_in = {
        963497464
    };
    mavlink_geosub_device_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_DEVICE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_device_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_device_status_pack(system_id, component_id, &msg , packet1.status );
    mavlink_msg_geosub_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_device_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status );
    mavlink_msg_geosub_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_device_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_device_status_send(MAVLINK_COMM_1 , packet1.status );
    mavlink_msg_geosub_device_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_primecor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_PRIMECOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_primecor_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,19731,19835,161,"BCDEFGHIJKLMNOPQ",87,"TUVWX","ZABCDEFG",135,"JKLMN",92,"Q"
    };
    mavlink_geosub_primecor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lng = packet_in.lng;
        packet1.altGps = packet_in.altGps;
        packet1.hdop = packet_in.hdop;
        packet1.velms = packet_in.velms;
        packet1.pdop = packet_in.pdop;
        packet1.vdop = packet_in.vdop;
        packet1.pressBar = packet_in.pressBar;
        packet1.altBar = packet_in.altBar;
        packet1.altAgl = packet_in.altAgl;
        packet1.altAmsl = packet_in.altAmsl;
        packet1.tempBar = packet_in.tempBar;
        packet1.msgID = packet_in.msgID;
        packet1.batLvl = packet_in.batLvl;
        packet1.hdr = packet_in.hdr;
        packet1.rssi = packet_in.rssi;
        packet1.fixState = packet_in.fixState;
        packet1.numSat = packet_in.numSat;
        
        mav_array_memcpy(packet1.devSN, packet_in.devSN, sizeof(char)*17);
        mav_array_memcpy(packet1.date, packet_in.date, sizeof(char)*6);
        mav_array_memcpy(packet1.time, packet_in.time, sizeof(char)*9);
        mav_array_memcpy(packet1.cog, packet_in.cog, sizeof(char)*6);
        mav_array_memcpy(packet1.end, packet_in.end, sizeof(char)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_PRIMECOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_primecor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_primecor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_primecor_pack(system_id, component_id, &msg , packet1.msgID , packet1.hdr , packet1.devSN , packet1.batLvl , packet1.rssi , packet1.date , packet1.time , packet1.lat , packet1.lng , packet1.altGps , packet1.hdop , packet1.velms , packet1.fixState , packet1.cog , packet1.numSat , packet1.pdop , packet1.vdop , packet1.pressBar , packet1.altBar , packet1.altAgl , packet1.altAmsl , packet1.tempBar , packet1.end );
    mavlink_msg_geosub_primecor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_primecor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.msgID , packet1.hdr , packet1.devSN , packet1.batLvl , packet1.rssi , packet1.date , packet1.time , packet1.lat , packet1.lng , packet1.altGps , packet1.hdop , packet1.velms , packet1.fixState , packet1.cog , packet1.numSat , packet1.pdop , packet1.vdop , packet1.pressBar , packet1.altBar , packet1.altAgl , packet1.altAmsl , packet1.tempBar , packet1.end );
    mavlink_msg_geosub_primecor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_primecor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_primecor_send(MAVLINK_COMM_1 , packet1.msgID , packet1.hdr , packet1.devSN , packet1.batLvl , packet1.rssi , packet1.date , packet1.time , packet1.lat , packet1.lng , packet1.altGps , packet1.hdop , packet1.velms , packet1.fixState , packet1.cog , packet1.numSat , packet1.pdop , packet1.vdop , packet1.pressBar , packet1.altBar , packet1.altAgl , packet1.altAmsl , packet1.tempBar , packet1.end );
    mavlink_msg_geosub_primecor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub_gps_feedback(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_geosub_gps_feedback_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_geosub_gps_feedback_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.utc_time = packet_in.utc_time;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GEOSUB_GPS_FEEDBACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_gps_feedback_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_geosub_gps_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_gps_feedback_pack(system_id, component_id, &msg , packet1.utc_time , packet1.lat , packet1.lon );
    mavlink_msg_geosub_gps_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_gps_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.utc_time , packet1.lat , packet1.lon );
    mavlink_msg_geosub_gps_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_geosub_gps_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_geosub_gps_feedback_send(MAVLINK_COMM_1 , packet1.utc_time , packet1.lat , packet1.lon );
    mavlink_msg_geosub_gps_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_geosub(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_geosub_linear_values(system_id, component_id, last_msg);
    mavlink_test_geosub_angular_values(system_id, component_id, last_msg);
    mavlink_test_geosub_misc_values(system_id, component_id, last_msg);
    mavlink_test_geosub_adsb_in(system_id, component_id, last_msg);
    mavlink_test_geosub_adsb_out_dynamic(system_id, component_id, last_msg);
    mavlink_test_geosub_adsb_out_static(system_id, component_id, last_msg);
    mavlink_test_geosub_monitoring_alert(system_id, component_id, last_msg);
    mavlink_test_geosub_monitoring_collision(system_id, component_id, last_msg);
    mavlink_test_geosub_device_status(system_id, component_id, last_msg);
    mavlink_test_geosub_primecor(system_id, component_id, last_msg);
    mavlink_test_geosub_gps_feedback(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GEOSUB_TESTSUITE_H
