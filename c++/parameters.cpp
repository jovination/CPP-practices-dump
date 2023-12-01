#include <iostream>
using namespace std;

string myName (string fname);

int main(){

string fname; 
string newName = "Jovination";
cout << myName(newName);

 return 0;

}

string myName (string fname){
     return fname;
}