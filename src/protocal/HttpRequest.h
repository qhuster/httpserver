#ifndef __HTTP_REQUEST_H__
#define __HTTP_REQUEST_H__

#include <string>

namespace http{ 

class HttpRequest {

    enum RequestFunc {
        GET,
        POST,
        PUT,
        DELETE
    };

public:
    /**get request function type*/
    RequestFunc GetRequestFunc();

    /**get linked url*/
    std::string GetUrl();

    /**get protocal version*/
    std::string GetVersion();

    /**convert http request to string*/
    std::string ToString();

protected:

    RequestFunc m_requestFunc;

    std::string m_url;

    std::string m_version;

};

};

#endif