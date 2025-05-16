#ifndef DISCOUNTS
#define DISCOUNTS
#include <string>

// 30% student discount
void studentDiscount(std::string coupon, int* price);
// 10% discount
void grandNationalCoupon(std::string coupon, int* price);

// 50% discount
void drop50Coupon(std::string coupon, int* price);

#endif