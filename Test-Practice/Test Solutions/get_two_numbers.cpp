#include <iostream>
using namespace std;

/*
Bamgbola Samuel Aduragbemi
190403001
Electrical and Electronics Engineering
*/

// Initializing functions
void GetTwoNumbers(int*, int*);
int FindBigOne(int, int);

int main () {
    
    bool state = true;

    do {
        int first, second;

        GetTwoNumbers(&first, &second);

        cout << "Largest Value: " << FindBigOne(first, second) << endl;
        cout << endl;

        cout << "Re-run function? (y/n): ";
        char answer;
        cin >> answer;
        cout << endl;

        if (answer == 'y') {
            state = true;
        }
        else {
            state = false;
        }
    }
    while (state);

    system("pause");
    return 0;
}

void GetTwoNumbers(int *num1, int *num2) {
    
    cout << "Enter two digits." << endl;
    cout << "First digit: ";
    int val1, val2;
    cin >> val1;
    // cout << endl;

    cout << "Second digit: ";
    cin >> val2;
    // cout << endl;

    *num1 = val1;
    *num2 = val2;
}

int FindBigOne(int num1, int num2) {
    
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}