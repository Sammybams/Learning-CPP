#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numbers[] = {5, 2, 8, 1, 9};

    // Get the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Sort the array
    sort(numbers, numbers + size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}


/*
    int array3[20];
    int track = 0;
    for (int i=0; i<20; i++) {
        int value = array1[i];
        for (int j=0; j<20; j++) {
            if (track==0) {
                if (value < array1[j]) {
                    value = array1[j];
                }

            } else {
                if ((value < array1[j]) && (value > array3[track])) {
                    value = array1[j];
                }
            }
        }
        array3[i] = value;
        track++;
    }

    for (int i=0; i<19; i++) {
        cout << array3[i] << ", ";
    }
    cout << array3[19] << "}" << endl;
*/