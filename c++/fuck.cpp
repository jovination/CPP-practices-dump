//question 03
#include <iostream>
using namespace std;

int factorial(int a);

int main(){
    int a;
    cout<<"Enter a number: ";
    cin >> a;
    cout << "factorial of "<< a <<" is: "<< factorial(a);
    return 0;
}

int factorial(int a){
    if(a == 0||a == 1) {
        return 1;
    }
    else {
        return a *  factorial(a-1);
    }
}
