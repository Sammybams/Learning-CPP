#include <iostream>
#include <string>
using namespace std;

//complete the function
void winners(string arr[], int size, int N) {
    for (int initial = N; initial<size; initial+=N) {
        cout << arr[initial-1] << endl;
    }
}

int main() {
    string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    //getting the lucky number as input
    int n;
    cin >> n;

    //call function
    winners(customers, 13, n);
    
    return 0;
}