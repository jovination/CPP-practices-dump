#include <iostream>
using namespace std;

int main() {
    int father, mother, son, dog;
    int age[4] = {father, mother, son, dog};
    string names[4] = {"father", "mother", "son", "dog"};

    int i = 0;
    while (i < 4) {
        cout << "Enter age of " << names[i] << ": ";
        cin >> age[i];
        i++;
    }

    // Print out all stored data in the array using a while loop
    i = 0;
    cout << "Stored data in the array:" << endl;
    while (i < 4) {
        cout << "Age of " << names[i] << ": " << age[i] << endl;
        i++;
    }

    return 0;
}
