#include <iostream>
using namespace std;

void DrawLines(char = '%', int = 25, int = 1);

int main () {
    cout << "\n The Draw Lines Program \n\n";
    cout << "Default Line 25 % on Line 1";
    DrawLines();

    cout << "\n Change to 30 @ to a line";
    DrawLines('@', 30);

    cout << "\n Now draw 15 # on 3 lines";
    DrawLines('#',15,3);

    cout << "\n Last line has 6 % on 1 line";
    DrawLines('%',6);

    cout << "\n\n No more lines for you. \n";

    return 0;
}

void DrawLines(char symbol, int num_symb, int num_lines) {
    int i,j;
    cout << "\n";
    for (i = 0; i < num_lines; ++i) {
        for (j=0; j < num_symb; ++j) {
            cout << symbol;
        }
        cout << "\n";
    }
} 
