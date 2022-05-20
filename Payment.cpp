#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment()
{
	paymentID = "";
	paymentType = "";
	paymentAmount = 0;
	paymentDate = "";
	cardNumber = 0;
	cardName = "";
}
Payment::Payment(string payID, string payType, float payAmount, string payDate, int cardNum, string cardName)
{
	paymentID = payID;
	paymentType = payType;
	paymentAmount = payAmount;
	paymentDate = payDate;
	cardNumber = cardNum;
	cardName = cardName;
}
void Payment:: storePaymentDetails()
{

}
void Payment::updatePaymentDetails()
{

}
void Payment::validatePaymentDetails()
{

}
void Payment::confirmPayment()
{

}
Payment::~Payment()
{
	cout << "Delete Payment Details " << endl;
}
