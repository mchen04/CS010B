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
   if ((null == s) || (s.length() <= 1)) {
      return;
   }
   flipString(str.substring(1)) + str.charAt(0);
}


