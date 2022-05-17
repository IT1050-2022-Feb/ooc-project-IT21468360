#pragma once
//Whole Class for discount class
//Product class is a part class of Category Class
#include "Category.h"
#include "Discount.h"
#include "Wishlist.h"
#include <cstring>
using namespace std;

class Product
{
private:
	int product_ID;
	string product_name;
	float product_price;
	string productDescription;
	int productQuantity;
	Discount* dis;            //Discount class is a part class of the Product class
	Wishlist* wish_list;     //Bi-directional relationship with Wishlist class

public:
	Product();
	Product(int P_ID, string P_name, float P_price, string P_description, int P_quantity);
	void addProducts();
	void storeProductDetails(int P_ID, string P_name, float P_price, string P_description, int P_quantity);
	void updateProductDetails();
	void displayProductDetails();
	void removeProducts();
	~Product();
};

