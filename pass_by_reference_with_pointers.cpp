#include <iostream>
using namespace std;

/*complete the function to multiple the megabytes,
  don't forget to set the parameter*/
void promotion(int *bandwidth) {
    
    //taking multiplier as input
    int multiplier;
    cout << "Enter value of multiplier: ";
    cin>>multiplier;
    
    *bandwidth*=multiplier;

    
}

int main() {
    //getting initial count of megabytes
    int megabytes;
    cout << "Enter amount of megabytes: ";
    cin >> megabytes;
    
    //printing the count of megabytes before the promotion
    cout << "Before the promotion: " << megabytes << endl;
    
    //complete the function call
    promotion(&megabytes);
    
    //printing the count of megabytes after the promotion
    cout << "After the promotion: " << megabytes << endl;
    
    return 0;
}