//temperature conversion program
#include <iostream>
using namespace std;

int main () {
    double temp;
    char unit;

    
    cout << "Enter the temperature and unit (F or C): ";
    cin >> unit;

    if(unit == 'F' || unit == 'f') {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        cout << "The temperature in Celsius is: " << (temp - 32) * 5/9 << "C\n";
    }
    
    else if(unit == 'C' || unit == 'c') {
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        cout << "The temperature in Fahrenheit is: " << (temp * 9/5) + 32 << "F\n";
    } 
    
    else {
        cout << "Invalid unit entered. Please try again." << endl;
    }
}