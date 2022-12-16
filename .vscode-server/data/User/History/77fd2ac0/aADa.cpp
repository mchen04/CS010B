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

//Implement the flipString function here
void flipString(string &s) {
   len = s.size() ;
    if ( len <= 1 || !s )
    {
        return;
    }
    swap(s[0], s[len-1]);
    s++; 
    flipString(s.substr(1, len - 2)); 
}


