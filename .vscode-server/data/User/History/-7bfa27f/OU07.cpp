// Time class implementation file

#include "Time.h"

#include <iomanip> // library needed for setfill and setw

Time::Time() {
    _hour = 0 ;
    _minute = 0 ;
    _second = 0 ;
}

Time::Time(int hour, int minute, int second){
    _hour = hour ;
    _minute = minute ;
    _second = second ;
}
Time::Time(int hour, int minute, int second, const string &ampm){
    _hour = hour ;
    _minute = minute ;
    _second = second ;
}
   //12-hour format (9:00:00am)