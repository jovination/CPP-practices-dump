#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
    std::vector<int> multiples;

    for (int i = 1; i <= 3; ++i) {
        multiples.push_back(num * i);
    }

    return multiples;
}

int main() {
    // Example usage:
    int number = 7;
    std::vector<int> result = first_three_multiples(number);

    std::cout << "The first three multiples of " << number << " are: \n";
    for (int multiple : result) {
        std::cout << multiple << "\n";
    }

    std::cout << std::endl;

    return 0;
}
