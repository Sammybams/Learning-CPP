#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

/*
2011/2012 Second Semseter Examination EEG 206.
*/

int banner();
void input_parameter(int);
double analysis(int, double, double, double);
void output(double, double, double, double);

int main() {
    int choice = banner();
    input_parameter(choice);

    double var1, var2, var3;

    if (choice == 1 || choice == 2) {
        cout << "u = ";
        cin >> var1;
        cin.ignore();

        cout << "a = ";
        cin >> var2;
        cin.ignore();

        cout << "t = ";
        cin >> var3;
        cin.ignore();
    } else {
        cout << "u = ";
        cin >> var1;
        cin.ignore();

        cout << "a = ";
        cin >> var2;
        cin.ignore();

        cout << "s = ";
        cin >> var3;
        cin.ignore();
    }
    double solution = analysis(choice, var1, var2, var3);
    output(var1, var2, var3, solution);

    system("pause");
    return 0;
}

int banner() {
    cout << "Welcome to the Equation of Motion Application Programme" << endl;
    cout << "1. First Equation: s = u*t + (1/2)*a*t^2" << endl;
    cout << "2. Second Equation: v = u + a*t" << endl;
    cout << "3. Third Equation: v^2 = u^2 + 2*a*s" << endl;

    cout << endl;
    cout << "Choice the Equation to Solve =>";
    int choice;
    cin >> choice;
    cin.ignore();
    cout << endl;

    return choice;
}

void input_parameter(int choice) {
    
    string choice1 = "s = u*t + (1/2)*a*t^2";
    string choice2 = "v = u + a*t";
    string choice3 = "v^2 = u^2 + 2*a*s";

    cout << "You have chosen - ";
    switch (choice) {
        case 1:
            cout << choice1 << endl;
            break;
        case 2:
            cout << choice2 << endl;
            break;
        case 3:
            cout << choice3 << endl;
            break;
    }
    cout << "Enter the values of the three variables." << endl;
}

double analysis(int choice , double var1, double var2, double var3) {
    double solution;
    switch (choice) {
        case 1:
            solution = (var1*var3 + (0.5)*var2*pow(var3, 2));
            return solution;

            // return var1*var3 + (1/2)*var2*pow(var3, 2);
        case 2:
            solution = (var1 + var2*var3);
            return solution;

            //return var1 + var2*var3;
        case 3:
            solution = (pow(var1, 2) + 2*var2*var3);
            return solution;

            // return pow(var1, 2) + 2*var2*var3;
        default:
            return -1;
    }
}

void output(double var1, double var2, double var3, double solution) {

    cout << "Variable 1 = " << var1 << endl;
    cout << "Variable 2 = " << var2 << endl;
    cout << "Variable 3 = " << var3 << endl;

    if (solution == -1) {
        cout << "The Choice of Equation is not a Valid One." << endl;
    } else {
        cout << "Solution = " << solution << endl;
    }
}