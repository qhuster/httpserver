#ifndef __RESPONSE_TYPE_H
#define __RESPONSE_TYPE_H

#include <string>
using namespace std; 

class ResponseCode {

enum Status{

    CONTINUE = 100,           
    SWITCH_PROTOCOL = 101,


    OK = 200,
    CREATED = 201,
    ACCEPTED = 202,
    NON_AUTHORITATIVE_INFORMATION = 203,
    NO_CONTENT = 204,
    RESET_CONTENT = 205,
    PARTIAL_CONTENT = 206,


    MULTIPLE_CHOICES = 300,
    MOVED_PERMANENTLY = 301,
    FOUND = 302,
    SEE_OTHER = 303,
    NOT_MODIFIED = 304,
    USE_PROXY = 305,
    UNUSED = 306,
    TEMPORARY_REDIRECT = 307,


    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    PAYMENT_REQUIRED = 400,
    FORBIDDEN = 403,


    INTERNAL_SERVER_ERROR = 500

};

public:
    static string GetStatusName(Status status);

};


#endif