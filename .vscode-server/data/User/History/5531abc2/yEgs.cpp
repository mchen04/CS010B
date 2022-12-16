#include <iostream>
#include "IntVector.h"

using namespace std ;

int main() {
   
   
   IntVector Vect1(5, 6) ;
   cout << "Making Vector with capacity 5 and value 6." << endl ;
   cout << "Size Function: " << Vect1.size() << endl ;
   cout << "Capacity Function: " << Vect1.capacity() << endl ;
   cout << "Empty Function (0 = false, 1 = true): " << Vect1.empty() << endl ;
   cout << "Vector Values: " ;
   Vect1.print() ;
   cout << endl ;

   cout << "Finding Value at index 1: " << Vect1.at(1) << endl ;
   cout << "Finding Value at front: " << Vect1.front() << endl ;
   cout << "Finding Value at back: " << Vect1.back() << endl ;
   cout << endl ;

   IntVector Vect1() ;
   cout << "Making Vector with deafult value." << endl ;
   cout << "Size Function: " << Vect1.size() << endl ;
   cout << "Capacity Function: " << Vect1.capacity() << endl ;
   cout << "Empty Function (0 = false, 1 = true): " << Vect1.empty() << endl ;
   cout << "Vector Values: " ;
   Vect1.print() ;
   cout << endl ;

   Vect1.~IntVector() ;
   cout << "Size Function: " << Vect1.size() << endl ;
   cout << "Capacity Function: " << Vect1.capacity() << endl ;
   cout << "Empty Function (0 = false, 1 = true): " << Vect1.empty() << endl ;
   cout << "Vector Values: " ;
   Vect1.print() ;
   cout << endl ;

   IntVector Vect2(10, 9) ;
   cout << "Trying to use .at() outside of range" << endl ;
   Vect2.at(11) ;
   

   
   return 0;
}
