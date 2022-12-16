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
   IntNode* temp = head ;
   if exists(temp -> next, num) {
      return true ;
   }
   return false ;
}

bool IntList::exists(IntNode* temp, int num) const{
   if (temp == nullptr) {return false}
   if (temp -> value == num) {return true}
   return exists(temp -> next, num)
}

