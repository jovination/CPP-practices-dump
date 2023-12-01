#include <iostream>

int main() {
  double woe;
  int wop;

  std::cout << "What Your Weight on Earth: \n";
  std::cin >> woe;

  std::cout << "Select number of planet in which you want to fight on: \n";
  std::cin >> wop;

  switch(wop){
 case 1:
    wop = woe * 0.38;
    std::cout << "Your Weight on Mercury: \n" << wop;
    break;
case 2:
    wop = woe * 0.91;
    std::cout << "Your Weight on Venus: \n" << wop;
    break;
case 3:
    wop = woe * 0.38;
    std::cout << "Your Weight on Mar: \n" << wop;
    break;
case 4:
    wop = woe * 2.34;
    std::cout << "Your Weight on Jupite: \n" << wop;
    break;
case 5:
    wop = woe * 1.06;
    std::cout << "Your Weight on Saturn: \n" << wop;
    break;
case 6:
    wop = woe * 0.92;
    std::cout << "Your Weight on Uranus: \n" << wop;
    break;
case 7:
    wop = woe * 1.19;
    std::cout << "Your Weight on Uranus: \n" << wop;
    break;
default:
    std::cout << "Your Have Entered invalid number\n";
    
return 0; 

  }
  
  
  
  
  
}