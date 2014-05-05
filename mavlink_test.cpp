/** This example is public domain. */





/**
 * @file
 *   @brief The serial interface process
 *
 *   This process connects any external MAVLink UART device and prints data
 *
 *   @author Lorenz Meier, <lm@inf.ethz.ch>
 *
 */



#include "mavlink/v1.0/common/mavlink.h"
#include "mavlink/v1.0/ardupilotmega/mavlink_msg_pi_trigger.h"

// Standard includes
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <string.h>
#include <inttypes.h>
#include <fstream>
// Serial includes
#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */
#ifdef __linux
#include <sys/ioctl.h>
#endif

// Latency Benchmarking
#include <sys/time.h>
#include <time.h>

using std::string;
using namespace std;

struct timeval tv; ///< System time

// Settings
int sysid = 42; ///< The unique system id of this MAV, 0-127. Has to be consistent across the system
int compid = 110;
int serial_compid = 0;
bool silent = false; ///< Wether console output should be enabled
bool verbose = false; ///< Enable verbose output
bool debug = false; ///< Enable debug functions and output
int fd;

/**
 *
 *
 * Returns the file descriptor on success or -1 on error.
 */

int open_port(const char* port) {
    int fd; /* File descriptor for the port */

    // Open serial port
    // O_RDWR - Read and write
    // O_NOCTTY - Ignore special chars like CTRL-C
    fd = open(port, O_RDWR | O_NOCTTY | O_NDELAY);
    if (fd == -1) {
        /* Could not open the port. */
        return (-1);
    } else {
        fcntl(fd, F_SETFL, 0);
    }

    return (fd);
}

bool setup_port(int fd, int baud, int data_bits, int stop_bits, bool parity, bool hardware_control) {
    //struct termios options;

    struct termios config;
    if (!isatty(fd)) {
        fprintf(stderr, "\nERROR: file descriptor %d is NOT a serial port\n", fd);
        return false;
    }
    if (tcgetattr(fd, &config) < 0) {
        fprintf(stderr, "\nERROR: could not read configuration of fd %d\n", fd);
        return false;
    }
    //
    // Input flags - Turn off input processing
    // convert break to null byte, no CR to NL translation,
    // no NL to CR translation, don't mark parity errors or breaks
    // no input parity check, don't strip high bit off,
    // no XON/XOFF software flow control
    //
    config.c_iflag &= ~(IGNBRK | BRKINT | ICRNL |
            INLCR | PARMRK | INPCK | ISTRIP | IXON);
    //
    // Output flags - Turn off output processing
    // no CR to NL translation, no NL to CR-NL translation,
    // no NL to CR translation, no column 0 CR suppression,
    // no Ctrl-D suppression, no fill characters, no case mapping,
    // no local output processing
    //
    config.c_oflag &= ~(OCRNL | ONLCR | ONLRET |
            ONOCR | OFILL | OPOST);

#ifdef OLCUC 
    config.c_oflag &= ~OLCUC;
#endif

#ifdef ONOEOT
    config.c_oflag &= ~ONOEOT;
#endif

    //
    // No line processing:
    // echo off, echo newline off, canonical mode off,
    // extended input processing off, signal chars off
    //
    config.c_lflag &= ~(ECHO | ECHONL | ICANON | IEXTEN | ISIG);
    //
    // Turn off character processing
    // clear current char size mask, no parity checking,
    // no output processing, force 8 bit input
    //
    config.c_cflag &= ~(CSIZE | PARENB);
    config.c_cflag |= CS8;
    //
    // One input byte is enough to return from read()
    // Inter-character timer off
    //
    config.c_cc[VMIN] = 1;
    config.c_cc[VTIME] = 10; // was 0

    // Get the current options for the port
    //tcgetattr(fd, &options);

    switch (baud) {
        case 1200:
            if (cfsetispeed(&config, B1200) < 0 || cfsetospeed(&config, B1200) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;
        case 1800:
            cfsetispeed(&config, B1800);
            cfsetospeed(&config, B1800);
            break;
        case 9600:
            cfsetispeed(&config, B9600);
            cfsetospeed(&config, B9600);
            break;
        case 19200:
            cfsetispeed(&config, B19200);
            cfsetospeed(&config, B19200);
            break;
        case 38400:
            if (cfsetispeed(&config, B38400) < 0 || cfsetospeed(&config, B38400) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;
        case 57600:
            if (cfsetispeed(&config, B57600) < 0 || cfsetospeed(&config, B57600) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;
        case 115200:
            if (cfsetispeed(&config, B115200) < 0 || cfsetospeed(&config, B115200) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;

            // These two non-standard (by the 70'ties ) rates are fully supported on
            // current Debian and Mac OS versions (tested since 2010).
        case 460800:
            if (cfsetispeed(&config, 460800) < 0 || cfsetospeed(&config, 460800) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;
        case 921600:
            if (cfsetispeed(&config, 921600) < 0 || cfsetospeed(&config, 921600) < 0) {
                fprintf(stderr, "\nERROR: Could not set desired baud rate of %d Baud\n", baud);
                return false;
            }
            break;
        default:
            fprintf(stderr, "ERROR: Desired baud rate %d could not be set, aborting.\n", baud);
            return false;

            break;
    }

    //
    // Finally, apply the configuration
    //
    if (tcsetattr(fd, TCSAFLUSH, &config) < 0) {
        fprintf(stderr, "\nERROR: could not set configuration of fd %d\n", fd);
        return false;
    }
    return true;
}

void close_port(int fd) {
    close(fd);
}

/**
 * @brief Serial function
 *
 * This function blocks waiting for serial data in it's own thread
 * and forwards the data once received.
 */
int serial_readMSG(int serial_fd) {
    int fd = serial_fd;

    mavlink_status_t lastStatus;
    lastStatus.packet_rx_drop_count = 0;

    // Blocking wait for new data
    uint8_t msgReceived = false;
    mavlink_message_t message;

    while (!msgReceived) {
        //if (debug) printf("Checking for new data on serial port\n");
        // Block until data is available, read only one byte to be able to continue immediately
        //char buf[MAVLINK_MAX_PACKET_LEN];
        uint8_t cp;

        mavlink_status_t status;


        if (read(fd, &cp, 1) > 0) {
            // Check if a message could be decoded, return the message in case yes
            msgReceived = mavlink_parse_char(MAVLINK_COMM_1, cp, &message, &status);
            if (lastStatus.packet_rx_drop_count != status.packet_rx_drop_count) {
                //  if (verbose || debug) printf("ERROR: DROPPED %d PACKETS\n", status.packet_rx_drop_count);
                if (debug) {
                    unsigned char v = cp;
                    fprintf(stderr, "%02x ", v);
                }
            }
            lastStatus = status;
        } else {
            //   if (!silent) fprintf(stderr, "ERROR: Could not read from fd %d\n", fd);
        }
    }
    // If a message could be decoded, handle it
    if (msgReceived) {
        printf("Received message from serial with ID #%d (sys:%d|comp:%d):\n", message.msgid, message.sysid, message.compid);

        /* decode and print */

        switch (message.msgid) {
            case MAVLINK_MSG_ID_ATTITUDE:
            {
                mavlink_attitude_t attitude;
                mavlink_msg_attitude_decode(&message, &attitude);

                //        printf("Got message ATTITUDE \n");
                //        printf("\t YAW:\t% f\tPITCH:\t% f\tROLL:\t% f \n", attitude.yaw, attitude.pitch, attitude.roll);

            }
                break;
        }
    }
    return 0;
}

int setupPort(char* uart_name, int baudrate) {
    // SETUP SERIAL PORT

    // Exit if opening port failed
    // Open the serial port.
    if (!silent) printf("Trying to connect to %s.. ", uart_name);
    fflush(stdout);

    fd = open_port(uart_name);
    if (fd == -1) {
        if (!silent) printf("failure, could not open port.\n");
        return (EXIT_FAILURE);
    } else {
        if (!silent) printf("success.\n");
    }
    if (!silent) printf("Trying to configure %s.. ", uart_name);
    bool setup = setup_port(fd, baudrate, 8, 1, false, false);
    if (!setup) {
        if (!silent) printf("failure, could not configure port.\n");
        return (EXIT_FAILURE);
    } else {
        if (!silent) printf("success.\n");
    }

    int noErrors = 0;
    if (fd == -1 || fd == 0) {
        if (!silent) fprintf(stderr, "Connection attempt to port %s with %d baud, 8N1 failed, exiting.\n", uart_name, baudrate);
        return (EXIT_FAILURE);
    } else {
        if (!silent) fprintf(stderr, "\nConnected to %s with %d baud, 8 data bits, no parity, 1 stop bit (8N1)\n", uart_name, baudrate);
    }

    if (fd < 0) {
        return (noErrors);
    }
    return 2;
}

int sendRequestDataStream(int serial_fd) {
    int fd = serial_fd;

    char buf[300];


    mavlink_message_t message;

    mavlink_request_data_stream_t requestDS;
    
    mavlink_pi_trigger_t trigger;
    
    trigger.data = 123;
    
    requestDS.start_stop = 0;
    requestDS.req_stream_id = MAV_DATA_STREAM_EXTRA3;
    requestDS.req_message_rate = 10;
    requestDS.target_component = 1;
    requestDS.target_system = 1;

    //mavlink_msg_request_data_stream_encode(255, 1, &message, &requestDS);
    mavlink_msg_pi_trigger_encode(255,1,&message,&trigger);
    
    unsigned len = mavlink_msg_to_send_buffer((uint8_t*) buf, &message);
    //   printf("before write\n");
    /* write packet via serial link */
    write(fd, buf, len);
    /* wait until all data has been written */
    tcdrain(fd);
    
    //     printf("after write , sys_id = %d\n",requestParam.target_system);


    return 0;

}

int main(int argc, char **argv) {

    /* default values for arguments */
    char *uart_name = (char*) "/dev/ttyACM1";
    int baudrate = 115200;


    printf("starting serial port\n");

    int status = setupPort(uart_name, baudrate);

    if (status == EXIT_FAILURE || status == 0) {
        exit(status);
    }

    // Run indefinitely while the serial loop handles data
    printf("\nREADY, waiting for serial data.\n");

    // send request data stream
    usleep(2000000);

    sendRequestDataStream(fd);
  //  sendRequestDataStream(fd);
  //  sendRequestDataStream(fd);

    while (1) {
        serial_readMSG(fd);
        serial_readMSG(fd);
        serial_readMSG(fd);
        serial_readMSG(fd);
        serial_readMSG(fd);
        sendRequestDataStream(fd);
        // usleep(100000);
    }



    close_port(fd);

    return 0;
}
