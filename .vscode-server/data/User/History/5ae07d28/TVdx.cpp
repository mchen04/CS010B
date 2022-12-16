#include <iostream>
using namespace std;

#include "SortedSet.h"

SortedSet::SortedSet() : IntList() {}
SortedSet::SortedSet(const SortedSet&) : IntList(cpy) {}
SortedSet::SortedSet(const IntList&) : IntList(cpy) {
    remove_duplicates() ; 
    selection_sort() ;
}

SortedSet::~SortedSet(){
    while( head != nullptr ){
        pop_front() ;
    }
}

bool SortedSet::in(int data){   
    for (auto temp = head; temp != nullptr; temp = temp -> next){
        if (temp -> value == data){
            return true ;
        } 
    }
    return false ;
}

const SortedSet SortedSet::operator|(const SortedSet& secondSet){
    SortedSet newSet = SortedSet(secondSet) ;
    for (auto temp = newSet.head; temp != nullptr; temp = temp -> next){
        IntList::push_back(newSet -> value) ;
    }   
    remove_duplicates() ;
    selection_sort() ;
    return *this ;
}

const SortedSet SortedSet::operator&(const SortedSet& secondSet){
    SortedSet newSet = SortedSet(secondSet) ;
    for (auto temp = newSet.head; temp != nullptr; temp = temp -> next){
        IntList::push_back(newSet -> value) ;
    }
    selection_sort() ;
    return *this ;
}

void SortedSet::add(int data){
    if (!in(data)){
        insert_ordered(data) ;
    }
}

void SortedSet::push_front(int data){
    add(data) ;
}
void SortedSet::push_back(int data){
    add(data) ;
}
void SortedSet::insert_ordered(int data){
    if(!in(data)){
        IntList::insert_ordered(data) ;
    }
}

SortedSet SortedSet::operator|=(const SortedSet& secondSet){
    SortedSet newSet = *this | secondSet ;
    swap(*this, newSet) ;
    return *this ;
}

SortedSet SortedSet::operator&=(const SortedSet&){
    SortedSet newSet = *this & secondSet ;
    swap(*this, newSet) ;
    return *this ;
}


