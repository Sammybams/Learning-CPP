#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int AbsoluteValue(int);
double AbsoluteValue(double);
long AbsoluteValue(long);

int main () {
    double x = -7.345, y;
    int a = -3, b;
    long l = -44000, n;

    y = AbsoluteValue(x);
    b = AbsoluteValue(a);
    n = AbsoluteValue(l);

    cout << "\n The positive values are " << y << " and " << b << " and " << n;
    cout << "\n I'm  positve about that! ;-) \n";

    return 0;
}

int AbsoluteValue(int x) {
    return (abs(x));
}

double AbsoluteValue(double x) {
    return (fabs(x));
}

long AbsoluteValue(long x) {
    return (labs(x));
}