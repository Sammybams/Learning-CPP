#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int max=12, height=12;
    int total_width = to_string(max*height).length();

    cout << setw(total_width*max) << "Multiplication Table" << endl;
    cout << setw(total_width*max+1) << "----------------------" << endl;
    cout << endl;
    
    for (int i=1; i<=height; i++) {
        for (int j=1; j<=max; j++) {
            if (j==max) {
                cout << setw(total_width+1) <<i*j << endl;
            }
            else {
                cout << setw(total_width+1) << i*j << '|';
            }
        }
    }
    system("pause");
}