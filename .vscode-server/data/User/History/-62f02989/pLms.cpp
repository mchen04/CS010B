#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readData(const string &, vector<double> &, vector<double> &);
double interpolation(double, const vector<double> &, const vector<double> &);
bool isOrdered(const vector<double> &);
void reorder(vector<double> &, vector<double> &);
bool inRange(double, const vector<double> &) ;

int main(int argc, char *argv[]) {

    string inputFile;
    string outputFile;
   
    inputFile = argv[1];

    vector<double> flight_angle, lift_coefficient ;
    double user_flight_angle ;
    string user_input ;

    readData(inputFile, flight_angle, lift_coefficient) ;
    reorder(flight_angle, lift_coefficient);

    cout << "What is your flight angle path?" << endl ;
    cin >> user_flight_angle ;

    if (inRange (user_flight_angle, flight_angle)) {
        interpolation(user_flight_angle, flight_angle, lift_coefficient);
    }
    else {
    cout << "You are out of range." << endl ;
    }

    cout << "Do you ewant to enter another flight path angle?" << endl ;
    cin >> user_input ;

    if (user_input == "Yes"){
        cout << "What is your flight angle path?" << endl ;
        cin >> user_flight_angle ;
        if (inRange (user_flight_angle, flight_angle)) {

            interpolation(user_flight_angle, flight_angle, lift_coefficient) ;

        }
        else {

        cout << "You are out of range." << endl ;

        }
    }

    if (user_input == "No"){
        exit(1) ;
    }


}

void readData(const string &filename, vector<double> &flight_path_angle, vector<double> &lift_coefficient){
    ifstream inFS;
    inFS.open(filename) ;

    vector<double> flight_angle, lift_coefficient ;
    double num ;

    if (!inFS.is_open()){
      cout << "Error opening " << filename << endl ;
      exit(1) ;
    }

    while (inFS >> num){
      flight_angle.push_back(num) ;
      lift_coefficient.push_back(num) ;
   }

}

double interpolation(double req_angle, const vector<double> &angle, const vector<double> &lift){
    int index ;
    double interpol_value ;
    for (unsigned int i = 0; i < angle.size(); i++ ){
        if (req_angle == angle.at(1)){
            return lift.at(i) ;
        }
        if (req_angle < angle.at(1)){
            index = i - 1 ;
        }
    }
    interpol_value = lift.at(index - 1) + ((req_angle - angle.at(index - 1))/(angle.at(index) - angle.at(index - 1 ))) * (lift.at(index) - lift.at(index - 1 )) ;
    return interpol_value ;
}

bool isOrdered(const vector<double> &sortVector){
    for (unsigned int i = 0; i < sortVector.size(); i++){
        if (sortVector.at(i) > sortVector.at(i + 1)){
            return false ;
        }   
    }
    return true ;
}

void reorder(vector<double> &flight_path_angle, vector<double> &lift_coefficient){
    int num ;
    for (unsigned int i = 0; i < flight_path_angle.size(); i++){
        for (num = i + 1; num < flight_path_angle.size(); num++){
            swap(flight_path_angle.at(i), flight_path_angle.at(num)) ;
            swap(lift_coefficient.at(i), lift_coefficient.at(num)) ;
        }
    }
}

bool inRange(double user_input, const vector<double> &flight_angle) {
    if (user_input >= flight_angle.at(0) && user_input <= flight_angle.at(flight_angle.size() - 1)){
        return true ;
    }
    return false ;
}
