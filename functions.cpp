#include <iostream>
using namespace std;

// formal parameters (defined in function to use within function)
void printSomething() {
    cout << "Hello there!" << endl;
}

int main() {
    printSomething();

    return 0;
}
