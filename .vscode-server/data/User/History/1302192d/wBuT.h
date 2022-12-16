#ifndef INTLIST_H
#define INTLIST_H

#include <ostream>
#include "IntList.h"

using namespace std;

class SortedSet : public IntList { 
    public:
        SortedSet() ;
        SortedSet(const SortedSet &) ;
        SortedSet(const IntList &) ;
        ~SortedSet() ;
        
    private:
      
};

#endif