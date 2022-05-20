//Parent class of Visitor
//Parent class of RegisteredSeller
//Parent class of RegisteredBuyer
#include<iostream>
#include<cstring>
using namespace std;

class User
{
protected:
	string name;
	string NIC;
	string address;
	string email;
	int phone_number;
	string gender;

public:
	User();
	User(string Uname, string userNIC, string Uaddress, string Uemail, int phoneNo, string userGender);
	void viewProducts();
	void searchProducts();
	~User();
};

