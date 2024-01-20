#include <iostream>
#include <stdlib.h>   // for the abs and labs functions
#include <math.h> // for the fabs function

using namespace std;

int main () {
    double x = -7.345, y;
    int a = -3, b;
    long l = -44000, n;

    y = fabs(x);    // three different functions needed
    b = abs(a);
    n = labs(l);

    cout << "\n The positive values are " << y << " and " << b << " and " << n << endl;

    double f = -7.345, g;
    // int g;
    g = abs(f);
    cout << "\n The positive values of f is " << g << endl;
    return 0;
}

