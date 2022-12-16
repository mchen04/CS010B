// Time class implementation file

#include "Time.h"

#include <iomanip> // library needed for setfill and setw

Time::Time() {
    _hour = 0 ;
    _minute = 0 ;
    _second = 0 ;
    _ampm = "24 Hour" ;
}

Time::Time(int hour, int minute, int second){
    _hour = hour ;
    _minute = minute ;
    _second = second ;
    _ampm = "24 Hour" ;
}

Time::Time(int hour, int minute, int second, const string &ampm){
    _hour = hour ;
    _minute = minute ;
    _second = second ;
    _appm = "12 Hour" ;
}

osteam & operator<<( ostream & o, const Time &){
    cout << setfill('0')Time._hour << ":" << Time._minute << ":" << Time._second << endl ;
}