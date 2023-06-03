#include <iostream>
#include <cmath>
using namespace std;

/*
Bamgbola Samuel Aduragbemi
190403001
Electrical and Electronics Engineering
*/

void Get_Coefficients (double*, double*, double*); // Initializing Get_Coefficients function

char Calc_Discriminant (double, double, double); // Initializing Calc_Discriminant function

void Calc_Root(char, double, double, double); // Initializing Calc_Root function

int main () {

    // initial state to rerun loop
    bool state = true;

    do {
        double a, b, c;
        // using pointers to collect the co-efficients of the quadratic equation.
        Get_Coefficients(&a, &b, &c);
        char check = Calc_Discriminant(a, b, c);
        Calc_Root(check, a, b, c);

        cout << "Do you want to solve for another quadratic equation? (y/n)" << endl;
        char answer;
        cin >> answer;
        cin.ignore();

        if (answer=='y') {
            state = true;
        }
        else {
            state = false;
        }

    } while (state);

    system("pause");
    return 0;
}

void Get_Coefficients (double *a_ptr, double *b_ptr, double *c_ptr) {
    double a_dup, b_dup, c_dup;

    // Getting inputs for quadratic equation
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0): " << endl;
    cout << "a: ";
    cin >> a_dup;
    cin.ignore();

    cout << "b: ";
    cin >> b_dup;
    cin.ignore();

    cout << "c: ";
    cin >> c_dup;
    cin.ignore();

    // substituting values from input to values for pointers.
    *a_ptr = a_dup;
    *b_ptr = b_dup;
    *c_ptr = c_dup;
}

char Calc_Discriminant (double a, double b, double c) {
    // checking state of quadratic equation
    /*
    r - real roots
    s - same roots
    i - imaginary roots
    */
    double discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0) {
        return 'r';
    }
    else if (discriminant == 0) {
        return 's';
    }
    else {
        return 'i';
    }
}

void Calc_Root(char state, double a, double b, double c) {

    // Calculates and outputs the roots of the quadratic equation based on the state.

    if (state == 'r') {
        double discriminant = pow(b, 2) - (4 * a * c);
        double root1 = ((-1*b) + pow(discriminant, 0.5))/(2*a);
        double root2 = ((-1*b) - pow(discriminant, 0.5))/(2*a);

        cout << "For real roots -" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
        cout << endl;

    }
    else if (state == 's') {
        double discriminant = pow(b, 2) - (4 * a * c);
        double root = ((-1*b) + pow(discriminant, 0.5))/(2*a);

        cout << "For same roots -" << endl;
        cout << "Root: " << root << endl;
        cout << endl;
    }
    else {
        double discriminant1 = (pow(b, 2) - (4 * a * c))*-1;
        double discriminant2 = pow(discriminant1, 0.5);
        double part1 = (-1*b)/(2*a);
        double part2 = discriminant2/(2*a);
        
        cout << "For imaginary roots -" << endl;
        cout << "Root 1: " << part1 << " + " << part2 << "i" << endl;
        cout << "Root 2: " << part1 << " - " << part2 << "i" <<  endl;
        cout << endl;
    }
}