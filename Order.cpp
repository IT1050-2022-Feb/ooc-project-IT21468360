#include "Order.h"
#include "Delivery.h"
#include "Payment.h"
#include <iostream>
using namespace std;

Order::Order() {
	order_ID = "";
	order_name = "";
	order_date = "";
}

Order::Order(string OID, string Oname, string Odate) {
	order_ID = OID;
	order_name = Oname;
	order_date = Odate;
}
void Order::storeOrderDetails(string OID, string Oname, string Odate) {
	order_ID = OID;
	order_name = Oname;
	order_date = Odate;
}

void Order::validateOrderDetails() {
}

void Order::confirmOrder() {
}

void Order::cancelOrder() {
}

void Order::deliverOrder(Delivery* del) {

}

Order::~Order() {
	cout << "Order deleted" << endl;
}