#include <iostream>
#include <string>
using namespace std;
/*
int main() {
    int number  = 34754;
    cout << to_string(number).length() << endl;

    int arr[5]  = {3,4, 7, 5, 4};
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    return 0;
}
*/

int main() {
    string number = "3123412";

    for (int i = 0; i < number.length(); i++) {
        cout << number[i] << endl;
    }

    return 0;
}