#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    capacity = capacity ;

    if (_capacity != 0) {
        data = new int[_size] {value};
    }
}

IntVector::~IntVector(){
    delete [] data ;
}

unsigned IntVector::size() const {
    return _size ;
}

unsigned IntVector::capacity() const {
    return _capacity ;
}

bool IntVector::empty() const {
    if (_size == 0){
        return true ;
    }
    else{
        return false ;
    }
}

