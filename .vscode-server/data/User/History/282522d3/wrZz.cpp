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
   for (auto i = head, i != nullptr; i = - -> next){
      if (i -> next == tail) {
         i -> next == head ;
      }
   }  
   tail -> next = head -> next ;
   head -> next = nullptr ;
   tail = head ;

   for (auto i = head, i != nullptr; i = - -> next){
      if (i -> next == nullptr) {
         tail = i ;
      }
   }  
}
