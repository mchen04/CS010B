#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    capacity = capacity ;

    if (_capacity != 0) {
        int *array{new int[_size]{}} ;
        data = new int[_size] ;
    }
}

