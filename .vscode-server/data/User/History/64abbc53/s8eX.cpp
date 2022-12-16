#include "IntVector.h"

#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    _capacity = capacity ;

    if (_capacity != 0) {
        _data = new int[_size] ;
        
        for (int i = 0; i < _size; i++) {
            _data[i] = value ;
        }
    }
}

IntVector::~IntVector(){
    cout << "Destuctor Called." << endl ;
    delete _data ;
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

void IntVector::print() {
    for (int i = 0; i < _size; i++) {
        cout << _data[i] << " ";
    }
    cout << endl;
}
