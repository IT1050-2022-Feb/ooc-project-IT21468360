#include "Visitor.h"


Visitor::Visitor() {
	visitorID = "";
}
Visitor::Visitor(string vID) {
	visitorID = vID;
}

void Visitor::registerDetails(string vID, string nam, string id, string add, string mail, int no, string gen) {
	visitorID = vID;
	name = nam;
	NIC = id;
	address = add;
	email = mail;
	phone_number = no;
	gender = gen;
}

Visitor::~Visitor() {
	cout << "Visitor Deleted" << endl;
}