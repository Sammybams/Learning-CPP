#include <iostream>
using namespace std;

int main()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    return 0;
}