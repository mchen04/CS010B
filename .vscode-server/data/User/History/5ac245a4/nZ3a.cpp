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
    Distance Distance ;
    Distance.feet = this->feet + rhs.feet ;
    Distance.inches = this->inches + rhs.inches ;
    return Distance ;
}

Distance Distance::operator-(const Distance &rhs) const{
    Distance Distance ;
    Distance.feet = this->feet - rhs.feet ;
    Distance.inches = this->inches - rhs.inches;
    return Distance ;
}

ostream & operator<<(ostream &out, const Distance &rhs){
    out << rhs.feet << "' "<< rhs.inches << "''" ;
    return out ;
}

   /* Used by the 2 parameterized constructors to convert any negative values to positive and
        inches >= 12 to the appropriate number of feet and inches.
   */
void Distance::init(){
    if (inches < 0){
        inches = abs(inches);
    }

    if ( inches >= 12 ){
        feet += (inches / 12.0) ;
        inches -= ((inches / 12) * 12) ;
    }
}