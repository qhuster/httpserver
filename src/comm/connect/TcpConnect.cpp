#include "TcpConnect.h"


TCPConnect::TCPConnect(const uint16_t port){
    memset(&m_bindAddr, 0, sizeof(m_bindAddr));
    m_bindAddr.sin_family = AF_INET;
    m_bindAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    m_bindAddr.sin_port = port;
}

TCPConnect::TCPConnect(const char *ip, const uint16_t port){
    if(0 == inet_aton(ip, &(m_bindAddr.sin_addr))){
        //TODO log error;
        return;
    }

    m_bindAddr.sin_family = AF_INET;
    m_bindAddr.sin_port = htons(port);

    m_listenSocket = socket(AF_INET, SOCK_STREAM, 0);
}
void TCPConnect::Start() {
    if(bind(m_listenSocket, (sockaddr *)(&m_bindAddr), sizeof(m_bindAddr)) == -1){
        //TODO log error
    }
}

