#include <iostream>
#include <cmath> // Include this line for the pow function

// Define tenth_power() here: This function returns the tenth power of the input number.
int tenth_power(int num) {
    return std::pow(num, 10);
}

int main() {
    // Define test case inputs
    const int testNum1 = 0;
    const int testNum2 = 1;
    const int testNum3 = 2;

    // Call tenth_power() with the test case inputs
    std::cout << tenth_power(testNum1) << "\n";
    std::cout << tenth_power(testNum2) << "\n";
    std::cout << tenth_power(testNum3) << "\n";

    return 0;
}