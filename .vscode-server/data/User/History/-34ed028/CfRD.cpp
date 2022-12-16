#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
   
   string inputFile;
   string outputFile;

   vector<int> numVector ;
   int nums ;
   double total_sum = 0 ;
   
   // Assign to inputFile value of 2nd command line argument
   // Assign to outputFile value of 3rd command line argument
   inputFile = argv[1];
   outputFile  = argv[2];
   
   // Create input stream and open input csv file.
   ifstream inFS;
   inFS.open(inputFile) ;
   
   // Verify file opened correctly.
   // Output error message and return 1 if file stream did not open correctly.
   if (!inFS.is_open()){
      cout << "Error opening " << inputFile << endl ;
      return 1 ;  
   }
   
   // Read in integers from input file to vector.
   while (inFS >> nums){
      numVector.push_back(nums) ;
      total_sum += nums ;
   }   
   
   // Close input stream.
   inFS.close() ;
   
   // Get integer average of all values read in.
   double average = total_sum / numVector.size() ;
   
   // Convert each value within vector to be the difference between the original value and the average.
   for (unsigned int i = 0; i < numVector.size(); i++ ){
      numVector.at(i) -= average ;
   }
   // Create output stream and open/create output csv file.
   ofstream outFS("dataOut.csv");

   // Verify file opened or was created correctly.
   // Output error message and return 1 if file stream did not open correctly.
   if (!outFS.is_open()){
      cout << "Error opening " << inputFile << endl ;
      return 1 ;  
   }
   // Write converted values into ouptut csv file, each integer separated by a comma.
   for (unsigned int i = 0; i < numVector.size(); i++ ){
      outFS << numVector.at(i) << "," ;
   }
   
   // Close output stream.
   outFS.close() ;
   
   return 0;
}