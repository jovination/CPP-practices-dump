#include<iostream>
using namespace std;

string the_message();
int main(){
    string new_message = the_message();
    cout << new_message << endl;
    return 0;
}
 string the_message(){
    return "i'm learning c++ from codeacademy";
}