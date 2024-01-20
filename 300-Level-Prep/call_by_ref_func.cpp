#include <iostream>
using namespace std;

void GiveMe3Floats(float* ,float* ,float*); //Prototype includes pointers //variables

int main () {
    float a,b,c;
    cout << "\n The GiveMe3Floats using pointers program.\n" << endl;
    GiveMe3Floats(&a, &b, &c);
    cout << "\n The three floating point values are " << a << " and " << b << " and " << c << endl;
    return 0;
}


void GiveMe3Floats(float *a_ptr, float *b_ptr, float *c_ptr) {
    *a_ptr = (float)6.7; // indirection operator w/ pointer
    *b_ptr = (float)8.1;
    *c_ptr = (float)33.7;
}