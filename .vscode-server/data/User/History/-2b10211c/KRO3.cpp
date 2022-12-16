#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function

using namespace std;

// Place fileSum prototype (declaration) here
int fileSum(string filename) ;

int main() {

   string filename;
   int sum = 0;
   
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   
   sum = fileSum(filename);

   cout << "Sum: " << sum << endl;
   
   return 0;
}

int fileSum(string filename){
   int data ;
   int total_sum = 0 ;
   ifstream num(filename) ;
   
   num.open(filename) ;

   if (!num.is_open()){
      cout << "Error opening " << filename << endl ;
      exit (1) ;  
   }

   else{
      while (num >> data){
         total_sum += data ;
      }   
   }

   num.close() ;
   return total_sum ;

}

// Place fileSum implementation here