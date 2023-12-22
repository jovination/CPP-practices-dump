#include<iostream>
using namespace std;


 void Year(double year);

 int main(){
    double year;
    cout << "Enter the year: ";
    cin >> year;

    Year(year);

    return 0;

 }

  void Year(double year){

    if(year > 999 and year < 10000){

     if(static_cast<int>(year) % 4 == 0){
         cout<<"This is a leap year";
     }
     else{
         cout<<"This is not a leap year";
     }
}

  else{
cout << "Invalid input";
    }
}
