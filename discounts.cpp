#include "discounts.h"
#include <iostream>

// Store coupons in an array
std::string validCoupons[3] = {"STUDENT", "GRANDNATIONAL", "DROP50"};

// 30% student discount
void studentDiscount(std::string coupon, int* price) {
    if(coupon == validCoupons[0]) {
        *price -= (*price * 0.30);
    }
}
// 10% discount
void grandNationalCoupon(std::string coupon, int* price) {
    if(coupon == validCoupons[1]) {
        *price -= (*price * 0.10);
    }
}

// 50% discount
void drop50Coupon(std::string coupon, int* price) {
    if(coupon == validCoupons[2]) {
        *price -= (*price * 0.50);
    }
}
