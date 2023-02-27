#include <iostream>
using namespace std;

int main() {
    int number  = 34754;
    cout << to_string(number).length() << endl;

    int arr[5]  = {3,4, 7, 5, 4};
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    return 0;
}