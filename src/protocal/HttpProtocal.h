#ifndef __HTTP_PROTOCAL_H__
#define __HTTP_PROTOCAL_H__

#include <string>
using namespace std;

namespace http {

class HttpProtocal {

public:
    static string DEFAULT_VERSION;
    
    static string RequestTypeFuncToString();
};

std::string HttpProtocal::DEFAULT_VERSION = "HTTP/1.1";

};


#endif