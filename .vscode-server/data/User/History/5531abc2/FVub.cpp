#include <iostream>
#include "IntVector.h"

using namespace std ;

int main() {
   
   IntVector Vect1(5, 6) ;
   cout << "Size" << Vect1.size() << endl ;
   cout << "Capacity" << Vect1.capacity() << endl ;
   cout << "Empty" << Vect1.empty() << endl ;

   
   return 0;
}
