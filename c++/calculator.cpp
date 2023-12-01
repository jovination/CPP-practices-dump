//question: 02

#include <iostream>
using namespace std;

double addition( double a,double b);
double subtraction(double a,double b);
double multiplication(double a,double b);
double division(double a,double b);


int main(){
    double a,b;  

    cout<<"Enter value a: ";
    cin >> a;

    cout << "Enter value b: ";
    cin >> b;

    cout << "addition is: "<< addition(a,b) << endl;
    cout << "subtruction is: "<< subtraction(a,b) << endl;
    cout << "multipliction is: "<< multiplication(a,b) << endl;;
    cout<<"division is: "<< division(a,b) << endl;

    return 0;
}

double addition(double a,double b){
    return(a+b);
}
double subtraction(double a,double b){
    return(a-b);
}
double multiplication(double a,double b){
    return(a*b);
}
double division(double a,double b){
    return(a/b);

}