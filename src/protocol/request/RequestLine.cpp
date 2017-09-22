#include "RequestLine.h"

using namespace http;

RequestLine::RequestLine(){
    m_requestType = RequestType::GET;
    m_url = "http:\\";
    m_version = HttpProtocal::DEFAULT_VERSION;
}

RequestLine::RequestLine(RequestType requestType, std::string url, std::string version){
    m_requestType = requestType;
    m_url = url;
    m_version = version;
}

/**
 * @name GetRequestType
 * @param
 * @return RequestType request func type
 */ 
RequestType RequestLine::GetRequestType(){
    return m_requestType;
}

/**
 * @name GetUrl
 * @param 
 * @return std::string get url
 */ 
std::string RequestLine::GetUrl(){
    return m_url;
}

std::string RequestLine::GetVersion(){
    return m_version;
}

std::string RequestLine::ToString(){
    std::string str;
    str += m_url + " " + m_version + "\n";
    return str;
}

RequestLine RequestLine::Parse(std::string requestLineStr) {

    vector<string> requestLineInfo = \
        StringUtil::Split(requestLineStr, RequestLine::Sepetator);
    
    int i = 0;

    string requestTypeStr = requestLineInfo[i]; 
    RequestType requestType(RequestType::GET);
    RequestLine requestLine(requestType, requestLineInfo[i++], requestLineInfo[i++]);

    return requestLine;
}
