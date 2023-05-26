#include <iostream>
#include <cstdlib>
using namespace std;

/*
2011/2012 Second Mid-Semester Examination - Group 2.
*/

// static_cast<int>
// static_cast<char>

char Get_A_Letter () {
    return static_cast<char>(65 + (rand() % 26));   
}

int main () {
    
    cout << "Generate a fifteen-character encoded message." << endl;
    cout << endl;
    bool state = true;
    
    do {
        int seed;

        cout << "Enter a seed value for randomization: ";
        cin >> seed;
        cout << endl;

        srand(seed);

        cout << "Your fifteen-character encoded message: ";
        for (int i = 0; i < 14; i++) {
            cout << Get_A_Letter() << " ";
        }
        cout << Get_A_Letter() << endl;

        cout << "Do you wish to generate another message? (y/n): ";
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
