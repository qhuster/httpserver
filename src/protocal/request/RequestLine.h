#ifndef __HTTP_REQUEST_H__
#define __HTTP_REQUEST_H__

#include "../com/Type.h"
#include <string>

using namespace std;
using namespace type;

class HttpProtocal;

namespace http{ 

class RequestLine {

public:
    /** default construction*/
    RequestLine();

    RequestLine(RequestFuncType, std::string url, std::string version);


public:
    /**get request function type*/
    RequestFuncType GetRequestFuncType();

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

    RequestFuncType m_requestFuncType;

    string m_url;

    string m_version;

};

char RequestLine::Sepetator = ' ';

};

#endif