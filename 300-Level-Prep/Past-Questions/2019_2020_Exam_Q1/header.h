#ifndef HEADER_H
#define HEADER_H

#include <complex>
using namespace std;

struct Coefficient {
    float a;
    float b;
    float c;
};


struct ComplexRoots {
    // Using C++ Complex type 
    complex<float> root1;
    complex<float> root2;
};

class Quadratic {
    private:
        float SecondOrderCoeff, FirstOrderCoeff, ConstantCoeff;
        char CalcDeterminant(Coefficient*);
        
    public:
        Quadratic();
        Quadratic(float a, float b, float c);
        void SetCoefficient(float, float, float);
        void GetCoefficient(Coefficient*);
        void QuadraticRoots(Coefficient*, ComplexRoots*);
        void WriteRoots(ComplexRoots*);

};

#endif