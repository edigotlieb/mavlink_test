// MESSAGE PI_TRIGGER PACKING

#define MAVLINK_MSG_ID_PI_TRIGGER 185

typedef struct __mavlink_pi_trigger_t
{
 uint8_t data; ///< data
} mavlink_pi_trigger_t;

#define MAVLINK_MSG_ID_PI_TRIGGER_LEN 1
#define MAVLINK_MSG_ID_185_LEN 1

#define MAVLINK_MSG_ID_PI_TRIGGER_CRC 145
#define MAVLINK_MSG_ID_185_CRC 145



#define MAVLINK_MESSAGE_INFO_PI_TRIGGER { \
	"PI_TRIGGER", \
	1, \
	{  { "data", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_pi_trigger_t, data) }, \
         } \
}


/**
 * @brief Pack a pi_trigger message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pi_trigger_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_TRIGGER_LEN];
	_mav_put_uint8_t(buf, 0, data);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#else
	mavlink_pi_trigger_t packet;
	packet.data = data;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PI_TRIGGER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
}

/**
 * @brief Pack a pi_trigger message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pi_trigger_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_TRIGGER_LEN];
	_mav_put_uint8_t(buf, 0, data);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#else
	mavlink_pi_trigger_t packet;
	packet.data = data;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PI_TRIGGER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
}

/**
 * @brief Encode a pi_trigger struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pi_trigger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pi_trigger_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pi_trigger_t* pi_trigger)
{
	return mavlink_msg_pi_trigger_pack(system_id, component_id, msg, pi_trigger->data);
}

/**
 * @brief Encode a pi_trigger struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pi_trigger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pi_trigger_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pi_trigger_t* pi_trigger)
{
	return mavlink_msg_pi_trigger_pack_chan(system_id, component_id, chan, msg, pi_trigger->data);
}

/**
 * @brief Send a pi_trigger message
 * @param chan MAVLink channel to send the message
 *
 * @param data data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pi_trigger_send(mavlink_channel_t chan, uint8_t data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PI_TRIGGER_LEN];
	_mav_put_uint8_t(buf, 0, data);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
#else
	mavlink_pi_trigger_t packet;
	packet.data = data;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, (const char *)&packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, (const char *)&packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PI_TRIGGER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pi_trigger_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, data);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, buf, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
#else
	mavlink_pi_trigger_t *packet = (mavlink_pi_trigger_t *)msgbuf;
	packet->data = data;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, (const char *)packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN, MAVLINK_MSG_ID_PI_TRIGGER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PI_TRIGGER, (const char *)packet, MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PI_TRIGGER UNPACKING


/**
 * @brief Get field data from pi_trigger message
 *
 * @return data
 */
static inline uint8_t mavlink_msg_pi_trigger_get_data(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a pi_trigger message into a struct
 *
 * @param msg The message to decode
 * @param pi_trigger C-struct to decode the message contents into
 */
static inline void mavlink_msg_pi_trigger_decode(const mavlink_message_t* msg, mavlink_pi_trigger_t* pi_trigger)
{
#if MAVLINK_NEED_BYTE_SWAP
	pi_trigger->data = mavlink_msg_pi_trigger_get_data(msg);
#else
	memcpy(pi_trigger, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PI_TRIGGER_LEN);
#endif
}
