#ifndef HEADER_H
#define HEADER_H

#include <iostream>

enum Colour { Red, Yellow, Green, Blue };

struct House {
    Colour colour;
    bool status;
    int numPlayers;

    House () {
        colour = Red;
        status = false;
        numPlayers = 4;
    }
};

struct Player {
    char name[40];
    House house[2];
};

void gameConfig(int, Player[]);
void display(int, Player[]);

#endif