#include <iostream>
#include <cmath>
using namespace std;

void Get_Coefficients(double*, double*, double*);
char Calc_Discriminant(double, double, double);
void Calc_Root(double, double, double, char);

int main () {

    bool state = true;

    do {
        cout << "Calculating the Roots of a Quadratic equation" << endl;

        double a;
        double b;
        double c;

        Get_Coefficients(&a, &b, &c);
        char type = Calc_Discriminant(a, b, c);
        Calc_Root(a, b, c, type);
        
        cout << "Do you want to solve for another equation (y/n)?: ";
        char answer;
        cin >> answer;
        cin.ignore();

        cout << endl;

        if (answer=='y') {
            state = true;
        } else {
            state = false;
        }   
        
    } while (state);

    system("pause");
    return 0;
    
}

void Get_Coefficients(double *a, double *b, double *c) {
    cout << "Enter the co-efficients of the equation (ax^2 + bx + c): " << endl;
    cout << "a: ";
    double a_coef;
    cin >> a_coef;
    cin.ignore();

    cout << "b: ";
    double b_coef;
    cin >> b_coef;
    cin.ignore();

    cout << "c: ";
    double c_coef;
    cin >> c_coef;
    cin.ignore();

    *a = a_coef;
    *b = b_coef;
    *c = c_coef;

}

char Calc_Discriminant(double a, double b, double c) {

    double discr = pow(b, 2) - (4*a*c);

    if (discr > 0) {
        return 'r';
    } else if (discr == 0) {
        return 's';
    } else {
        return 'i';
    };

}

void Calc_Root(double a, double b, double c, char state) {
    
    if (state=='r') {
        double first_discr = pow(b, 2) - (4*a*c);
        double second_discr = pow(first_discr, 0.5);

        double first_root = ((-1*b) + (second_discr)) / (2*a);
        double second_root = ((-1*b) - (second_discr)) / (2*a);

        cout << "Roots of Equation (Real) - " << endl;
        cout << "Root 1: " << first_root << endl;
        cout << "Root 2: " << second_root << endl;
    } else if (state=='s') {

        double root = (-1*b) / (2*a);

        cout << "Root of Equation (Same) - " << endl;
        cout << "Root: " << root << endl;
    } else {

        double first_discr = pow(b, 2) - (4*a*c);
        double second_discr = pow((-1*first_discr), 0.5);

        double first_part = (-1*b) / (2*a);
        double second_part = second_discr / (2*a);

        cout << "Roots of Equation (Imaginary) - " << endl;
        cout << "Root 1: " << first_part << " + " << second_part << "i" << endl;
        cout << "Root 1: " << first_part << " - " << second_part << "i" << endl;
    };
}
