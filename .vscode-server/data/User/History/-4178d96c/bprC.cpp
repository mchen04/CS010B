#include "IntVector.h"

#include <stdexcept>
#include <iomanip> 

IntVector::IntVector(unsigned capacity, int value){
    _size = capacity ;
    _capacity = capacity ;

    _data = new int[_size] ;
        
    for (unsigned i = 0; i < _size; i++) {
        _data[i] = value ;
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

const int & IntVector::at(unsigned index) const {
    if (index >= _size){
        throw out_of_range("IntVector::at_range_check");
    } 
    return _data[index] ;
}

const int & IntVector::front() const {
    return _data[0] ;
}

const int & IntVector::back() const {
    return _data[_size - 1] ;
}

void IntVector::print() {
    for (unsigned i = 0; i < _size; i++) {
        cout << _data[i] << " ";
    }
    cout << endl;
}

void IntVector::expand() {
    if ( _capacity == 0){
        _capacity = 1 ;
    }
    else{
        _capacity *= 2 ;
    }
    int *_newarr = new int [_capacity] ;
    for (unsigned i = 0; i < _size; i ++) {
        _newarr[i] = _data[i] ;
    }
    delete _data ;
    _data = _newarr ;
}

void IntVector::expand(unsigned amount) {
    _capacity += amount ;
    int *_newarr = new int [_capacity] ;
    for (unsigned i = 0; i < _size; i ++) {
        _newarr[i] = _data[i] ;
    }
    delete _data ;
    _data = _newarr ;
}

void IntVector::insert(unsigned index, int value) {
    if (_size > _capacity) {
        expand() ;
    }
    _size++ ;
    if (index > _size){
        throw out_of_range("IntVector::at_range_check") ;
    }
    else{
        for (unsigned i = _size; i < value; i--){
            _data[i + 1] = _data[i] ; 
        }
        _data[index] = value ; 
    }
}

void IntVector::erase(unsigned index) {
    for (unsigned i = index; i < _size; i++){
        _data[i] = _data[i + 1] ; 
    }
    _size-- ;
    if (index > _size){
        throw out_of_range("IntVector::at_range_check") ;
    }
}

void IntVector::push_back(int value) {
    if (_size >= _capacity) {
        expand() ;
    }
    _data[_size] = value ;
    _size++ ;
}

void IntVector::pop_back() {
    _size-- ;
}

void IntVector::clear() {
    _size = 0 ;
}

void IntVector::resize(unsigned size, int value = 0) {
    if (size < _size) {
        _size = size ;
    }
    else if (size > _size){
        for ( int i = _size; i < size; i++){
            _data[i] = value ;
        }
        _size = size ;
    }
    if (_size > _capacity)
}