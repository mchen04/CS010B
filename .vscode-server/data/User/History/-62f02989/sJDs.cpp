#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readData(const string &, vector<double> &, vector<double> &);
double interpolation(double, const vector<double> &, const vector<double> &);
bool isOrdered(const vector<double> &);
void reorder(vector<double> &, vector<double> &);
bool inRange(double, const vector<double> &) ;

int main(int argc, char *argv[]) 
{

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

    if (inRange (user_flight_angle, flight_angle)) 
    {

        interpolation(user_flight_angle, flight_angle, lift_coefficient);

    }

    else 
    {

    cout << "You are out of range." << endl ;

    }

    cout << "Do you want to enter another flight path angle?" << endl ;
    cin >> user_input ;

    if (user_input == "Yes")
    {

        cout << "What is your flight angle path?" << endl ;
        cin >> user_flight_angle ;

        if (inRange (user_flight_angle, flight_angle)) 
        {

            interpolation(user_flight_angle, flight_angle, lift_coefficient) ;

        }
        else 
        {

        cout << "You are out of range." << endl ;

        }
    }

    if (user_input == "No")
    {

        exit(1) ;

    }


}

void readData(const string &filename, vector<double> &flight_path_angle, vector<double> &lift_coefficient)
{

    ifstream inFS;
    inFS.open(filename) ;

    double num1, num2 ;

    if (!inFS.is_open())
    {

      cout << "Error opening " << filename << endl ;
      exit(1) ;

    }

    while (inFS >> num1 >> num2)
    {

      flight_path_angle.push_back(num1) ;
      lift_coefficient.push_back(num2) ;

   }
}

double interpolation(double req_angle, const vector<double> &angle, const vector<double> &lift)
{

    int index ;
    double interpol_value ;

    for (unsigned int i = 0; i < angle.size(); i++ )
    {

        if (req_angle == angle.at(i))
        {

            return lift.at(i) ;

        }
        if (req_angle < angle.at(i))
        {

            index = i - 1 ;

        }
    }

    interpol_value = lift.at(index - 1) + ((req_angle - angle.at(index - 1))/(angle.at(index) - angle.at(index - 1 ))) * (lift.at(index) - lift.at(index - 1 )) ;
    return interpol_value ;

}

bool isOrdered(const vector<double> &sortVector)
{
    if( sortVector.size() == 0 || sortVector.size() == 1)
    {

        return true ;

    }

    for (unsigned int i = 0; i < sortVector.size() - 1 ; i++)
    {

        if (sortVector.at(i) > sortVector.at(i + 1))
        {

            return false ;

        }   
    }

    return true ;
}

void reorder(vector<double> &flight_path_angle, vector<double> &lift_coefficient){

    int minimum = flight_path_angle.at(0) ;
    
    for (unsigned int i = 0; i < flight_path_angle.size(); i++)
    {

        for (unsigned int j = 0; j < flight_path_angle.size() ; j++)
        {

            if (flight_path_angle.at(i) < minimum)
            {

                minimum = flight_path_angle.at(i) ;

            }
        }
        swap(flight_path_angle.at(i), flight_path_angle.at(j)) ;
        swap(lift_coefficient.at(i), lift_coefficient.at(j)) ;
    }
}

bool inRange(double user_input, const vector<double> &flight_angle) {

    if (user_input >= flight_angle.at(0) && user_input <= flight_angle.at(flight_angle.size() - 1))
    {

        return true ;

    }

    return false ;
}
