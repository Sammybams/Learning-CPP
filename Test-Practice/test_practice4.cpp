#include <iostream>
using namespace std;

void Fill_It (int TheArray[], int seed, int low, int high) {
    
    srand(seed);
    for (int i = 0; i < 20; i++) {
        TheArray[i] = low + (rand() % (high - low + 1));
    }
}

int main () {
    
    cout << "Filling Two Twenty-element arrays." << endl;

    int max_length = 20;

    int array1[max_length];
    int array2[max_length];

    cout << "Enter two different seed values:" << endl;
    cout << "Seed 1: ";
    int seed1;
    cin >> seed1;
    cin.ignore();
    // cout << endl;

    cout << "Seed 2: ";
    int seed2;
    cin >> seed2;
    cin.ignore();
    cout << endl;

    Fill_It(array1, seed1, 1000, 2000);
    cout << "Array 1." << endl;
    cout << "Seed value: " << seed1 << endl;
    cout << "[";
    for (int i = 0; i < 19; i++) {
        cout << array1[i] << ", ";
    }
    cout << array1[max_length-1] << "]" << endl;
    cout << endl;


    Fill_It(array2, seed2, 0, 1000);
    cout << "Array 2." << endl;
    cout << "Seed value: " << seed2 << endl;
    cout << "[";
    for (int i = 0; i < 19; i++) {
        cout << array2[i] << ", ";
    }
    cout << array2[max_length-1] << "]" << endl;

}