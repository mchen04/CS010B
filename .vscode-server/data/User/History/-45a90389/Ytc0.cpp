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

IntList::push_front(int){
    IntNode addNode = new ;

    head -> next = head -> next -> next ;
    head -> next = 
}
