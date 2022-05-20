#include<iostream>
#include<cstring>
using namespace std;
#include "User.h"

User::User() {
	name = "";
	NIC = "";
	address = "";
	email = "";
	phone_number = 0;
	gender = "";
}
User::User(string Uname, string userNIC, string Uaddress, string Uemail, int phoneNo, string userGender) {
	name = Uname;
	NIC = userNIC;
	address = Uaddress;
	email = Uemail;
	phone_number = phoneNo;
	gender = userGender;
}
void User::viewProducts() {

}
void User::searchProducts() {

}
User::~User() {
	cout << "User deleted" << endl;
}