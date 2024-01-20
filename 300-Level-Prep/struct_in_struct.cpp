#include <iostream>
using namespace std;

struct Phone {
    int area, exch, number;
};

struct Date {
    int month, day, year;
};

struct Employee {
    char name[40];
    Date hire, birth;
    Phone home_ph;
};

int main () {
    Employee worker;
    strcpy(worker.name, "Hannah Marie White");
    worker.hire.month = 1;
    worker.hire.day =  2;
    worker.hire.year = 1995;
    worker.birth.month = 8;
    worker.birth.day = 25;
    worker.birth.year = 1972;
    worker.home_ph.area = 505;
    worker.home_ph.exch = 555;
    worker.home_ph.number = 1212;
};

void groups();

void groups () {
    Employee school[1000];

};
