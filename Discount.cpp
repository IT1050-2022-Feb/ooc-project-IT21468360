#include <iostream> 
#include <cstring>
#include "Discount.h"
using namespace std;



Discount::Discount() {
	discount_ID = "";
	discount_amount = 0;
	discount_date = "";

}

Discount::Discount(string d_id, float d_m, string d) {
	discount_ID = d_id;
	discount_amount = d_m;
	discount_date = d;
}

void Discount::storeDiscountDetails() {

}
void Discount::addDiscounts() {


}
void Discount::removeDiscounts() {

}

Discount::~Discount() {
	cout << "Discount deleted" << endl;
}