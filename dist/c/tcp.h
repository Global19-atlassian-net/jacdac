// Autogenerated C header file for TCP
#ifndef _JACDAC_SPEC_TCP_H
#define _JACDAC_SPEC_TCP_H 1

#define JD_SERVICE_CLASS_TCP  0x1b43b70b

// enum TcpError (int32_t)
#define JD_TCP_TCP_ERROR_INVALID_COMMAND 0x1
#define JD_TCP_TCP_ERROR_INVALID_COMMAND_PAYLOAD 0x2

/** Argument: inbound pipe (bytes). Open pair of pipes between network peripheral and a controlling device. In/outbound refers to direction from/to internet. */
#define JD_TCP_CMD_OPEN 0x80
// Report: Argument: outbound_port pipe_port (uint16_t)

/**
 * Open an SSL connection to a given host:port pair. Can be issued only once on given pipe.
 * After the connection is established, an empty data report is sent.
 * Connection is closed by closing the pipe.
 */
#define JD_TCP_PIPE_OPEN_SSL 0x1
typedef struct jd_tcp_open_ssl {
    uint32_t identifier; // 0x1
    uint16_t tcp_port;
    char hostname[0];  // string
} jd_tcp_open_ssl_t;


/** Argument: data bytes. Bytes to be sent directly over an established TCP or SSL connection. */

/** Argument: data bytes. Bytes read directly from directly over an established TCP or SSL connection. */

/** Argument: error TcpError (int32_t). Reported when an error is encountered. Negative error codes come directly from the SSL implementation. */
#define JD_TCP_PIPE_ERROR 0x0
typedef struct jd_tcp_error {
    uint32_t identifier; // 0x0
    int32_t error;  // TcpError
} jd_tcp_error_t;


#endif