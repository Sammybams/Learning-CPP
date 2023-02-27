#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPalindrome(int x) {
    //complete the function

    int initial = to_string(x).length() - 1;;
    int check_x = 0;
    

    for (int duplicate_x = x; duplicate_x > 0;) {
        check_x += (duplicate_x % 10) * pow(10, initial);
        duplicate_x =  duplicate_x/10;
        initial--;
    }

    cout << check_x << endl;
    

    if (x==check_x) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}