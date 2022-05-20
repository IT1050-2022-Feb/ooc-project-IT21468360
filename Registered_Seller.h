#include<iostream>
#include <cstring>
#include "Product.h"
#include "User.h";
#include "Payment.h"
#include "Discount.h"

using namespace std;

class Registered_Seller : public User {

private:
	string username;
	string password;
	string seller_ID;
	Discount* dis[SIZE];
	Payment* pay[SIZE];

public:
	Registered_Seller();
	Registered_Seller(string u_nme, string p_wrd, string s_ID);
	void uploadProductDetails(string s_ID, Product * p);
	void editProductDetails();
	void manageAccount();
	void managePayments();
	~Registered_Seller();
};
