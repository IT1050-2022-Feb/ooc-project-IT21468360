#include "payment.h"
#include "Registered_Buyer.h"
#include "Delivery.h"

#include <iostream>
using namespace std;

class Order //order class
{
private:
	string order_ID;
	string order_name;
	string order_date;

	Registered_Buyer* rbyr;
	Payment* pay;

public:
	Order();
	Order(string OID, string Oname, string Odate);
	void storeOrderDetails(string OID, string Oname, string Odate);
	void validateOrderDetails();
	void confirmOrder();
	void cancelOrder();
	void deliverOrder(Delivery* del);
	~Order();
};

