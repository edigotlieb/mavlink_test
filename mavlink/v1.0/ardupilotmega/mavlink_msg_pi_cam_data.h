// MESSAGE PI_CAM_DATA PACKING

#define MAVLINK_MSG_ID_PI_CAM_DATA 186

typedef struct __mavlink_pi_cam_data_t
{
 int32_t start_tree_1; ///< Start Angle of tree 1
 int32_t end_tree_1; ///< End angle of tree 1
 int32_t start_tree_2; ///< Start Angle of tree 2
 int32_t end_tree_2; ///< End angle of tree 2
 int32_t start_tree_3; ///< Start Angle of tree 3
 int32_t end_tree_3; ///< End angle of tree 3
 int32_t start_tree_4; ///< Start Angle of tree 4
 int32_t end_tree_4; ///< End angle of tree 4
 int32_t start_tree_5; ///< Start Angle of tree 5
 int32_t end_tree_5; ///< End angle of tree 5
 int32_t start_tree_6; ///< Start Angle of tree 6
 int32_t end_tree_6; ///< End angle of tree 6
 int32_t start_tree_7; ///< Start Angle of tree 7
 int32_t end_tree_7; ///< End angle of tree 7
 int32_t start_tree_8; ///< Start Angle of tree 8
 int32_t end_tree_8; ///< End angle of tree 8
 int32_t start_tree_9; ///< Start Angle of tree 9
 int32_t end_tree_9; ///< End angle of tree 9
 int32_t start_tree_10; ///< Start Angle of tree 10
 int32_t end_tree_10; ///< End angle of tree 10
 uint16_t data_id; ///< Data ID to verify
} mavlink_pi_cam_data_t;

#define MAVLINK_MSG_ID_PI_CAM_DATA_LEN 82
#define MAVLINK_MSG_ID_186_LEN 82

#define MAVLINK_MSG_ID_PI_CAM_DATA_CRC 213
#define MAVLINK_MSG_ID_186_CRC 213



#define MAVLINK_MESSAGE_INFO_PI_CAM_DATA { \
	"PI_CAM_DATA", \
	21, \
	{  { "start_tree_1", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_pi_cam_data_t, start_tree_1) }, \
         { "end_tree_1", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_pi_cam_data_t, end_tree_1) }, \
         { "start_tree_2", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_pi_cam_data_t, start_tree_2) }, \
         { "end_tree_2", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_pi_cam_data_t, end_tree_2) }, \
         { "start_tree_3", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_pi_cam_data_t, start_tree_3) }, \
         { "end_tree_3", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_pi_cam_data_t, end_tree_3) }, \
         { "start_tree_4", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_pi_cam_data_t, start_tree_4) }, \
         { "end_tree_4", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_pi_cam_data_t, end_tree_4) }, \
         { "start_tree_5", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_pi_cam_data_t, start_tree_5) }, \
         { "end_tree_5", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_pi_cam_data_t, end_tree_5) }, \
         { "start_tree_6", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_pi_cam_data_t, start_tree_6) }, \
         { "end_tree_6", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_pi_cam_data_t, end_tree_6) }, \
         { "start_tree_7", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_pi_cam_data_t, start_tree_7) }, \
         { "end_tree_7", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_pi_cam_data_t, end_tree_7) }, \
         { "start_tree_8", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_pi_cam_data_t, start_tree_8) }, \
         { "end_tree_8", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_pi_cam_data_t, end_tree_8) }, \
         { "start_tree_9", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_pi_cam_data_t, start_tree_9) }, \
         { "end_tree_9", NULL, MAVLINK_TYPE_INT32_T, 0, 68, offsetof(mavlink_pi_cam_data_t, end_tree_9) }, \
         { "start_tree_10", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_pi_cam_data_t, start_tree_10) }, \
         { "end_tree_10", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_pi_cam_data_t, end_tree_10) }, \
         { "data_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 80, offsetof(mavlink_pi_cam_data_t, data_id) }, \
         } \
}


/**
 * @brief Pack a pi_cam_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data_id Data ID to verify
 * @param start_tree_1 Start Angle of tree 1
 * @param end_tree_1 End angle of tree 1
 * @param start_tree_2 Start Angle of tree 2
 * @param end_tree_2 End angle of tree 2
 * @param start_tree_3 Start Angle of tree 3
 * @param end_tree_3 End angle of tree 3
 * @param start_tree_4 Start Angle of tree 4
 * @param end_tree_4 End angle of tree 4
 * @param start_tree_5 Start Angle of tree 5
 * @param end_tree_5 End angle of tree 5
 * @param start_tree_6 Start Angle of tree 6
 * @param end_tree_6 End angle of tree 6
 * @param start_tree_7 Start Angle of tree 7
 * @param end_tree_7 End angle of tree 7
 * @param start_tree_8 Start Angle of tree 8
 * @param end_tree_8 End angle of tree 8
 * @param start_tree_9 Start Angle of tree 9
 * @param end_tree_9 End angle of tree 9
 * @param start_tree_10 Start Angle of tree 10
 * @param end_tree_10 End angle of tree 10
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pi_cam_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t data_id, int32_t start_tree_1, int32_t end_tree_1, int32_t start_tree_2, int32_t end_tree_2, int32_t start_tree_3, int32_t end_tree_3, int32_t start_tree_4, int32_t end_tree_4, int32_t start_tree_5, int32_t end_tree_5, int32_t start_tree_6, int32_t end_tree_6, int32_t start_tree_7, int32_t end_tree_7, int32_t start_tree_8, int32_t end_tree_8, int32_t start_tree_9, int32_t end_tree_9, int32_t start_tree_10, int32_t end_tree_10)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_CAM_DATA_LEN];
	_mav_put_int32_t(buf, 0, start_tree_1);
	_mav_put_int32_t(buf, 4, end_tree_1);
	_mav_put_int32_t(buf, 8, start_tree_2);
	_mav_put_int32_t(buf, 12, end_tree_2);
	_mav_put_int32_t(buf, 16, start_tree_3);
	_mav_put_int32_t(buf, 20, end_tree_3);
	_mav_put_int32_t(buf, 24, start_tree_4);
	_mav_put_int32_t(buf, 28, end_tree_4);
	_mav_put_int32_t(buf, 32, start_tree_5);
	_mav_put_int32_t(buf, 36, end_tree_5);
	_mav_put_int32_t(buf, 40, start_tree_6);
	_mav_put_int32_t(buf, 44, end_tree_6);
	_mav_put_int32_t(buf, 48, start_tree_7);
	_mav_put_int32_t(buf, 52, end_tree_7);
	_mav_put_int32_t(buf, 56, start_tree_8);
	_mav_put_int32_t(buf, 60, end_tree_8);
	_mav_put_int32_t(buf, 64, start_tree_9);
	_mav_put_int32_t(buf, 68, end_tree_9);
	_mav_put_int32_t(buf, 72, start_tree_10);
	_mav_put_int32_t(buf, 76, end_tree_10);
	_mav_put_uint16_t(buf, 80, data_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#else
	mavlink_pi_cam_data_t packet;
	packet.start_tree_1 = start_tree_1;
	packet.end_tree_1 = end_tree_1;
	packet.start_tree_2 = start_tree_2;
	packet.end_tree_2 = end_tree_2;
	packet.start_tree_3 = start_tree_3;
	packet.end_tree_3 = end_tree_3;
	packet.start_tree_4 = start_tree_4;
	packet.end_tree_4 = end_tree_4;
	packet.start_tree_5 = start_tree_5;
	packet.end_tree_5 = end_tree_5;
	packet.start_tree_6 = start_tree_6;
	packet.end_tree_6 = end_tree_6;
	packet.start_tree_7 = start_tree_7;
	packet.end_tree_7 = end_tree_7;
	packet.start_tree_8 = start_tree_8;
	packet.end_tree_8 = end_tree_8;
	packet.start_tree_9 = start_tree_9;
	packet.end_tree_9 = end_tree_9;
	packet.start_tree_10 = start_tree_10;
	packet.end_tree_10 = end_tree_10;
	packet.data_id = data_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PI_CAM_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
}

/**
 * @brief Pack a pi_cam_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data_id Data ID to verify
 * @param start_tree_1 Start Angle of tree 1
 * @param end_tree_1 End angle of tree 1
 * @param start_tree_2 Start Angle of tree 2
 * @param end_tree_2 End angle of tree 2
 * @param start_tree_3 Start Angle of tree 3
 * @param end_tree_3 End angle of tree 3
 * @param start_tree_4 Start Angle of tree 4
 * @param end_tree_4 End angle of tree 4
 * @param start_tree_5 Start Angle of tree 5
 * @param end_tree_5 End angle of tree 5
 * @param start_tree_6 Start Angle of tree 6
 * @param end_tree_6 End angle of tree 6
 * @param start_tree_7 Start Angle of tree 7
 * @param end_tree_7 End angle of tree 7
 * @param start_tree_8 Start Angle of tree 8
 * @param end_tree_8 End angle of tree 8
 * @param start_tree_9 Start Angle of tree 9
 * @param end_tree_9 End angle of tree 9
 * @param start_tree_10 Start Angle of tree 10
 * @param end_tree_10 End angle of tree 10
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pi_cam_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t data_id,int32_t start_tree_1,int32_t end_tree_1,int32_t start_tree_2,int32_t end_tree_2,int32_t start_tree_3,int32_t end_tree_3,int32_t start_tree_4,int32_t end_tree_4,int32_t start_tree_5,int32_t end_tree_5,int32_t start_tree_6,int32_t end_tree_6,int32_t start_tree_7,int32_t end_tree_7,int32_t start_tree_8,int32_t end_tree_8,int32_t start_tree_9,int32_t end_tree_9,int32_t start_tree_10,int32_t end_tree_10)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_CAM_DATA_LEN];
	_mav_put_int32_t(buf, 0, start_tree_1);
	_mav_put_int32_t(buf, 4, end_tree_1);
	_mav_put_int32_t(buf, 8, start_tree_2);
	_mav_put_int32_t(buf, 12, end_tree_2);
	_mav_put_int32_t(buf, 16, start_tree_3);
	_mav_put_int32_t(buf, 20, end_tree_3);
	_mav_put_int32_t(buf, 24, start_tree_4);
	_mav_put_int32_t(buf, 28, end_tree_4);
	_mav_put_int32_t(buf, 32, start_tree_5);
	_mav_put_int32_t(buf, 36, end_tree_5);
	_mav_put_int32_t(buf, 40, start_tree_6);
	_mav_put_int32_t(buf, 44, end_tree_6);
	_mav_put_int32_t(buf, 48, start_tree_7);
	_mav_put_int32_t(buf, 52, end_tree_7);
	_mav_put_int32_t(buf, 56, start_tree_8);
	_mav_put_int32_t(buf, 60, end_tree_8);
	_mav_put_int32_t(buf, 64, start_tree_9);
	_mav_put_int32_t(buf, 68, end_tree_9);
	_mav_put_int32_t(buf, 72, start_tree_10);
	_mav_put_int32_t(buf, 76, end_tree_10);
	_mav_put_uint16_t(buf, 80, data_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#else
	mavlink_pi_cam_data_t packet;
	packet.start_tree_1 = start_tree_1;
	packet.end_tree_1 = end_tree_1;
	packet.start_tree_2 = start_tree_2;
	packet.end_tree_2 = end_tree_2;
	packet.start_tree_3 = start_tree_3;
	packet.end_tree_3 = end_tree_3;
	packet.start_tree_4 = start_tree_4;
	packet.end_tree_4 = end_tree_4;
	packet.start_tree_5 = start_tree_5;
	packet.end_tree_5 = end_tree_5;
	packet.start_tree_6 = start_tree_6;
	packet.end_tree_6 = end_tree_6;
	packet.start_tree_7 = start_tree_7;
	packet.end_tree_7 = end_tree_7;
	packet.start_tree_8 = start_tree_8;
	packet.end_tree_8 = end_tree_8;
	packet.start_tree_9 = start_tree_9;
	packet.end_tree_9 = end_tree_9;
	packet.start_tree_10 = start_tree_10;
	packet.end_tree_10 = end_tree_10;
	packet.data_id = data_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PI_CAM_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
}

/**
 * @brief Encode a pi_cam_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pi_cam_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pi_cam_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pi_cam_data_t* pi_cam_data)
{
	return mavlink_msg_pi_cam_data_pack(system_id, component_id, msg, pi_cam_data->data_id, pi_cam_data->start_tree_1, pi_cam_data->end_tree_1, pi_cam_data->start_tree_2, pi_cam_data->end_tree_2, pi_cam_data->start_tree_3, pi_cam_data->end_tree_3, pi_cam_data->start_tree_4, pi_cam_data->end_tree_4, pi_cam_data->start_tree_5, pi_cam_data->end_tree_5, pi_cam_data->start_tree_6, pi_cam_data->end_tree_6, pi_cam_data->start_tree_7, pi_cam_data->end_tree_7, pi_cam_data->start_tree_8, pi_cam_data->end_tree_8, pi_cam_data->start_tree_9, pi_cam_data->end_tree_9, pi_cam_data->start_tree_10, pi_cam_data->end_tree_10);
}

/**
 * @brief Encode a pi_cam_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pi_cam_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pi_cam_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pi_cam_data_t* pi_cam_data)
{
	return mavlink_msg_pi_cam_data_pack_chan(system_id, component_id, chan, msg, pi_cam_data->data_id, pi_cam_data->start_tree_1, pi_cam_data->end_tree_1, pi_cam_data->start_tree_2, pi_cam_data->end_tree_2, pi_cam_data->start_tree_3, pi_cam_data->end_tree_3, pi_cam_data->start_tree_4, pi_cam_data->end_tree_4, pi_cam_data->start_tree_5, pi_cam_data->end_tree_5, pi_cam_data->start_tree_6, pi_cam_data->end_tree_6, pi_cam_data->start_tree_7, pi_cam_data->end_tree_7, pi_cam_data->start_tree_8, pi_cam_data->end_tree_8, pi_cam_data->start_tree_9, pi_cam_data->end_tree_9, pi_cam_data->start_tree_10, pi_cam_data->end_tree_10);
}

/**
 * @brief Send a pi_cam_data message
 * @param chan MAVLink channel to send the message
 *
 * @param data_id Data ID to verify
 * @param start_tree_1 Start Angle of tree 1
 * @param end_tree_1 End angle of tree 1
 * @param start_tree_2 Start Angle of tree 2
 * @param end_tree_2 End angle of tree 2
 * @param start_tree_3 Start Angle of tree 3
 * @param end_tree_3 End angle of tree 3
 * @param start_tree_4 Start Angle of tree 4
 * @param end_tree_4 End angle of tree 4
 * @param start_tree_5 Start Angle of tree 5
 * @param end_tree_5 End angle of tree 5
 * @param start_tree_6 Start Angle of tree 6
 * @param end_tree_6 End angle of tree 6
 * @param start_tree_7 Start Angle of tree 7
 * @param end_tree_7 End angle of tree 7
 * @param start_tree_8 Start Angle of tree 8
 * @param end_tree_8 End angle of tree 8
 * @param start_tree_9 Start Angle of tree 9
 * @param end_tree_9 End angle of tree 9
 * @param start_tree_10 Start Angle of tree 10
 * @param end_tree_10 End angle of tree 10
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pi_cam_data_send(mavlink_channel_t chan, uint16_t data_id, int32_t start_tree_1, int32_t end_tree_1, int32_t start_tree_2, int32_t end_tree_2, int32_t start_tree_3, int32_t end_tree_3, int32_t start_tree_4, int32_t end_tree_4, int32_t start_tree_5, int32_t end_tree_5, int32_t start_tree_6, int32_t end_tree_6, int32_t start_tree_7, int32_t end_tree_7, int32_t start_tree_8, int32_t end_tree_8, int32_t start_tree_9, int32_t end_tree_9, int32_t start_tree_10, int32_t end_tree_10)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_CAM_DATA_LEN];
	_mav_put_int32_t(buf, 0, start_tree_1);
	_mav_put_int32_t(buf, 4, end_tree_1);
	_mav_put_int32_t(buf, 8, start_tree_2);
	_mav_put_int32_t(buf, 12, end_tree_2);
	_mav_put_int32_t(buf, 16, start_tree_3);
	_mav_put_int32_t(buf, 20, end_tree_3);
	_mav_put_int32_t(buf, 24, start_tree_4);
	_mav_put_int32_t(buf, 28, end_tree_4);
	_mav_put_int32_t(buf, 32, start_tree_5);
	_mav_put_int32_t(buf, 36, end_tree_5);
	_mav_put_int32_t(buf, 40, start_tree_6);
	_mav_put_int32_t(buf, 44, end_tree_6);
	_mav_put_int32_t(buf, 48, start_tree_7);
	_mav_put_int32_t(buf, 52, end_tree_7);
	_mav_put_int32_t(buf, 56, start_tree_8);
	_mav_put_int32_t(buf, 60, end_tree_8);
	_mav_put_int32_t(buf, 64, start_tree_9);
	_mav_put_int32_t(buf, 68, end_tree_9);
	_mav_put_int32_t(buf, 72, start_tree_10);
	_mav_put_int32_t(buf, 76, end_tree_10);
	_mav_put_uint16_t(buf, 80, data_id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
#else
	mavlink_pi_cam_data_t packet;
	packet.start_tree_1 = start_tree_1;
	packet.end_tree_1 = end_tree_1;
	packet.start_tree_2 = start_tree_2;
	packet.end_tree_2 = end_tree_2;
	packet.start_tree_3 = start_tree_3;
	packet.end_tree_3 = end_tree_3;
	packet.start_tree_4 = start_tree_4;
	packet.end_tree_4 = end_tree_4;
	packet.start_tree_5 = start_tree_5;
	packet.end_tree_5 = end_tree_5;
	packet.start_tree_6 = start_tree_6;
	packet.end_tree_6 = end_tree_6;
	packet.start_tree_7 = start_tree_7;
	packet.end_tree_7 = end_tree_7;
	packet.start_tree_8 = start_tree_8;
	packet.end_tree_8 = end_tree_8;
	packet.start_tree_9 = start_tree_9;
	packet.end_tree_9 = end_tree_9;
	packet.start_tree_10 = start_tree_10;
	packet.end_tree_10 = end_tree_10;
	packet.data_id = data_id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, (const char *)&packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, (const char *)&packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PI_CAM_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pi_cam_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t data_id, int32_t start_tree_1, int32_t end_tree_1, int32_t start_tree_2, int32_t end_tree_2, int32_t start_tree_3, int32_t end_tree_3, int32_t start_tree_4, int32_t end_tree_4, int32_t start_tree_5, int32_t end_tree_5, int32_t start_tree_6, int32_t end_tree_6, int32_t start_tree_7, int32_t end_tree_7, int32_t start_tree_8, int32_t end_tree_8, int32_t start_tree_9, int32_t end_tree_9, int32_t start_tree_10, int32_t end_tree_10)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, start_tree_1);
	_mav_put_int32_t(buf, 4, end_tree_1);
	_mav_put_int32_t(buf, 8, start_tree_2);
	_mav_put_int32_t(buf, 12, end_tree_2);
	_mav_put_int32_t(buf, 16, start_tree_3);
	_mav_put_int32_t(buf, 20, end_tree_3);
	_mav_put_int32_t(buf, 24, start_tree_4);
	_mav_put_int32_t(buf, 28, end_tree_4);
	_mav_put_int32_t(buf, 32, start_tree_5);
	_mav_put_int32_t(buf, 36, end_tree_5);
	_mav_put_int32_t(buf, 40, start_tree_6);
	_mav_put_int32_t(buf, 44, end_tree_6);
	_mav_put_int32_t(buf, 48, start_tree_7);
	_mav_put_int32_t(buf, 52, end_tree_7);
	_mav_put_int32_t(buf, 56, start_tree_8);
	_mav_put_int32_t(buf, 60, end_tree_8);
	_mav_put_int32_t(buf, 64, start_tree_9);
	_mav_put_int32_t(buf, 68, end_tree_9);
	_mav_put_int32_t(buf, 72, start_tree_10);
	_mav_put_int32_t(buf, 76, end_tree_10);
	_mav_put_uint16_t(buf, 80, data_id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, buf, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
#else
	mavlink_pi_cam_data_t *packet = (mavlink_pi_cam_data_t *)msgbuf;
	packet->start_tree_1 = start_tree_1;
	packet->end_tree_1 = end_tree_1;
	packet->start_tree_2 = start_tree_2;
	packet->end_tree_2 = end_tree_2;
	packet->start_tree_3 = start_tree_3;
	packet->end_tree_3 = end_tree_3;
	packet->start_tree_4 = start_tree_4;
	packet->end_tree_4 = end_tree_4;
	packet->start_tree_5 = start_tree_5;
	packet->end_tree_5 = end_tree_5;
	packet->start_tree_6 = start_tree_6;
	packet->end_tree_6 = end_tree_6;
	packet->start_tree_7 = start_tree_7;
	packet->end_tree_7 = end_tree_7;
	packet->start_tree_8 = start_tree_8;
	packet->end_tree_8 = end_tree_8;
	packet->start_tree_9 = start_tree_9;
	packet->end_tree_9 = end_tree_9;
	packet->start_tree_10 = start_tree_10;
	packet->end_tree_10 = end_tree_10;
	packet->data_id = data_id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, (const char *)packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN, MAVLINK_MSG_ID_PI_CAM_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_CAM_DATA, (const char *)packet, MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PI_CAM_DATA UNPACKING


/**
 * @brief Get field data_id from pi_cam_data message
 *
 * @return Data ID to verify
 */
static inline uint16_t mavlink_msg_pi_cam_data_get_data_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  80);
}

/**
 * @brief Get field start_tree_1 from pi_cam_data message
 *
 * @return Start Angle of tree 1
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field end_tree_1 from pi_cam_data message
 *
 * @return End angle of tree 1
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field start_tree_2 from pi_cam_data message
 *
 * @return Start Angle of tree 2
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field end_tree_2 from pi_cam_data message
 *
 * @return End angle of tree 2
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field start_tree_3 from pi_cam_data message
 *
 * @return Start Angle of tree 3
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field end_tree_3 from pi_cam_data message
 *
 * @return End angle of tree 3
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field start_tree_4 from pi_cam_data message
 *
 * @return Start Angle of tree 4
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field end_tree_4 from pi_cam_data message
 *
 * @return End angle of tree 4
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field start_tree_5 from pi_cam_data message
 *
 * @return Start Angle of tree 5
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field end_tree_5 from pi_cam_data message
 *
 * @return End angle of tree 5
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field start_tree_6 from pi_cam_data message
 *
 * @return Start Angle of tree 6
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field end_tree_6 from pi_cam_data message
 *
 * @return End angle of tree 6
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field start_tree_7 from pi_cam_data message
 *
 * @return Start Angle of tree 7
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_7(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Get field end_tree_7 from pi_cam_data message
 *
 * @return End angle of tree 7
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_7(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  52);
}

/**
 * @brief Get field start_tree_8 from pi_cam_data message
 *
 * @return Start Angle of tree 8
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_8(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  56);
}

/**
 * @brief Get field end_tree_8 from pi_cam_data message
 *
 * @return End angle of tree 8
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_8(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  60);
}

/**
 * @brief Get field start_tree_9 from pi_cam_data message
 *
 * @return Start Angle of tree 9
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_9(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  64);
}

/**
 * @brief Get field end_tree_9 from pi_cam_data message
 *
 * @return End angle of tree 9
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_9(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  68);
}

/**
 * @brief Get field start_tree_10 from pi_cam_data message
 *
 * @return Start Angle of tree 10
 */
static inline int32_t mavlink_msg_pi_cam_data_get_start_tree_10(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  72);
}

/**
 * @brief Get field end_tree_10 from pi_cam_data message
 *
 * @return End angle of tree 10
 */
static inline int32_t mavlink_msg_pi_cam_data_get_end_tree_10(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  76);
}

/**
 * @brief Decode a pi_cam_data message into a struct
 *
 * @param msg The message to decode
 * @param pi_cam_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_pi_cam_data_decode(const mavlink_message_t* msg, mavlink_pi_cam_data_t* pi_cam_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	pi_cam_data->start_tree_1 = mavlink_msg_pi_cam_data_get_start_tree_1(msg);
	pi_cam_data->end_tree_1 = mavlink_msg_pi_cam_data_get_end_tree_1(msg);
	pi_cam_data->start_tree_2 = mavlink_msg_pi_cam_data_get_start_tree_2(msg);
	pi_cam_data->end_tree_2 = mavlink_msg_pi_cam_data_get_end_tree_2(msg);
	pi_cam_data->start_tree_3 = mavlink_msg_pi_cam_data_get_start_tree_3(msg);
	pi_cam_data->end_tree_3 = mavlink_msg_pi_cam_data_get_end_tree_3(msg);
	pi_cam_data->start_tree_4 = mavlink_msg_pi_cam_data_get_start_tree_4(msg);
	pi_cam_data->end_tree_4 = mavlink_msg_pi_cam_data_get_end_tree_4(msg);
	pi_cam_data->start_tree_5 = mavlink_msg_pi_cam_data_get_start_tree_5(msg);
	pi_cam_data->end_tree_5 = mavlink_msg_pi_cam_data_get_end_tree_5(msg);
	pi_cam_data->start_tree_6 = mavlink_msg_pi_cam_data_get_start_tree_6(msg);
	pi_cam_data->end_tree_6 = mavlink_msg_pi_cam_data_get_end_tree_6(msg);
	pi_cam_data->start_tree_7 = mavlink_msg_pi_cam_data_get_start_tree_7(msg);
	pi_cam_data->end_tree_7 = mavlink_msg_pi_cam_data_get_end_tree_7(msg);
	pi_cam_data->start_tree_8 = mavlink_msg_pi_cam_data_get_start_tree_8(msg);
	pi_cam_data->end_tree_8 = mavlink_msg_pi_cam_data_get_end_tree_8(msg);
	pi_cam_data->start_tree_9 = mavlink_msg_pi_cam_data_get_start_tree_9(msg);
	pi_cam_data->end_tree_9 = mavlink_msg_pi_cam_data_get_end_tree_9(msg);
	pi_cam_data->start_tree_10 = mavlink_msg_pi_cam_data_get_start_tree_10(msg);
	pi_cam_data->end_tree_10 = mavlink_msg_pi_cam_data_get_end_tree_10(msg);
	pi_cam_data->data_id = mavlink_msg_pi_cam_data_get_data_id(msg);
#else
	memcpy(pi_cam_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PI_CAM_DATA_LEN);
#endif
}
