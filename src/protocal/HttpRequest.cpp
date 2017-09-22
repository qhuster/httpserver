#include "HttpRequest.h"

using namespace http;

HttpRequest::RequestFunc HttpRequest::GetRequestFunc(){
    return m_requestFunc;
}

std::string HttpRequest::GetUrl(){
    return m_url;
}
