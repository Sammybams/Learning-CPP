#include <iostream>
using namespace std;

int main () {
    int mark = 100;

    if (mark >= 50) {
        cout << "You passsed." << endl;
        if (mark == 100) {
            cout << "Perfect score!" << endl;
        }
    } 
    else {
        cout << "You failed." << endl;
    }
}