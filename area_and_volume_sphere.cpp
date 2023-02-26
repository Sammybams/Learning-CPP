#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const double PI = 3.1415926535;

double surfaceArea(double radius) {
    double area = 4 * PI * pow(radius, 2);
    return area;
}

double volume(double radius) {
    double area = (4/3.0) * PI * pow(radius, 3);
    return area;
}

int main () {

    cout << "Enter the name of two different spheres: ";
    string sphere1, sphere2;
    cin >> sphere1 >> sphere2;

    cout << "Enter the radius of " << sphere1 << ": ";
    double radius1;
    cin >> radius1;

    cout << "Enter the radius of " << sphere2 << ": ";
    double radius2;
    cin >> radius2;

    cout << "The surface area of " << sphere1 << " is " << surfaceArea(radius1) << endl;
    cout << "The volume of " << sphere1 << " is " << volume(radius1) << endl;

    cout << "The surface area of " << sphere2 << " is " << surfaceArea(radius2) << endl;
    cout << "The volume of " << sphere2 << " is " << volume(radius2) << endl;

    int check = 0;
    while (check == 0) {
        cout << "Do you want to run the program again? (y/n): ";
        char answer;
        cin >> answer;

        if (answer == 'y') {
            main();
        }
        else {
            check = 1;
        }
    }
}