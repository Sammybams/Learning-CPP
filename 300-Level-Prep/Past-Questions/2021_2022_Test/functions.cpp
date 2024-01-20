#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "header.h"

using namespace std;

void FillShoppingInfo(Person *MyPerson) {
    
    // Treating Product Struct
    cout << "Enter the name of your Product: ";
    cin.getline(MyPerson->MyProduct.ProductName, 40);
    cout << "\n";

    cout << "Enter the Unit Price: ";
    cin >> MyPerson->MyProduct.UnitPrice;
    cout << "\n";

    cout << "Enter the Quantity: ";
    cin >> MyPerson->MyProduct.Quantity;
    cout << "\n";
    cin.ignore();

    MyPerson->MyProduct.TotalPrice = MyPerson->MyProduct.UnitPrice * MyPerson->MyProduct.Quantity;
    
    // Treating Shop Struct
    cout << "Enter the name of your Shop: ";
    cin.getline(MyPerson->MyShop.ShopName, 40);
    // cin.ignore();
    cout << "\n";

    cout << "Enter the address of your Shop: ";
    cin.getline(MyPerson->MyShop.Address, 40);
    // cin.ignore();
    cout << "\n";

    // Treating Customer Struct
    cout << "What is your name? ";
    cin.getline(MyPerson->MyCustomer.CustomerName, 40);
    // cin.ignore();
    cout << "\n";

    cout << "Enter your phone number: ";
    cin.getline(MyPerson->MyCustomer.Phonenumber, 40);
    // cin.ignore();
    cout << "\n";
}

void WriteReceipt (Person MyPerson) {
    cout << MyPerson.MyCustomer.CustomerName << endl;
    
    fstream receipt;
    int max = 54;

    
    int shop_name_width = (sizeof(MyPerson.MyShop.ShopName)/sizeof(MyPerson.MyShop.ShopName[0]))/2 + (max/2);
    int shop_address_width = (sizeof(MyPerson.MyShop.Address)/sizeof(MyPerson.MyShop.Address[0]))/2 + (max/2);

    receipt.open("receipt.txt", ios::out);
    if (receipt) {
        receipt << string(max, '*')
                << "\n"
                // << setw(shop_name_width) << MyPerson.MyShop.ShopName 
                << "\t\t\t\t\t\t" << MyPerson.MyShop.ShopName 
                << "\n"
                // << setw(shop_address_width) << MyPerson.MyShop.Address
                << "\t\t\t\t\t" << MyPerson.MyShop.Address
                << "\n\n"
                << "Customer\t" << MyPerson.MyCustomer.CustomerName
                << "\n"
                << "Phone Number\t" << MyPerson.MyCustomer.Phonenumber
                << "\n\n"
                << "Your Order"
                << "\n\n"
                << "Product Name\tUnitPrice\tQuantity Ordered"
                << "\n"
                << MyPerson.MyProduct.ProductName << "\t" << MyPerson.MyProduct.UnitPrice << "\t\t" << MyPerson.MyProduct.Quantity
                << "\n"
                << "\t\t\t\t" << string(7, '*')
                << "\n"
                << "\t\t" << "Total Price\t" << MyPerson.MyProduct.TotalPrice
                << "\n"
                << "\t\t\t\t" << string(7, '*')
                << "\n"
                << setw(39) << "Thanks for your patronage" 
                << "\n"
                << string(max, '*');
                receipt.close();
    }
}
