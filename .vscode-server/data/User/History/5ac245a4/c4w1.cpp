#include <iostream> 
#include "Distance.h"
using namespace std ;

Distance::Distance(){
    feet = 0 ;
    inches = 0.0 ;
}

Distance::Distance(unsigned ft, double in){
    feet = ft ;
    inches = in ;
    init () ;
}

Distance::Distance(double in){
    feet = 0 ;
    inches = in ;
    init () ;
}

unsigned Distance::getFeet() const{
    return feet ;
}

double Distance::getInches() const{
    return inches ;
}

double Distance::distanceInInches() const{
    return ( (feet * 12) + inches ) ;
}

double Distance::distanceInFeet() const{
    return ( feet + (inches / 12)) ;
}

double Distance::distanceInMeters() const{
    return ( (feet * 12 + inches) * 0.0254) ;
}

Distance Distance::operator+(const Distance &rhs) const{
    Distance dist ;
    dist.feet = this->feet + rhs.feet ;
    dist.inches = this->inches + rhs.inches ;
    return dist ;
}

Distance Distance::operator-(const Distance &rhs) const{
    Distance dist ;
    dist.feet = this->feet - rhs.feet ;
    dist.inches = this->inches - rhs.inches;
    return dist ;
}

ostream & operator<<(ostream &out, const Distance &rhs){
    out << rhs.feet << "' "<< rhs.inches << "\"" ;
    return out ;
}

void Distance::init(){
    int ft = feet ;
    double in = abs(inches) ;

    if( inches < 0) {
        inches *= -1 ;
    } 

    if ( in >= 12 ){
        feet = ft + (in / 12.0) ;
        inches = in - ((feet - ft) * 12) ;
    }
}