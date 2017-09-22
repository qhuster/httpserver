#include "ResponseCode.h"

string ResponseCode::GetStatusName(Status status){
    switch(status){
        case CONTINUE : return "Continue";
        case OK : return "OK";
        default : return "";
    }
}