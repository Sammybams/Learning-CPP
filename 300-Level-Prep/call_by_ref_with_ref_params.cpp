#include <iostream>
using namespace std;

void GiveMe3Floats(float&, float&, float&);

int main () {
    float a,b,c;
    cout << "\n The GiveMe3Floats using reference parameters program.\n";
    GiveMe3Floats(a, b, c); /* the call just uses the names of the variables, 
    but the addresses are being passed to the function. */

    cout << "\n The three floating point values are " << a << " and " << b << " and " << c << endl;
    return 0;
}

void GiveMe3Floats(float &a_ref, float &b_ref, float &c_ref) {
    //ref vars are really pointers
    cout << &a_ref << endl;
    a_ref = (float)6.7; //values actually being assigned into the main's a,b,c
    b_ref = (float)8.1;
    c_ref = (float)33.7;
}