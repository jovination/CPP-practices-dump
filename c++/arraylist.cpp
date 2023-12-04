#include <iostream>
using namespace std;

int main() {
    int x, y, z, q;
    int age[4] = {x, y, z, q};

    int i = 0;
    while (i < 4) {
        cout << "Enter age: ";
        cin >> age[i];
        cout << age[i] << endl;
        i++;
    }

    return 0;
}
