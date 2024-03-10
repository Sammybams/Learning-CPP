#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

enum Colour { Red, Yellow, Green, Blue };

struct House {
    Colour colour;
    int members;
    bool status;

    House() {
        colour = Red;
        members = 4;
        status = false;
    }
};

struct Player {
    char name[50];
    House house;
};

void assignHouse(Player& player, House& house);
void printResults(Player players[], int size);



#endif