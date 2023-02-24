#include <iostream>
using namespace std;

int main() {
    
    // You can define an array without specifying the amount of elements
    int ages[][2] = {{19, 24}, {36, 45}};
                    
    //your code goes here
    // cout << sizeof(ages)/sizeof(ages[0]) << endl;

    cout << ages << endl;
    
    return 0;
}