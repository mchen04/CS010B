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
   IntNode* temp = rhs.head ;
   out << temp ;
   return out ;
}

ostream & operator<<(ostream & out, IntNode* temp){
   if (temp == nullptr){
      return out ;
   }
   out << temp -> value ;
   if (temp -> next != nullptr){
      out << " " ;
      return out ;
   }
   operator<<(out, temp -> next) ;
}

   /* Returns true if the integer passed in is contained within the IntList.
      Otherwise returns false.
   */
bool IntList::exists(int num) const{
   IntNode* temp = head ;
   if (head == nullpr){
      return false ;
   }
   return exists(temp -> next, num) ;
}

bool IntList::exists(IntNode* temp, int num) const{
   if (temp == nullptr) {
      return false ;
   }
   if (temp -> value == num) {
      return true ;
   }
   return exists(temp -> next, num) ;
}

