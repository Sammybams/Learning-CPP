#include <iostream>
#include <iomanip>
#include <string>
#include "header.h"

using namespace std;

int mapper(char);
void mapWord(char, char[]);
void mapEnum(int, char[]);

void gameConfig(int numPlayers, Player players[4]) {

    House houses[4];
    Colour colours[4] = {Red, Yellow, Green, Blue};
    
    if (numPlayers==2) {
        cout << "\nOne player gets two houses for in a 2-player game.\n" << endl;

        // For player 1 and 2
        for (int i=0; i<2; i++) {
            cout << "Player " << i+1 << endl;
            for (int j=0; j<2;j++) {
                bool state1 = true;
                bool state2 = true;
                do {
                    char colourCode;
                    do {
                        cout << "Enter the colour of House " << j+1 << " (R, Y, G or B): ";
                        cin >> colourCode;
                        cin.ignore();

                        if (colourCode=='R' || colourCode=='Y' || colourCode=='G' || colourCode=='B') {
                            state1 = false;
                        } else {
                            cout << "Enter R, Y, G or B.\n" << endl;
                        }
                    } while (state1);
                    
                    int mappedColour = mapper(colourCode);

                    if (houses[mappedColour].status==false) {
                        houses[mappedColour].colour = colours[mappedColour];
                        houses[mappedColour].status = true;
                        players[i].house[j] =  houses[mappedColour];
                        state2 = false;
                    } else {
                        char value[6];
                        mapWord(colourCode, value);
                        cout << "House " << value << " has already been taken, choose another!\n" << endl;
                    }
                } while (state2);
            }
            
        }
   
    } else {
        //  for players 1, 2, 3, 4
        cout << "\nOne player gets one house for in a 4-player game.\n" << endl;
        for (int i=0; i<4; i++) {
            cout << "Player " << i+1 << endl;
            bool state1 = true;
            bool state2 = true;
            do {
                char colourCode;
                do {
                    cout << "Enter the colour of your House (R, Y, G or B): ";
                    cin >> colourCode;
                    cin.ignore();

                    if (colourCode=='R' || colourCode=='Y' || colourCode=='G' || colourCode=='B') {
                        state1 = false;
                    } else {
                        cout << "Enter R, Y, G or B.\n" << endl;
                    }
                } while (state1);
                
                int mappedColour = mapper(colourCode);

                if (houses[mappedColour].status==false) {
                    houses[mappedColour].colour = colours[mappedColour];
                    houses[mappedColour].status = true;
                    players[i].house[0] =  houses[mappedColour];
                    state2 = false;
                } else {
                    char value[6];
                    mapWord(colourCode, value);
                    cout << "House " << value << " has already been taken, choose another!\n" << endl;
                }
            } while (state2);
        }
    }
    display(numPlayers, players);
}

void display(int numPlayers, Player players[4]) {

    if (numPlayers==4) {
        cout << "Before deduction." << endl;
        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        char value[6];
        for (int i=0; i<4; i++) {
            mapEnum(players[i].house[0].colour, value);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << players[i].house[0].numPlayers << endl;
        }

        cout << "\nAfter deduction." << endl;
        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        for (int i=0; i<4; i++) {
            mapEnum(players[i].house[0].colour, value);
            int deduction = players[i].house[0].numPlayers - (i+1);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << deduction << endl;
        }

    } else {
        cout << "\nBefore deduction." << endl;
        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        char value[6];
        for (int i=0; i<2; i++) { 
            mapEnum(players[i].house[0].colour, value);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << players[i].house[0].numPlayers << endl;
        }
        cout << string(66, '-') << endl;

        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        for (int i=0; i<2; i++) {
            mapEnum(players[i].house[1].colour, value);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << players[i].house[1].numPlayers << endl;
        }

        cout << "\nAfter deduction." << endl;
        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        for (int i=0; i<2; i++) {
            mapEnum(players[i].house[0].colour, value);
            int deduction = players[i].house[0].numPlayers - (i+1);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << deduction << endl;
        }
        cout << string(66, '-') << endl;

        cout << left << setw(40) << "Name" << setw(20) << "House" << setw(20) << "Member" << endl;
        for (int i=0; i<2; i++) {
            mapEnum(players[i].house[1].colour, value);
            int deduction = players[i].house[1].numPlayers - (i+1);
            cout << left << setw(40) << players[i].name << setw(20) << value << setw(20) << deduction << endl;
        }   
    }
}


int mapper(char colour) {
    int value;
    switch (colour) {
        case 'R':
            value = 0;
            break;
        case 'Y':
            value = 1;
            break;
        case 'G':
            value = 2;
            break;
        case 'B':
            value = 3;
            break;
    }
    return value;
}

void mapWord(char colour, char value[]) {
    // char value[6];
    switch (colour) {
        case 'R':
            // char mapped[6] = "Red";
            strcpy(value, "Red");
            break;
        case 'Y':
            // char mapped[6] = "Yellow";
            strcpy(value, "Yellow");
            break;
        case 'G':
            // char mapped[6] = "Green";
            strcpy(value, "Green");
            break;
        case 'B':
            // char mapped[6] = "Blue";
            strcpy(value, "Blue");
            break;
    }
}

void mapEnum(int number, char value[]) {
    // char value[6];
    switch (number) {
        case 0:
            // char mapped[6] = "Red";
            strcpy(value, "Red");
            break;
        case 1:
            // char mapped[6] = "Yellow";
            strcpy(value, "Yellow");
            break;
        case 2:
            // char mapped[6] = "Green";
            strcpy(value, "Green");
            break;
        case 3:
            // char mapped[6] = "Blue";
            strcpy(value, "Blue");
            break;
    }
}