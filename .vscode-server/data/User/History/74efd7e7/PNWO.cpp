#include <iostream>
using namespace std;

#include "IntList.h"

IntList::IntList() : head(nullptr), tail(nullptr) {}

IntList::~IntList() {
    while (head!=nullptr) {
        IntNode* temp = head;
        head = head->next;
        delete temp;
        temp = nullptr ;
    }
    delete head;
    head = tail = nullptr;
}

IntList::IntList(const IntList &cpy) {
    IntNode *temp = cpy.head;

    if(temp==nullptr) {
        cout<<"empty list"<<endl;
        head = nullptr;
        tail = nullptr;
        delete temp;
        temp = nullptr;
    }
    else {
        head = nullptr;
        tail = nullptr;
        while(temp != nullptr) {
            int value = temp->value;
            cout<<"value = "<<value<<endl;
            IntNode *node = new IntNode(value); //value is now stored in node
            if(head==nullptr) {
                head = node;
                tail = node;
                node->next = nullptr;
                temp = temp->next;
                cout<<"added to empty" << endl;
            }
            else {
                tail->next = node;
                tail = node;
                node->next = nullptr;
                temp = temp->next;
                cout<<"added to tail" << endl;
            }
        }
    }
}

IntList &IntList::operator=(const IntList &rhs) {
    if (this != &rhs) {
        clear();
        IntNode *temp = rhs.head;
        while (temp!= nullptr) {
            push_back(temp->value);
            temp = temp->next;
        }
    }
    return *this;
}

void IntList::selection_sort() {
    if (head != nullptr) {
        for(auto i=head;i!=nullptr;i=i->next) {
            for(auto j=i->next;j!=nullptr;j=j->next) {
                if(j->value<i->value) {
                    int temp = i->value;
                    i->value = j->value;
                    j->value = temp;
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

void IntList::clear() {
    while (head!= nullptr) {
        IntNode* temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
    }
    head = tail = nullptr;
}

void IntList::push_back(int value) {
    IntNode *temp = new IntNode(value);
    if(head==nullptr) {
        head = temp;
        tail = temp;
        temp->next = nullptr;
    }
    else {
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
}

void IntList::push_front(int value) {
    IntNode* temp = new IntNode(value);
    if (head == nullptr) {
        head = temp;
        tail = temp;
        temp->next = nullptr;
    }
    else {
        temp->next = head;
        head = temp;
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
    return head == nullptr;
}

const int &IntList::front() const {
    if(head== nullptr) {
        cout<<"List is empty"<<endl;
    }
    return head->value;
}

const int &IntList::back() const {
    if(head== nullptr) {
        cout<<"List is empty"<<endl;
    }
    return tail->value;
}

ostream &operator<<(ostream &out, const IntList &rhs) {
    for (auto i = rhs.head; i!= nullptr; i = i->next) {
        if(i->next==nullptr) {
            out<<i->value;
            return out;
        }
        out << i->value << " ";
    }
    return out;
}