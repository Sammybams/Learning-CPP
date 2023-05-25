#include <iostream>
using namespace std;

struct Student {
    char name[30];
    int age;
    char school[40];
    char dept[40];
    int matric_no;
};

int main () {
    Student MyStudent;
    strcpy(MyStudent.name, "Samuel Bamgbola");
    MyStudent.age = 20;
    strcpy(MyStudent.school, "University of Lagos");
    strcpy(MyStudent.dept, "Electrical and Electronics Engineering");
    MyStudent.matric_no = 190403001;

    cout << "Student name: " << MyStudent.name << "\nStudent age: " << MyStudent.age << endl;
    cout << "Student school: " << MyStudent.school << "\nStudent department: " << MyStudent.dept << endl;
    cout << "Student Matriculation Number: " << MyStudent.matric_no << endl;

}