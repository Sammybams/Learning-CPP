#include <iostream>
using namespace std;

struct StoreItem {

    char product_name[50];
    char UPC[20];
    float unit_price;

};

int main() {
    StoreItem StoreItem1, StoreItem2;

    strcpy(StoreItem1.product_name, "Thermocool");
    cout << "Hello" << endl;

    return 0;
}