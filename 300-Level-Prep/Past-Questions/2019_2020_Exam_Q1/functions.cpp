#include "header.h"
#include <iostream>
using namespace std;


// 1st Constructor - initializes all the coefficients to zero
Quadratic::Quadratic () {
    SecondOrderCoeff = FirstOrderCoeff= ConstantCoeff = 0;
}

// 2nd Constructor - initializes all the coefficients set by the user
Quadratic::Quadratic (float a_in, float b_in, float c_in) {
    SecondOrderCoeff = a_in;
    FirstOrderCoeff = b_in;
    ConstantCoeff = c_in;
}

void Quadratic::SetCoefficient (float a_in, float b_in, float c_in) {
    SecondOrderCoeff = a_in;
    FirstOrderCoeff = b_in;
    ConstantCoeff = c_in;
}

void Quadratic::GetCoefficient (Coefficient *Coeff) {
    Coeff->a = SecondOrderCoeff;
    Coeff->b = FirstOrderCoeff;
    Coeff->c = ConstantCoeff;
}

char Quadratic::CalcDeterminant (Coefficient *Coeff) {
    float determinant = (Coeff->b * Coeff->b) - (4 * Coeff->a * Coeff->c);
    if (determinant > 0) {
        return 'r';
    } else if (determinant == 0) {
        return 'e';
    } else {
        return 'i';
    }
}

void Quadratic::QuadraticRoots (Coefficient *Coeff, ComplexRoots *Roots) {
    char determinant = CalcDeterminant(Coeff);
    if (determinant == 'r') {
        Roots->root1 = (-Coeff->b + sqrt((Coeff->b * Coeff->b) - (4 * Coeff->a * Coeff->c))) / (2 * Coeff->a);
        Roots->root2 = (-Coeff->b - sqrt((Coeff->b * Coeff->b) - (4 * Coeff->a * Coeff->c))) / (2 * Coeff->a);
    } else if (determinant == 'e') {
        Roots->root1 = Roots->root2 = -Coeff->b / (2 * Coeff->a);
    } else {
        float realPart = -Coeff->b / (2 * Coeff->a);
        float imaginaryPart = sqrt(-((Coeff->b * Coeff->b) - (4 * Coeff->a * Coeff->c))) / (2 * Coeff->a);
        Roots->root1 = complex<float>(realPart, imaginaryPart);
        Roots->root2 = complex<float>(realPart, -imaginaryPart);
    }
}

void Quadratic::WriteRoots (ComplexRoots *Roots) {
    
    cout << "Root 1: " << Roots->root1 << "\n";
    cout << "Root 2: " << Roots->root2 << "\n";
}


