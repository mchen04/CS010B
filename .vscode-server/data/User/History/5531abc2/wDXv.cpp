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
   Vect1.~IntVector() ;
   cout << "Size Function: " << Vect1.size() << endl ;
   cout << "Capacity Function: " << Vect1.capacity() << endl ;
   cout << "Empty Function (0 = false, 1 = true): " << Vect1.empty() << endl ;
   cout << "Vector Values: " ;
   
   return 0;
}
