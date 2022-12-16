#ifndef INT_VECTOR
#define INT_VECTOR

#include <iostream>

using namespace std;

class Time {
 private:
   unsigned _size ;
   unsigned _capacity ;
   int *data ;
 public:
    IntVector(unsigned capacity = 0, int value = 0)
    ~IntVector()
    unsigned size() const
    unsigned capacity() const
    bool empty() const
    const int & at(unsigned index) const
    const int & front() const
    const int & back() const
};

#endif //INT_VECTOR
