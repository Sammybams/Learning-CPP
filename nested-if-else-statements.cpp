#include <iostream>
using namespace std;

int main (){
    int age = 18;
    if (age > 14) {
        if (age >= 18) {
            cout << "Adult";
        }
        else {
            cout << "Teenager";
        }
    }
    else {
        if (age > 0) {
            cout << "Child";
        }
        else {
            cout << "Something's wrong";
        }
    }
}