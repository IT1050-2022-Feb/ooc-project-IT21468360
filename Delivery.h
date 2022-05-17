#include <iostream>
#include <cstring>
using namespace std;

class Delivery //Delivery class
{
private:

	string delivery_ID;
	string delivery_date;
	string delivery_location;

public:
	Delivery();
	Delivery(string DID, string Ddate, string Dloc);
	void storeDeliveryDetails(string DID, string Ddate, string Dloc);
	void updateDeliveryDetails();
	void displayDeliveryDetails();
	float calcDeliveryCost();
	~Delivery();

};

