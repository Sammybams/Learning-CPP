#include <iostream>
#include <math.h>
#include "sphere.h"
using namespace std;

const double pi = 3.141592;

void Sphere::Set_Rad(double r) {
    radius = r;
}

void Sphere::CalcVolume () {
    volume = 4.0/3.0*pi*pow(radius,3);
}

void Sphere::CalcSurfaceArea () {
    s_area = 4.0*pi*pow(radius,2);
}

void Sphere::PrintSphere () {
    cout << "\n The sphere data is \n radius = " << radius << "\n volume = " << volume
    << "\n surface area = " << s_area;
}