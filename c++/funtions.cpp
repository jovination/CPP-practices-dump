#include<iostream>
using namespace std;

void happyBirthday(string name, int age); // function prototype

int main(){
string name;
int age; // function
cout << "Enter your name: ";
cin >> name;
cout << "Enter your age: ";
cin >> age;
happyBirthday(name, age);
return 0;

}

void happyBirthday(string name, int age){
    cout << "Happy Birthday to you \n";
    cout << "Happy Birthday to you \n";
    cout << "Happy Birthday dear " << name << "\n";
    cout << "Happy Birthday to you \n";
    cout <<"You are " << age << " Years old \n";
}
