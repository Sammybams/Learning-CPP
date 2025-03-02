#ifndef HEADER_H
#define HEADER_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;



class Subject {
    private:
        string subject[6];

    public:
        Subject();
        void DisplaySubject();
        string getSubject(int);
        void deleteSubject(int);
        void changeSubject(string, int);

};

inline Subject::Subject() {
    fstream file;
    char subject1[50]; 
    int i = 0;

    file.open("subject.txt", ios::in);
    if (file) {
        
        file.getline(subject1, 50);
        subject[0] = subject1;

        file.getline(subject1, 50);
        subject[1] = subject1;

        file.getline(subject1, 50);
        subject[2] = subject1;

        file.getline(subject1, 50);
        subject[3] = subject1;

        file.getline(subject1, 50);
        subject[4] = subject1;

        file.getline(subject1, 50);
        subject[5] = subject1;
    }
    file.close();
};

class Student {
    private:
        string Surname;
        string Firstname;
        string School;
        string Programme;
        Subject subject;

    public:
        Student();
        void PrintSubject();
        void RegisterStudent(string, int);
        void PrintRegistration();

};

inline Student::Student() {

    Surname = "John";
    Firstname = "DOE";
    School = "ABC University";
    Programme = "Arts";
    Subject MySubject;
    subject = MySubject;
};

#endif
