#include<iostream>
#include<cstring>
#include "Product.h"
using namespace std;

Product::Product() {
	product_ID = 0;
	product_name = "";
	product_price = 0;
	productDescription = "";
	productQuantity = 0;
}
Product::Product(int P_ID, string P_name, float P_price, string P_description, int P_quantity) {
	product_ID = P_ID;
	product_name = P_name;
	product_price = P_price;
	productDescription = P_description;
	productQuantity = P_quantity;
}
void Product::addProducts() {

}
void Product::storeProductDetails(int P_ID, string P_name, float P_price, string P_description, int P_quantity) {

}
void Product::updateProductDetails() {

}
void Product::displayProductDetails() {

}
void Product::removeProducts() {

}
Product::~Product() {
	cout << "Product deleted" << endl;
	cout << "All deleted" << endl;
}