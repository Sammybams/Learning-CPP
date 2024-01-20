#include <iostream>
using namespace std;

inline float CalcBoxVol(float, float, float);

int main () {
    float width=3.0, length = 4.0, height=7.0, vol;
    vol = CalcBoxVol(width, length, height);
    cout << "\n The volume is " << vol << endl;
    return 0;
}

inline float CalcBoxVol(float width, float length, float height) {
    return (width * length * height);
}