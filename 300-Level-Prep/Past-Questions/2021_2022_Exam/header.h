#ifndef HEADER_H
#define HEADER_H

struct Product {
    char ProductName[40];
    float UnitPrice;
    int Quantity;
    float TotalPrice;
};

struct Shop {
    char ShopName[40];
    char Address[40];
};

struct Customer {
    char CustomerName[40];
    char Phonenumber[14];
};

struct Person {
    Product MyProduct;
    Shop MyShop;
    Customer MyCustomer;
};

void FillShoppingInfo (Person &);
void WriteReceipt (Person);

#endif