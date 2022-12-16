#include <iostream>
#include <string>

using namespace std;

void flipString(string &s){
    if ( sentence.size() <= 1 ){
      return ;
    }

    // Extract the sentence leaving starting and
    //ending character.
    string r = sentence.substr( 1, sentence.size() - 2 );
  
     //Call the function recursively.  
     flipString( r );

    // Reform the string.
    sentence = sentence.substr( sentence.size() - 1 ) 
                + r + sentence[0];
}

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



