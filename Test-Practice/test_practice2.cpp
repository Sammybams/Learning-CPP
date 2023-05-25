#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/*
2011/2012 Second Mid-Semester Examination - Group 2.
*/

// static_cast<int>
// static_cast<char>

char Get_A_Letter () {
    for (int i = 0; i < 14; i++) {
        cout << static_cast<char>(65 + (rand() % 26)) << " "
    }
    cout << static_cast<char>(65 + (rand() % 26)) << endl;
    
}

int main () {

    int seed;
    bool state = true;
    
    do {

        cout << "Enter a seed value for randomization: ";
        cin >> seed;
        cout << endl;

        srand(seed);

        cout << "Do you wish to generate another message? (y/n): ";
        char answer;
        cin >> answer;
        cout << endl;

        if (answer == 'y') {
            state = true
        }
        else {
            state = false
        }
    }
    while (state);
   
}
