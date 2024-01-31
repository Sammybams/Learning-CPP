#include <iostream>
#include "header.h"

using namespace std;

Quadratic myQuadratic;
Coefficient myCoeff;
ComplexRoots myRoots;

int main () {

    float a, b, c;
    a = 1;
    b = 4;
    c = 5;

    myQuadratic.SetCoefficient(a, b, c);
    myQuadratic.GetCoefficient(&myCoeff);

    myQuadratic.QuadraticRoots(&myCoeff, &myRoots);
    myQuadratic.WriteRoots(&myRoots);

    return 0;

}