#include <iostream>
using namespace std;
#define SIZE 2
#include "Order.h"

class Cart //Cart class
{
private:

	string cart_ID;

	Order* Orders[SIZE];


public:
	Cart();
	Cart(string CID);
	void addToCart(string CID);
	void updateCart();
	void displayDetails();
	float calcTotal();
	~Cart();


};
