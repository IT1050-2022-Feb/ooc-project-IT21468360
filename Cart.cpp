#include "Cart.h"
#include "Order.h"
#include <iostream>
using namespace std;


Cart::Cart()
{
	Orders[0] = new Order;
	Orders[1] = new Order;
}
Cart::Cart(string CID) {
	cart_ID = CID;
}

void Cart::addToCart(string CID)
{
	cart_ID = CID;
}

void Cart::updateCart() {
}

void Cart::displayDetails() {
}

float Cart::calcTotal() {
}
Cart::~Cart() {
	cout << "Delete Cart" << endl;
}