#include <iostream>
#include <cstdlib>

using namespace std;

void Fill_It(int, int, int, int[]);

int main () {

    int array1[20];
    int array2[20];

    cout << "Filling two twenty-element array with random integers." << endl;
    
    cout << "Enter a seed to generate the random numbers for the array 1: ";
    int seed1;
    cin >> seed1;
    cin.ignore();
    Fill_It(seed1, 0, 1000, array1);

    cout << "Array 1: " << endl;
    cout << "Seed: " << seed1 << endl;
    cout << "{";
    for (int i=0; i<19; i++) {
        cout << array1[i] << ", ";
    }
    cout << array1[19] << "}" << endl;
    cout << endl;

    cout << "Enter a seed to generate the random numbers for the array 1: ";
    int seed2;
    cin >> seed2;
    cin.ignore();
    Fill_It(seed2, 1000, 2000, array2);

    cout << "Array 2: " << endl;
    cout << "Seed: " << seed2 << endl;
    cout << "{";
    for (int i=0; i<19; i++) {
        cout << array2[i] << ", ";
    }
    cout << array2[19] << "}" << endl;  
    
    system("pause");
    return 0;
}

void Fill_It(int seed, int low, int high, int array[]) {

    srand(seed);
    int range = high - low;
    for (int i=0; i<20; i++) {
        array[i] = low + (rand()%range);
    }
}