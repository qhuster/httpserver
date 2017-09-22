#ifndef ___STRING_UTIL_H__
#define ___STRING_UTIL_H__

#include <string>
#include <vector>

#define DEFAULT_VECTOR_SIZE 5
using namespace std;
namespace StringUtil {

    //string split function
    /**
     * @name Split
     * @param str 
     * @return a vector of string
     */
    vector<string> Split(const string str, const char seperator){
        vector<string> strVec(DEFAULT_VECTOR_SIZE);
        size_t startPos = 0;
        size_t endPos = 0;
        while(startPos < str.size()){
            endPos = str.find(seperator, startPos);
            if(endPos == string::npos){
                endPos = str.size();
            }
            string element = str.substr(startPos, endPos - startPos);
            strVec.push_back(element);
            startPos = endPos + 1;
        }
        return strVec;
    }
};

#endif