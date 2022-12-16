#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    capacity = capacity ;

    if (_capacity != 0) {
        data = new int[_size] ;

        for (unsigned i = 0; i < _size; i++ ){
            int[i] = value ;
        }
    }
}

