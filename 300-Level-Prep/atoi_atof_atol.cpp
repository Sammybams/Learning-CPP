#include <iostream>
#include <stdlib.h>
using namespace std;

int  main () {
    char name[20], football_team[25];
    int age, num_kids;
    char temp[10];

    cout << "\n Enter your name: ";
    cin.getline(name,20);

    cout << "\n Enter your age: ";
    cin.getline(temp,10);
    age = atoi(temp);

    cout << "\n What is your favorite football team? ";
    cin.getline(football_team,25);

    cout << "\n How many kids do you have? ";
    cin.getline(temp,10);

    num_kids = atoi(temp);

    cout << endl << name << ", your team is " << football_team << "\nYou are " << age << " years old and have " << num_kids << " kids." << endl;
    return 0;
}