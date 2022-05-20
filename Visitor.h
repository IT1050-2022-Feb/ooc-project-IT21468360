#include <iostream>
#include "User.h"
#include<cstring>

using namespace std;

class Visitor :public User {

private:
	string visitorID;

public:
	Visitor();
	Visitor(string vID);
	void registerDetails(string vID, string nam, string id, string add, string mail, int no, string gen);
	~Visitor();
};
