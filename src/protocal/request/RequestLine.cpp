#include "RequestLine.h"
#include "HttpProtocal.h"
#include "../util/StringUtil.h"
#include <vector>

using namespace http;

RequestLine::RequestLine(){
    m_requestFuncType = RequestFuncType::GET;
    m_url = "http:\\";
    m_version = HttpProtocal::DEFAULT_VERSION;
}

RequestLine::RequestLine(RequestFuncType requestFuncType, std::string url, std::string version){
    m_requestFuncType = requestFuncType;
    m_url = url;
    m_version = version;
}

/**
 * @name GetRequestFunc
 * @param
 * @return RequestLine::RequestFunc request func type
 */ 
RequestFuncType RequestLine::GetRequestFuncType(){
    return m_requestFuncType;
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

    string requestFuncTypeStr = requestLineInfo[i]; 
    RequestFuncType requestFuncType(RequestFuncType::GET);
    RequestLine requestLine(requestFuncType, requestLineInfo[i++], requestLineInfo[i++]);

    return requestLine;
}
