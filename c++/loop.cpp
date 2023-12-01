#include <iostream>
using namespace std;

int main() {
 
    for( int i = 1; i <= 20; i++) { 
            if (i == 12){
                continue;
            }
        cout  << i << "\n";
    }
    return 0;
}