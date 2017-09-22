#include "Header.h"
#include <exception>

using namespace http;

void Header::AddHeaderParam(string key, string value) {

    if(m_headerParamMap.find(key) != m_headerParamMap.end()){
        return;
    }

    m_headerParamMap.insert(make_pair(key, value));
}

string Header::GetParam(string key) {

    if(m_headerParamMap.find(key) == m_headerParamMap.end()){
        return "";
    }

    return m_headerParamMap[key];
}



