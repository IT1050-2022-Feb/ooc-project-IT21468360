#include <iostream> 
#include <cstring>
#include "Registered_Seller.h"
using namespace std;

Registered_Seller::Registered_Seller() {
	username = "";
	password = "";
	seller_ID = "";
}


Registered_Seller::Registered_Seller(string u_nme, string p_wrd, string s_ID) {
	username = u_nme;
	password = p_wrd;
	seller_ID = s_ID;
}

void Registered_Seller::uploadProductDetails(string s_ID, Product* p) {

}

void Registered_Seller::editProductDetails() {

}

void Registered_Seller::manageAccount() {

}

void Registered_Seller::managePayments() {

}
Registered_Seller::~Registered_Seller() {
	cout << "Registered Seller deleted" << endl;
}
