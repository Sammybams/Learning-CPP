#include <iostream>
#include <string>
using namespace std;

enum BirdType{
    robin, rooster, canary, sparrow, roadrunner, finch, eagle
};

int main () {
    BirdType Tweetie, Foghorn, BeepBeep;
    // three diferent BirdType variables
    Tweetie = canary; // we can now assign one of the
    Foghorn = rooster; // enum list values to each
    BeepBeep = roadrunner; // BirdType variable

    cout << Tweetie << endl; // Ouputs 2

    cout << strcmp("orange" , "green") << endl; // Outputs 1");
    cout << strcmp("green" , "green") << endl; // Outputs 0");
    cout << strcmp("green" , "greens") << endl; // Outputs -1");


    return 0;
}