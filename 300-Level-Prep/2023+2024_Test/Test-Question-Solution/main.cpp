#include <iostream>
#include "header.h"
using namespace std;

int main () {

    int numPlayers;
    char playerName[40];
    char colourCode;
    

    Player players[4];
    bool state = true;
    do {
        cout << "How many number of players? (2 or 4): ";
        cin >> numPlayers;
        cin.ignore();

        if (numPlayers==2 || numPlayers==4) {
            state = false;
        } else {
            cout << "Enter 2 or 4!" << endl;
        }
    } while (state);

    for (int i=0; i<numPlayers; i++) {
        cout << "Enter the name for Player " << i+1 << ": ";
        cin.getline(playerName, 40);
        strcpy(players[i].name, playerName);
    }

    gameConfig(numPlayers, players);

    return 0;

}