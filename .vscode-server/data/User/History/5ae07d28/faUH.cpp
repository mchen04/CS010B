#include <iostream>
using namespace std;

#include "SortedSet.h"

SortedSet::SortedSet() : IntList() {}
SortedSet::SortedSet(const SortedSet& cpy) : IntList(cpy) {}
SortedSet::SortedSet(const IntList& cpy) : IntList(cpy) {
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
    if (secondSet.empty()){
        return *this ;
    }
    SortedSet Set = SortedSet(secondSet) ;
    SortedSet newSet ;
    for (auto temp = Set.head; temp != nullptr; temp = temp -> next){
        newSet.push_back(temp -> value) ;
    } 
    for (auto temp = *this.head; temp != nullptr; temp = temp -> next){
        newSet.push_back(temp -> value) ;
    }    
    newSet.remove_duplicates() ;
    newSet.selection_sort() ;
    return newSet ;
}

const SortedSet SortedSet::operator&(const SortedSet& secondSet){
   if (secondSet.empty()){
        return *this ;
    }
    SortedSet Set = SortedSet(secondSet) ;
    SortedSet newSet ;
    for (auto temp = Set.head; temp != nullptr; temp = temp -> next){
        newSet.push_back(temp -> value) ;
    }
    newSet.selection_sort() ;
    return newSet ;
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
   if (secondSet.empty()){
        return *this ;
    }
    SortedSet newSet = *this | secondSet ;
    swap(*this, newSet) ;
    return *this ;
}

SortedSet SortedSet::operator&=(const SortedSet& secondSet){
   if (secondSet.empty()){
        return *this ;
    }
    SortedSet newSet = *this & secondSet ;
    swap(*this, newSet) ;
    return *this ;
}


