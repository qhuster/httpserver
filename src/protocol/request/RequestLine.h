#ifndef __HTTP_REQUEST_H__
#define __HTTP_REQUEST_H__

#include "RequestType.h"
#include "../../util/StringUtil.h"
#include <vector>

using namespace std;

class HttpProtocal;

namespace http{ 

class RequestLine {

public:
    /** default construction*/
    RequestLine();

    RequestLine(RequestType requestType, std::string url, std::string version);


public:
    /**get request function type*/
    RequestType GetRequestType();

    /**get linked url*/
    string GetUrl();

    /**get protocal version*/
    std::string GetVersion();

    /**convert http request to string*/
    std::string ToString();

    static RequestLine Parse(std::string requestLineStr);

private:
    static char Sepetator;

protected:

    RequestType m_requestType;

    string m_url;

    string m_version;

};

char RequestLine::Sepetator = ' ';

};

#endif