#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;

void FillShoppingInfo (Person &MyPerson) {
    // Using Call by Reference with Reference Parameters

    // Filling in Product
    cout << "Enter the product name: ";
    cin.getline(MyPerson.MyProduct.ProductName,40);
    cout << "\n";

    cout << "Enter the unit price name name: ";
    cin >> MyPerson.MyProduct.UnitPrice;
    cout << "\n";

    cout << "Enter the quantity of product: ";
    cin >> MyPerson.MyProduct.Quantity;
    cout << "\n";
    cin.ignore();

    MyPerson.MyProduct.TotalPrice = MyPerson.MyProduct.Quantity * MyPerson.MyProduct.UnitPrice;

    // Filling in Shop
    cout << "Enter the Shop name: ";
    cin.getline(MyPerson.MyShop.ShopName,40);
    cout << "\n";

    cout << "Enter the Shop address: ";
    cin.getline(MyPerson.MyShop.Address, 40);
    cout << "\n";

    // Filling in Customer
    cout << "Enter the Customer's name: ";
    cin.getline(MyPerson.MyCustomer.CustomerName,40);
    cout << "\n";

    cout << "Enter the Customer's phone number: ";
    cin.getline(MyPerson.MyCustomer.Phonenumber, 40);
    cout << "\n";

}

void WriteReceipt (Person MyPerson) {
    
    fstream receipt;
    int max = 54;

    int shop_name_width = (sizeof(MyPerson.MyShop.ShopName)/sizeof(MyPerson.MyShop.ShopName[0]))/2 + (max/2);
    int shop_address_width = (sizeof(MyPerson.MyShop.Address)/sizeof(MyPerson.MyShop.Address[0]))/2 + (max/2);

    receipt.open("receipt.txt", ios::out);
    if (receipt) {
        receipt << string(max, '*')
                << "\n"
                // << setw(shop_name_width) << MyPerson.MyShop.ShopName 
                << "\t\t\t" << MyPerson.MyShop.ShopName 
                << "\n"
                // << setw(shop_address_width) << MyPerson.MyShop.Address
                << "\t\t" << MyPerson.MyShop.Address
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
                /*
                Length of the string below is 25. Divided by 2 is 12.5.
                Add 27 (half of the number of astericks) to it is 39.5. Round it down to 39.
                This centres the string to the middle of the astericks.
                */
                << setw(39) << "Thanks for your patronage" 
                << "\n"
                << string(max, '*');
                receipt.close();
    }
}
