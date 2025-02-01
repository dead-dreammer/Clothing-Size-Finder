#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

    // Function to convert height from meters to feet
    double metre_to_feet(double height){
        const double metre = 3.26084;
        return height * metre;
    }

    // Function to convert weight from kilograms to pounds
    double kilogram_to_pounds(double weight){
        const double kilogram = 2.20462;
        return weight * kilogram;
    }

    // Function to determine jacket size based on height and weight
    string jacket_size(double height, int weight){
        
        if (height > 6.5 || (86 <= weight && weight <= 95)){
            return "Extra Large 2";
        }
        else if ((6.3 <= height && height <= 6.5) ||  (75 <= weight && weight <= 85)){
            return "Extra Large";
        }
        else if ((5.9 <= height && height <= 6.2) ||  (65 <= weight && weight <= 75)){
            return "Large";
        }
        else if ((5.7 <= height && height <= 5.8) ||  (56 <= weight && weight <= 65)){
            return "Medium";
        }
        else if ((5.2 <= height && height <= 5.6) || (50 <= weight && weight <= 55)){
            return "Small";
        }
        else{
            return "Size not available";
        }  
    }

int main(){
    double height;
    cout << "Enter height in meters(m): ";
    cin >> height;

    double weight;
    cout << "Enter weight in kilograms(kg): ";
    cin >> weight;

    // Convert height from meters to feet
    double feet = metre_to_feet(height);

    // Convert weight from kilograms to pounds
    double pounds = kilogram_to_pounds(weight);

    // Display the results
    cout << setprecision(2) << fixed << endl;
    cout << "The height in feet is: " << feet << " feet" << endl;
    cout << "The weight in pounds is: " << pounds << " lbs" << endl;

    // Determine jacket size based on converted height and weight
    string jacketSize = jacket_size(feet, pounds);

    // Display jacket size
    cout << "Your jacket size is: " << jacketSize << endl;

    return 0;
}