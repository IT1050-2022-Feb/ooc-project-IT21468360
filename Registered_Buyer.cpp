#include <iostream>
#include <cstring>
#include "Registered_Buyer.h"
using namespace std;

Registered_Buyer::Registered_Buyer() {
	userName = "";
	password = "";
	buyerID = "";

}
Registered_Buyer::Registered_Buyer(string uName, string pw, string bID) {
	userName = "uName";
	password = "pw";
	buyerID = "bID";
}
void Registered_Buyer::placeOrder() {

}
void Registered_Buyer::makePayment() {

}
void Registered_Buyer::manageAccount() {

}
void Registered_Buyer::rateProduct() {

}
void Registered_Buyer::writeReviews() {

}
Registered_Buyer::~Registered_Buyer() {
	cout << "Deleted Registered Buyer" << endl;
}