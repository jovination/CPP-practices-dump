#include <iostream>

int main() {

// Add your code below  

double wom; 

// weight on mars

double  woe; 

// weight on earth

std:: cout << "Enter Weight of an items:  ";
std::cin >> woe;

wom = (woe / 9.8) * 3.7;
 std:: cout <<"The weight on Mars is: " << wom << "N.\n";

 return 0;
}