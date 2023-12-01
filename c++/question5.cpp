//Question 5
#include <iostream>
using namespace std;

int main () {
    
        int x;
        int y;
        int z;
    
        x = 11;
        y = 34;
        
        // this is conditional statement to produce positive value

        if (x > y) {
            z = x - y;
        } else {
            z = y - x;
        }
         
        cout << "The value of z is equal: " << z << "\n";

        return 0;

        // output: The value of z is equal: 23
}