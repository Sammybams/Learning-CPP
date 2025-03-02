#include <iostream>
#include <string>
#include "header.h"
using namespace std;



void Subject::DisplaySubject() {

    // int length = sizeof(subject)/sizeof(subject[0]);
    int length = 6;

    for (int i = 0; i < length; i++) {
        // if (i == 0) {
        //     cout << "S/N" << "\t" << subject[i];
        // } else {
        //     cout << i << "." << "\t" << subject[i];
        // }
        cout << subject[i];
    }
}

string Subject::getSubject(int index) {
    return subject[index];
}

void Subject::changeSubject(string new_sub, int index) {
    subject[index] = new_sub;
}

void Subject::deleteSubject(int index) {
    subject[index].erase();
}
void Student::PrintSubject(){

    int length = 6;

    for (int i = 0; i < length; i++) {
        if (i == 0) {
            cout << "S/N" << "\t" << subject.getSubject(i) << endl;
        } else {
            cout << i << "." << "\t" << subject.getSubject(i) << endl;
        }
    }
}

void Student::PrintRegistration() {
    cout << "Surname: " << Surname << endl;
    cout << "Firstname: " << Firstname << endl;
    cout << "School: " << School << endl;
    cout << "Programme: " << Programme << endl;

    int length = 4;

    for (int i = 0; i < length; i++) {
        if (i == 0) {
            cout << "S/N" << "\t" << subject.getSubject(i) << endl;
        } else {
            cout << i << "." << "\t" << subject.getSubject(i) << endl;
        }
    }
}

void Student::RegisterStudent(string new_sub, int index) {
    subject.changeSubject(new_sub, index);
}