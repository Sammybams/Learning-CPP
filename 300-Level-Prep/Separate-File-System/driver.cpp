#include <math.h>
#include "sphere.h"
#include <iostream>

using namespace std;

int main () {
    cout << "\n Welcome to the Sphere Program! \n";
    Sphere MySphere;

    MySphere.Set_Rad(5.0);
    MySphere.CalcVolume();
    MySphere.CalcSurfaceArea();
    MySphere.PrintSphere();
    cout << "\n\n All done \n";

    return 0;
}
