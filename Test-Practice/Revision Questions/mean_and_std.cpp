#include <iostream>
#include <cmath>
using namespace std;

void FillArray(double[]);
void ComputeMeanandStddev(double[], double*, double*);
void PrintResult(double[], double, double);

int main() {

    double array[5];
    FillArray(array);

    double mean, stddev;
    ComputeMeanandStddev(array, &mean, &stddev);
    PrintResult(array, mean, stddev);

    system("pause");
    return 0;

}

void FillArray(double array[]) {
    cout << "Fill the array with 5 floating point values." << endl;

    for (int i=0; i<5; i++) {
        cout << "Value " << i+1 << " = ";
        double value;
        cin >> value;
        cin.ignore();
        array[i] = value;
    }
    cout << endl;
}

void ComputeMeanandStddev(double array[], double *avg, double *std) {
    double sum_of_values = 0;
    for (int i=0; i<5; i++) {
        sum_of_values += array[i];
    }
    double mean = sum_of_values/5;

    double sum_of_deviaition_sqr = 0;

    for (int i=0; i<5; i++) {
        double deviaition = pow((array[i] - mean), 2);
        sum_of_deviaition_sqr += deviaition;
    }

    double stddev = pow((sum_of_deviaition_sqr/5), 0.5);

    *avg = mean;
    *std = stddev;
}

void PrintResult(double array[], double mean, double std) {
    cout << "Array values = ";
    cout << "{";
    for (int i=0; i<4; i++) {
        cout << array[i] << ", ";
    }
    cout << array[4] << "}" << endl;

    cout << "Mean = " << mean << endl;
    cout << "Standard deviation value = " << std << endl;
}