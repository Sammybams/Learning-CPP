#include <iostream>
#include "header.h"
using namespace std;


void assignHouse(Player& player, House& house) {
    if (house.status == false) {
        player.house = house;
        house.status = true;
    }
    else {
        cout << "House already assigned to another player." << endl;
    }
}

void printResults(Player players[], int size) {
    cout << "Name\t\tHouse\tMember\n";
    for (int i = 0; i < size; ++i) {
        cout << players[i].name << "\t" << players[i].house.colour << "\t" << players[i].house.members << "\n";
    }
}
