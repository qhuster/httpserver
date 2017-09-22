#ifndef __HEADER_H__
#define __HEADER_H__

#include <vector>
#include <string>
#include <map>

using namespace std;
namespace http{

class Header {

public: 
    
    void AddHeaderParam(string key, string value);

    string GetParam(string key);

protected:
    map<string, string> m_headerParamMap;

};

};


#endif