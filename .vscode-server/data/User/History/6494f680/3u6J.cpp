#include <iostream>
using namespace std;

#include "IntList.h"
#include "SortedSet.h"

int main() {

  //tests constructor, destructor, push_front, pop_front, display

   {
      cout << "\nlist1 constructor called" << endl;
      SortedSet set1;
      cout << set1.in(5)  << endl ;
      set1.add(54) ;
      set1.push_front(10) ;
      set1.push_back (12) ;
      set1.insert_ordered(65) ;
      

/*         SortedSet();
        SortedSet(const SortedSet& );
        SortedSet(const IntList& );
        ~SortedSet();

        bool in(int data);
        const SortedSet operator|(const SortedSet&);
        const SortedSet operator&(const SortedSet&);

        void add(int data);
        void push_front(int data);
        void push_back(int data);
        void insert_ordered(int data);
        SortedSet operator|=(const SortedSet&);
        SortedSet operator&=(const SortedSet&);
        */

   }
}
