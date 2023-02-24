#include <iostream>
#include <string>
using namespace std;

int main () {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    for (int x; x < 9; x++) {
        cout << arr[x/3][x%3] << endl;
    }
}