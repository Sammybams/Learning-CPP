#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int max;
    cout << "Enter maximum digit: " << endl;
    cin >> max;

    int total_width = to_string(max*max).length();
    for (int i=1; i<=max; i++) {
        for (int j=1; j<=max; j++) {
            if (j==max) {
                cout << setw(total_width) <<i*j << endl;
            }
            else {
                cout << setw(total_width) << i*j << '|';
            }
            
        }
    }
}