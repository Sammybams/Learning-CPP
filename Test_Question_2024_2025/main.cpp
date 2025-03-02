#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int main() {

    Subject MySubject;
    Student MyStudent;

    // MySubject.DisplaySubject();
    MyStudent.PrintSubject();

    int n = 0;
    int sub;
    cout << endl;
    cout << "You can only select 3 courses" << endl;
    do {
        cout << "Select a subject (1 - 5): ";
        cin >> sub;
        cin.ignore();

        string new_sub = MySubject.getSubject(sub);
        MySubject.deleteSubject(sub);
        MyStudent.RegisterStudent(new_sub, n+1);        
        n++;
    } while (n < 3);


    cout << endl;
    cout << "Printing Student Registration" << endl;
    MyStudent.PrintRegistration();

}