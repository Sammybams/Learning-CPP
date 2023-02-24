#include <iostream>
#include <string>

using namespace std;

int main () {
    int number = 233;
    cout << &number << endl;

    // 1
    int x = 5;
    int *p = &x;

    x = x + 4;
    cout << x << endl;
    
    // 2
    x = 5;
    p = &x;

    x = *p + 4;
    cout << x << endl;

    // 3
    x = 5;
    p = &x;

    *p = *p + 4;
    cout << *p << endl;

}