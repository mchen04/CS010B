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
        in(int value) ;
        operator| ;
        operator& ;
        add(int value) ;
        push_front(int value) ;
        push_back(int value) ;
        insert_ordered(int value) ;
        operator|=: ;
        operator&=: ;
    private:
      
};

#endif