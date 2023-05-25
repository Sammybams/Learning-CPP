#include <iostream>
using namespace std;

/*
2021/20222 Second Mid-Semseter Examination Group 1.
*/

void GetTwoNumbers(int *num1, int *num2) {
    
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

int FindBigOne(int *num1, int *num2) {
    
    if (*num1 > *num2) {
        return *num1;
    }
    else {
        return *num2;
    }
}

int main () {
    
    bool state = true;

    do {
        cout << "Enter two digits." << endl;
        int first, second;

        GetTwoNumbers(&first, &second);

        cout << "Largest Value: " << FindBigOne(&first, &second) << endl;
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
}
