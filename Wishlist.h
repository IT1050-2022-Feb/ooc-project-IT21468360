#pragma once
#define SIZE 3
#include "Product.h"
#include "Registered_Buyer.h"

class Wishlist
{
private:
	string wishlist_ID;
	Product* prod[SIZE];	   //Bi-directional association relationship with Product class
	Registered_Buyer* rBuyer;  //Bi-directional association relationship with Registered_Buyer class

public:
	Wishlist();
	Wishlist(string wID);
	void addProducts();
	void removeProducts();
	~Wishlist();
};

