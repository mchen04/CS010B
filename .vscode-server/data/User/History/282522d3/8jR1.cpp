#include "IntList.h"

/* Initializes an empty list.
*/
IntList::IntList() : head(nullptr) {}

/* Inserts a data value to the front of the list.
*/
void IntList::push_front(int val) {
   if (!head) {
      head = new IntNode(val);
   } 
   else {
      IntNode *temp = new IntNode(val);
      temp->next = head;
      head = temp;
   }
}

void IntList::swapHeadAndTail() {
   for (auto i = head; i != nullptr; i = i -> next){
      if (i -> next -> next == nullptr) {
         i -> next -> next = head -> next ;
         i -> next = head ;
         head -> next = nullptr ;
      }
   }  
}
