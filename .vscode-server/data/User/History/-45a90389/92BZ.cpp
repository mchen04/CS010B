#include "IntList.h"

#include <iostream>
using namespace std;

IntList::IntList() {
    head = nullptr ;
}

IntList::~IntList(){
    cout << "Destructor Called." << endl ;

    IntNode *currVal = head ;

    while (currVal != nullptr){
        IntNode *deleteNode = currVal ;
        currVal = currVal -> next ;
        delete deleteNode ;
    }
}

void IntList::push_front(int num){
    IntNode addNode = new IntNode;

    IntNode->value = num ; 

    addNode -> next = head -> next ;
    head-> next = addNode ;
}

void IntList::pop_front(){
    IntNode tempNode = head -> next ;

    head -> next = head -> next -> next ;
    delete tempNode ;
}

bool IntList::empty() const {
    if (head == nullptr){
        return true ;
    }
    else {
        return false ;
    }
}

const int & IntList::front() const{
    return *head-> next ;
}

const int & IntList::back() const{
    IntNode *currVal = head ;

    while (currVal-> next != nullptr){
        currVal = currVal -> next ;
    }
    return *currVal ;
}

friend ostream & operator<<(ostream &o, const IntList &oIntList){
    IntNode *currVal = head ;

    while (currVal != nullptr) {
        o << 
    }
}

