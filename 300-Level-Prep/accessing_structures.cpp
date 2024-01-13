#include <iostream>
#include <string>

using namespace std;

struct Person {
    char name[40];
    char sex;   // m = male, f = female
    int age;
    int category;   // racers grouped by age, such as 1 = 0-9, 2 = 10-19, etc.
    int race;   //races have an integer code 1 = 5K, 2 = 10K, 3 = marathon
};

int main () {
    // accessing structures
    Person runner;
    cout << "\n On your marks, get set....\n\n";
    strcpy(runner.name, "Jack Rabbit");
    runner.sex = 'M';
    runner.age = 17;
    runner.category = 2;
    runner.race = 1;

    cout << "\n Runner's name: " << runner.name;
    cout << "\n Sex: " << runner.sex << "\n Age: " << runner.age;
    cout << "\n Age Category: " << runner.category;
    cout << "\n Race Code: " << runner.race;

    cout << "\n\n GO! \n\n";

    return 0;
};