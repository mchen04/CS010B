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
   if (head == nullptr || head -> next == nullptr){
      return ;
   }

   else {
      for (auto i = head -> next ; i != head; i = i -> next){
         if (i -> next -> next == nullptr) {
            i -> next -> next = head ;
            head = i -> next ;
            i -> next = head -> next ;
            head -> next = head -> next -> next ;
         }
      }  

      for (auto i = head; i != nullptr; i = i -> next){
         if (i -> next == head -> next) {
            i -> next = nullptr ;
         }
      }  
      return ;
   }
}
