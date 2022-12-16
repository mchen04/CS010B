#include "IntList.h"

#include <ostream>

using namespace std;

IntList::IntList() : head(nullptr) {}

void IntList::push_front(int val) {
   if (!head) {
      head = new IntNode(val);
   } else {
      IntNode *temp = new IntNode(val);
      temp->next = head;
      head = temp;
   }
}

   /* Outputs to a single line all of the int values stored in the list, each separated by a space. 
      This function does NOT output a newline or space at the end.
   */
ostream & operator<<(ostream & out, const IntList & rhs){
   if (rhs.head == nullptr){
      return out ;
   }
   out << rhs.head -> value ;
   if (rhs.head -> next != nullptr){
      out << " " ;
      rhs.head = rhs.head -> next ;
   }
   operator<<(out, rhs) ;
   return out ; 
}

   /* Returns true if the integer passed in is contained within the IntList.
      Otherwise returns false.
   */
bool IntList::exists(int num) const{
   if (head == nullptr){
      return false ;
   }
   if (head -> value == num) {
      return true ;
   }
   return exists(head -> next, num) ;
}

