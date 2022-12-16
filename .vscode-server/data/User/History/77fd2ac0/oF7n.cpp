#include <iostream>
#include <string>

using namespace std;


void flipString(string &s);

int main() {
   string line;
   cout << "Enter a sentence:" << endl;
   getline(cin, line);
   cout << endl;
   cout << line << endl;
   flipString(line);
   cout << line << endl;

   return 0;
}

void flipString(string &s){
   int len = s.size() ;
   if ( len <= 1 )
   {
      return;
   }
   swap(s[0], s[len-1]);
   flipString(s.substr(1, len - 2)); 
}


