#include <iostream>
#include <cstdlib>
using namespace std;

// pseudo random number generator with rand()

int main () {
    srand(1);
    /*
    The srand() function is used to generate truly random numbers.
    
    This function allows to specify a seed value as its parameter,
    which is used for the rand() function's algorithm.

    Changing the seed value changes the return of rand().
    However, the same argument will result in the same output.    
    */

    for (int x = 1; x <=10; x++) {
        cout << rand() << endl;
    }
    
}