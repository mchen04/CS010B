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

IntList::push_front(int num){
    IntNode addNode = new IntNode;

    IntNode->value = num ; 

    addNode -> next = head -> next ;
    head-> next = addNode ;
}

IntList::pop_front(){
    IntNode tempNode = head -> next ;

    head -> next = head -> next -> next ;
    delete tempNode ;
}


