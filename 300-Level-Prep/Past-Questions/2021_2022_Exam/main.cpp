#include <iostream>
#include "header.h"

using namespace std;

int main () {
    Person MyPerson;
    FillShoppingInfo(MyPerson);
    WriteReceipt(MyPerson);
    
    return 0;
}