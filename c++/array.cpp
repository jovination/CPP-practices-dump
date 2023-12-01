//question: 01
#include <iostream>
using namespace std;

int main(){
    double sum,avg;

    int myValue[4] = { 10, 12, 4, 16};
    for(int i = 0; i <= 3; i++){
        sum += myValue[i];
    }
     avg = sum/4;

    cout << "The average of given Array: " << avg << "\n"; 

    // output:The average of given Array: 10.5  
}