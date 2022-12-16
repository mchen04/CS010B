#include "IntList.h"

#include <iostream>
using namespace std;

IntList::IntList() {
}

IntList::~IntList(){

    IntNode *currNode = head ;
    IntNode *nextNode = nullptr ;

    while (currNode != nullptr){
        nextNode = currNode -> next;
        delete currNode;
        currNode = nullptr ;
        currNode = nextNode ;
    }
}

void IntList::push_front(int data){
    IntNode* addNode = new IntNode(data);

    addNode -> next = head ;
    head = addNode ;
}

void IntList::pop_front(){
    if (head -> next == nullptr){
        IntNode* tempNode = head -> next;
        head = nullptr ;
        tail = nullptr ;
        delete tempNode ;
        tempNode = nullptr; 
    }

    else {
        IntNode* tempNode = head ;
        head = head -> next ;
        delete tempNode ;
        tempNpde = nullptr ;
    }
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
    return head -> value;
}

const int & IntList::back() const{
    IntNode *currNode = head ;

    while (currNode -> next != nullptr){
        currNode = currNode -> next ;
    }

    return currNode -> value;
}

ostream & operator<<(ostream& o, const IntList& oIntList){
    IntNode *currNode = oIntList.head ;

    if (currNode == nullptr){
        return o ;
    }
    else {
        while (currNode != nullptr) {
            o << currNode -> value ;

            if (currNode -> next != nullptr){
                o << " " ;
            }

            currNode = currNode -> next ;
        }
    }
    return o ;
}

IntList::IntList(const IntList &cpy){
    this->head = 0;              
    IntNode* cpyNode = cpy.head;  
    while (cpyNode != 0)
    {
        this->push_back(cpyNode->value);
        cpyNode = cpyNode->next;
    }
}

IntList & IntList::operator=(const IntList &rhs){
    if(this == &rhs){ 
        return *this ; 
    }

    while (!empty()){
        clear() ;
    }
    IntNode *traverse = rhs.head;

    while (traverse != nullptr)
    {
        this-> push_back(traverse -> value);
        traverse = traverse -> next;
    }        
    return *this;
}

void IntList::push_back(int value){
    IntNode* newTail = new IntNode(value);

    if (head == nullptr)
    {
        head = tail = newTail;
    }
    else
    {
        tail->next = newTail;
        tail = newTail;
    }
}

void IntList::clear(){
    IntNode* currNode = head ;

    while (currNode != nullptr){
        IntNode* tempVal = currNode ;
        currNode = currNode -> next ;
        delete tempVal ;
        tempVal = nullptr ;
    }
    delete currNode ;
    currNode = nullptr ;

    head = nullptr ;
    tail = nullptr ;
}

void IntList::selection_sort(){
    IntNode* currNode = head ;

    while (currNode != nullptr){
        IntNode* min = currNode ;
        IntNode* nextCurrNode = currNode -> next ;

        while (nextCurrNode) {
            if( min -> value > nextCurrNode -> value) {
                min = nextCurrNode ;
            }
            nextCurrNode = nextCurrNode -> next ;
        }
        int holderVar = currNode -> value ;
        currNode -> value = min -> value ;
        min -> value = holderVar ;
        currNode = currNode -> next ;
    }
}

void IntList::insert_ordered(int value){
    IntNode* currNode = head ;
    IntNode* addNode = new IntNode(value) ;

    if (currNode == nullptr || currNode -> value >= addNode -> value){
        addNode -> next = head ;
        head = addNode ;
        return ; 
    }

    else {
        while (currNode -> next != nullptr && currNode -> next -> value < addNode -> value){
            currNode = currNode -> next ;
        }
        addNode -> next = currNode -> next ;
        currNode -> next = addNode ;
    }
}

void IntList::remove_duplicates(){
    IntNode* currNode = head ;
    IntNode* nextCurrNode = nullptr ;
    IntNode* removeNode = nullptr ;

    while (currNode != nullptr && currNode -> next != nullptr){
        nextCurrNode = currNode ;

        while (nextCurrNode -> next != nullptr) {
            if( currNode -> value == nextCurrNode -> next -> value) {
                removeNode = nextCurrNode -> next ; 
                nextCurrNode -> next = nextCurrNode -> next -> next ;
                delete removeNode ;
                removeNode = nullptr ;
            }
            else {
                nextCurrNode = nextCurrNode -> next ;
            }
        }
        currNode = currNode -> next ;
    }
}


