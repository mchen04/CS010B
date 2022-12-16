#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    capacity = capacity ;

    if (_capacity != 0) {
        data = new int[_size] ;
    }
}

