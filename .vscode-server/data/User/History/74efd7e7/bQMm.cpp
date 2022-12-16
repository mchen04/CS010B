#include "IntList.h"

#include <iostream>
using namespace std;

IntList::IntList() : head(nullptr), tail(nullptr){}

IntList::~IntList(){
    while (head != nullptr){
        IntNode* temp = head ;
        temp = head -> next ;
        delete temp ;
        temp = nullptr ;
    }
    delete head ;
    head = tail = nullptr ;
}

void IntList::push_front(int data){
    IntNode* addNode = new IntNode(data);

    if (empty()){
        head = tail = addNode ;
        addNode -> next = nullptr ;
    }

    else {
        addNode -> next = head ;
        head = addNode ;
    }
}

void IntList::pop_front(){
    if (!empty()){
        if (head -> next == nullptr){
            clear();
            return ;
        }

        else {
            IntNode* tempNode = head ;
            head = head -> next ;
            delete tempNode ;
            tempNode = nullptr ;
        }
    }
    else {
        clear() ;
    }
}

bool IntList::empty() const {
    return head == nullptr ;
}

const int & IntList::front() const{
    return head -> value;
}

const int & IntList::back() const{
    return tail -> value ;
}

ostream &operator<<(ostream &o, const IntList &oIntList) {
    for (auto i = oIntList.head; i != nullptr; i = i -> next) {
        if (i->next == nullptr) {
            o << i-> value;
            return o;
        }
        o << i -> value << " ";
    }
    return o;
}

IntList::IntList(const IntList &cpy){        
    IntNode* cpyNode = cpy.head;  

    if(cpyNode == nullptr) {
        head = tail = nullptr;
        delete cpyNode;
        cpyNode = nullptr;
    }
    else{
        head = tail = nullptr ;
        while (cpyNode != nullptr){
            int num = cpyNode -> value ;
            IntNode* newNode = new IntNode(num) ;
            if (head == nullptr){
                head = tail = newNode ;
                newNode -> next = nullptr ;
                cpyNode = cpyNode -> next ;
            }
            else{
                tail -> next = newNode ;
                tail = newNode ;
                newNode -> next = nullptr ;
                cpyNode = cpyNode -> next ;
            }   
        }  
    }
}

IntList & IntList::operator=(const IntList &rhs){
    if(this != &rhs){ 
        clear() ;
        IntNode *traverse = rhs.head;

        while (traverse != nullptr)
        {
            push_back(traverse -> value);
            traverse = traverse -> next;
        }  
    }      
    return *this;
}

void IntList::push_back(int value){
    IntNode* newTail = new IntNode(value);

    if (head == nullptr)
    {
        head = tail = newTail;
        newTail -> next = nullptr;
    }
    else
    {
        tail->next = newTail;
        tail = newTail;
        newTail -> next = nullptr ;
    }
}

void IntList::clear(){
    while (head != nullptr){
        IntNode* tempVal = head ;
        head = head -> next ;
        delete tempVal ;
        tempVal = nullptr ;
    }
    head = tail = nullptr ;
}

void IntList::selection_sort() {
    if (head  != nullptr) {
        for(auto i = head ; i != nullptr ; i = i->next ) {
            for(auto j = i -> next ; j != nullptr; j = j -> next) {
                if(j -> value < i -> value) {
                    int holderVar = i->value;
                    i->value = j->value;
                    j->value = holderVar;
                }
            }
        }
    }
}

void IntList::insert_ordered(int value){
    IntNode* addNode = new IntNode(value) ;

    if (head == nullptr){
        push_back(value) ;
        delete addNode ;
        addNode = nullptr ;
    }
    else if(addNode -> value < head -> value) {
        push_front(value);
        delete addNode;
        addNode = nullptr;
    }
    else if(addNode -> value > tail -> value) {
        push_back(value);
        delete addNode;
        addNode = nullptr;
    }
    else {
        IntNode* currNode = head;
        while(currNode -> next != nullptr && currNode -> next -> value < currNode -> value) {
            currNode = currNode -> next;
        }
        addNode -> next = currNode -> next;
        currNode -> next = addNode;
    }
}

void IntList::remove_duplicates(){
    if (head == nullptr){
        return ;
    }

    IntNode* currNode = head ;
    IntNode* nextCurrNode = nullptr ;

    while (currNode != nullptr && currNode -> next != nullptr){
        nextCurrNode = currNode ;

        while (nextCurrNode -> next != nullptr) {
            if( currNode -> value == nextCurrNode -> next -> value) {
                nextCurrNode -> next = nextCurrNode -> next -> next;
            }
            else{
                nextCurrNode = nextCurrNode -> next ;
            }
            if (nextCurrNode -> next == nullptr){
                tail = nextCurrNode ;
                nextCurrNode -> next = nullptr ;
            }
        }
        currNode = currNode -> next ;
    }
}


