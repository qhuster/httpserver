#ifndef __TCP_SERVER_H__
#define __TCP_SERVER_H__

#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <memory.h>

#define SOCKET int

class TCPConnect{

public:
    TCPConnect(const char *ip);

    TCPConnect(const uint16_t port);

    TCPConnect(const char *ip, const uint16_t port);

    void Start();

public:

    SOCKET Socket() const { return m_listenSocket; }

    void StartAndWait();

protected:
    SOCKET m_listenSocket;

    sockaddr_in m_bindAddr;

    char *m_recvBuf;
};


#endif