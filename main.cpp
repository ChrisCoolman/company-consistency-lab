// Chris Coleman
// pgLang lab
// 5/16/2025
// Extra: Waits for user input at the end before closing
#include <iostream>
#include <string>
#include "communications.h"
#include "discounts.h"

using namespace std;

int main() {
    // Ask user for name
    cout << "What is your name" << endl;
    string name;
    getline(cin, name);
    greeting(name);

    // Ask user for product name
    cout << "Please enter the name of the product" << endl;
    string product;
    getline(cin, product);

    // Ask user for the price of the product
    cout << "What is the price" << endl;
    int price;
    cin >> price;
    int* pricePtr = &price;

    // Ask user for the coupon they want to use
    cout << "Enter a coupon code: " << endl;
    string couponName;
    cin >> couponName;
    // Check user's coupon code against the three we support
    // and pass the price as a point so it can be changed by the coupon
    studentDiscount(couponName, pricePtr);
    grandNationalCoupon(couponName, pricePtr);
    drop50Coupon(couponName, pricePtr);
    // Print the final price
    cout << "Final Price: " << price << endl;

    // ask user for their address
    cout << "Where shall we deliver this product? " << endl;
    string address;
    cin.ignore();
    getline(cin, address);
    formatAdress(address);
    cout << "You live at " << address << endl;

    // Print the closing message and wait for user input before closing
    cout << closing(name, product) << endl;
    string input;
    cin >> input;
    return 0;
}