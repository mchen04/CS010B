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

void IntList::push_front(int data){
    IntNode *addNode();
    addNode -> value = data ;

    addNode -> next = head ;
    head = addNode ;
}

void IntList::pop_front(){
    IntNode *tempNode = head -> next ;

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
    return head-> next -> value;
}

const int & IntList::back() const{
    IntNode *currVal = head ;

    while (currVal-> next != nullptr){
        currVal = currVal -> next ;
    }
    return currVal -> value;
}

ostream & operator<<(ostream& o, const IntList& oIntList){
    IntNode *currVal = oIntList.head ;

    while (currVal != nullptr) {
        o << currVal -> value << " " ;
        currVal = currVal -> next ;
    }
}

