#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    capacity = capacity ;
    cout << "size" << _size << endl;

    if (_capacity != 0) {
        data = new int[_size] {value};
    }
}
IntVector::~IntVector(){
    delete [] data ;
}
