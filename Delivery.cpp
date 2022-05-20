#include "Delivery.h"
#include <iostream>
using namespace std;

Delivery::Delivery() {
	delivery_ID = "";
	delivery_date = "";
	delivery_location = "";
}
Delivery::Delivery(string DID, string Ddate, string Dloc) {
	delivery_ID = DID;
	delivery_date = Ddate;
	delivery_location = Dloc;
}

void Delivery::storeDeliveryDetails(string DID, string Ddate, string Dloc)
{
	delivery_ID = DID;
	delivery_date = Ddate;
	delivery_location = Dloc;
}

void Delivery::updateDeliveryDetails() {
}

void Delivery::displayDeliveryDetails() {
}

float Delivery::calcDeliveryCost() {
}
Delivery::~Delivery() {
	cout << "Delete Delivery details" << endl;
}