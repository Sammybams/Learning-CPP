#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
2011/2012 Second Mid-Semester Examination - Group 3.
*/

const double PI = 3.141592625;

void GetParameters(int *C_Rad, int *C_Height) {

    int val_Rad, val_Height;

    cout << "Enter the radius of the Cylinder: ";
    cin >> val_Rad;

    cout << "Enter the height of the Cylinder: ";
    cin >> val_Height;
    cout << endl;

    *C_Rad = val_Rad;
    *C_Height = val_Height;
}

int main () {

    cout << "Calculating the Volume of a Cylinder" << endl;
    cout << endl;

    bool state = true;

    do {
        

        int radius;
        int height;

        GetParameters(&radius, &height);

        double volume = PI * pow(radius, 2) * height;

        cout << "The radius of the Cylinder is " << volume << endl;

        cout << "Do you wish to solve for another cylinder? (y/n): ";
        char answer;
        cin >> answer;
        cout << endl;

        if (answer == 'y') {
            state = true;
        }
        else {
            state = false;
        }
    }
    while (state);

}