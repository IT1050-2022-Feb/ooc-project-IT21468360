#include<iostream>
#include "Wishlist.h"
#include "Product.h"
using namespace std;

Wishlist::Wishlist() {
	wishlist_ID = "";
}
Wishlist::Wishlist(string wID) {
	wishlist_ID = wID;
}
void Wishlist::addProducts() {

}
void Wishlist::removeProducts() {

}
Wishlist::~Wishlist() {
	cout << "Wishlist deleted" << endl;
}