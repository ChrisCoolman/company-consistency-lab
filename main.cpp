#include <iostream>
#include <string>
#include "communications.h"
#include "discounts.h"

using namespace std;

int main() {
    cout << "What is your name" << endl;
    string name;
    getline(cin, name);
    greeting(name);
    cout << "Please enter the name of the product" << endl;
    string product;
    getline(cin, product);
    cout << "What is the price" << endl;
    int price;
    cin >> price;
    int* pricePtr = &price;
    cout << "Enter a coupon code: " << endl;
    string couponName;
    cin >> couponName;
    studentDiscount(couponName, pricePtr);
    grandNationalCoupon(couponName, pricePtr);
    drop50Coupon(couponName, pricePtr);
    cout << "Final Price: " << price << endl;
    cout << "Where shall we deliver this product? " << endl;
    string address;
    cin.ignore();
    getline(cin, address);
    formatAdress(address);
    cout << "You live at " << address << endl;
    cout << closing(name, product) << endl;
    return 0;
}