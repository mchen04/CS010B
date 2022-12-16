#include "IntList.h"

#include <iostream>
using namespace std;

IntList::IntList() : head(nullptr), tail(nullptr) {}

IntList::~IntList(){

    if (head == nullptr){
        return ;
    }

    IntNode *nextNode ;

    while (head != nullptr){
        nextNode = head;
        head = head -> next ;
        delete nextNode;
    }
    delete head ;
    head = tail = nullptr ;
}

void IntList::push_front(int data){
    IntNode* addNode = new IntNode(data);

    if (empty()){
        head = addNode ;
    }

    else {
        addNode -> next = head ;
        head = addNode ;
    }
}

void IntList::pop_front() {
    if (head == nullptr) {
        delete head;
        head = tail = nullptr;
        return;
    }
    IntNode *temp = head;
    head = head->next;
    delete temp;
    temp = nullptr;
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

IntList::IntList(const IntList &cpy) {
    IntNode *temp = cpy.head;

    if(temp==nullptr) {
        head = tail = nullptr ;
        delete temp;
        temp = nullptr;
    }
    else {
        head = tail = nullptr ;
        while(temp != nullptr) {
            int value = temp->value;
            IntNode *node = new IntNode(value);
            if(head==nullptr) {
                head = tail = node ;
                node->next = nullptr;
                temp = temp->next;
            }
            else {
                tail->next = node;
                tail = node;
                node->next = nullptr;
                temp = temp->next;
            }
        }
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

    if (empty())
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

    head = nullptr ;
    tail = nullptr ;
}

void IntList::selection_sort() {
    if (head != nullptr) {
        for(auto i=head; i != nullptr; i = i -> next) {
            for(auto j = i -> next; j != nullptr; j = j -> next) {
                if(j -> value < i -> value) {
                    int temp = i -> value;
                    i -> value = j -> value;
                    j -> value = temp;
                }
            }
        }
    }
}

void IntList::insert_ordered(int value) {
    IntNode *temp = new IntNode(value);
    if (head == nullptr) {
        push_back(value);
        delete temp;
        temp = nullptr;
    } 
    else if(temp->value<head->value) {
        push_front(value);
        delete temp;
        temp = nullptr;
    }
    else if(temp->value>tail->value) {
        push_back(value);
        delete temp;
        temp = nullptr;
    }
    else {
        auto curr = head;
        while(curr->next!=nullptr && curr->next->value < temp->value) {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void IntList::remove_duplicates() {
    if (head == nullptr) {
        return;
    }
    IntNode *curr = head;
    IntNode *temp = nullptr;
    while (curr!= nullptr && curr->next!=nullptr) {
        temp = curr;
        while(temp->next!=nullptr) {
            if(curr->value == temp->next->value) {
                temp->next = temp->next->next;
            }    
            else {
                temp = temp->next;
            }
            if(temp->next == nullptr) {
                tail = temp;
                temp->next = nullptr;
            }
        }
        curr = curr->next;
    }
}