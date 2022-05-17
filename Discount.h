#include<iostream>
#include <cstring>
using namespace std; 

class Discount {

private:
	string discount_ID;
	float discount_amount;
	string discount_date;

public: 
	Discount();
	Discount(string dis_ID, float dis_amount, string dis_date);
	void storeDiscountDetails();
	void addDiscounts();
	void removeDiscounts();
	~Discount();
};

