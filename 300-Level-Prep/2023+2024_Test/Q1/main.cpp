#include <iostream>
#include "header.h"
using namespace std;

// void printResults(Player[], int);

int main () {

    int numPlayers;
    char color;
    char name[50];
    cout << "Enter the number of players: ";
    cin >> numPlayers;
    cin.ignore();
    cout << endl;
    Player players[numPlayers];
    House houses[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        cout << "Enter the name of Player " << i+1 << ": ";
        cin.getline(name, 50, '\n');
        cout << "Enter the color of the house (R, Y, G or B): ";
        cin >> color;
        cin.ignore();
        cout << endl;
        strcpy(players[i].name, name);
        // players[i].name = name;
        
        assignHouse(players[i], houses[i]);

        if (color == 'R')
            players[i].house.colour = Red;
        else if (color == 'Y')
            players[i].house.colour = Yellow;
        else if (color == 'G')
            players[i].house.colour = Green;
        else if (color == 'B')
            players[i].house.colour = Blue;
   
    }

    // Deduct members
    for (int i = 0; i < 4; ++i) {
        players[i].house.members -= i + 1;
    }
    printResults(players, 4);
    return 0;

}
