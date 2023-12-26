#include <iostream>
#include <string>
using namespace std;

int main () {

    char name[50];
    string name2;
    cin.getline(name, 50);
    // getline(cin >> ws, name2);
    // cin.getline(name2); # RAISES ERROR
    
    cout << "My name is " << name << endl;
}