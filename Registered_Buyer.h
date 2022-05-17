#pragma once
#include <iostream>
#include <cstring>
#include "User.h"
#include "Order.h"
#include "Wishlist.h"
#include "Payment.h"


class Registered_Buyer : public User
{
private:
	string userName;
	string password;
	string buyerID;
	Order* ord[SIZE];
	Wishlist* wish;
	Payment* pay;

public:
	Registered_Buyer();
	Registered_Buyer(string uName, string pw, string bID);
	void placeOrder();
	void makePayment();
	void manageAccount();
	void rateProduct();
	void writeReviews();
	~Registered_Buyer();
};


