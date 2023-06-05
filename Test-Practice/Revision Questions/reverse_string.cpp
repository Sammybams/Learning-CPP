#include <iostream>
using namespace std;

void ReverseString();
int main () {
    
    ReverseString();
    system("pause");
    return 0;
}

void ReverseString() {

    cout << "Enter a name - ";
    char name[50];
    cin.getline(name, 50);
    cin.ignore(0, '\n');

    char name2[50];

    for (int i=49; i>0; i--) {
        cout << name[i];
        for (int length = 0; length < 50 ; length ++) {
            name2[length] = name[i];
            cout << name2;
        }
        
    }

    
}