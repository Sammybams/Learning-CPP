#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Switch case does not work with strings, but integers as characters (single case strings)
    char name = 'a';
    char name1 = 'b';
    switch (name) {
        case 'B': case 'A':
            cout << "Exact" << endl;
            break;
        case 'b':
            cout << "Adult" << endl;
            break;
    }

    return 0;
}