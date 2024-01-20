#include <iostream>
#include <string>
using namespace std;

struct Student {
    char name[40];
    char SSN[12];
    int dept;
    float gpa;
};

void GetStudentInfo(Student*);

int main () {
    Student MyStudent;
    GetStudentInfo(&MyStudent);

    cout << MyStudent.name << endl;

    return 0;
}

void GetStudentInfo(Student *temp_ptr) {
    strcpy(temp_ptr->name, "J. E. White");
    strcpy(temp_ptr->SSN, "555-11-5555");
    temp_ptr->dept = 1;
    temp_ptr->gpa = 3.8;

    // (*temp_ptr).name = "J. E. White";
    // This is above line is equivalent to:
    // temp_ptr->name = "J. E. White";
}