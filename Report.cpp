#include "Report.h"
#include "Order.h"
#include "Payment.h"
#include "User.h"

#include <iostream>
using namespace std;

Report::Report() {
	report_ID = "";
	report_name = "";
}
Report::Report(string R_ID, string R_name) {
	report_ID = R_ID;
	report_name = R_name;
}
void Report::setPersonalDetails(User* U) {

}
void Report::setListOfOrders(Order * O) {

}
void Report::listOfPayments(Payment * P) {

}
Report::~Report() {
	cout << "Report Deleted" << endl;
}