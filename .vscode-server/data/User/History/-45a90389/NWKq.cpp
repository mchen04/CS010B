#include "IntList.h"

IntList::IntList() {
    head = nullptr ;
}

IntList::~IntList(){
    cout << "Destructor Called." << endl ;

    IntNode currVal = head ;

    while (currVal != nullptr){
        IntNode deleteNode = currVal ;
        currVal = currVal -> next ;
        delete deleteNode ;
    }
}


