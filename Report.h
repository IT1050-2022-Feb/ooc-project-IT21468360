
#include <iostream>
#include<cstring>
#include "User.h"

using namespace std;

class Report {
private:
	string report_ID;
	string report_name;

public:
	Report();
	Report(string R_ID, string R_name);
	void setPersonalDetails(User* U);
	void setListOfOrders(Order * O);
	void listOfPayments(Payment * P);
	~Report();
};
