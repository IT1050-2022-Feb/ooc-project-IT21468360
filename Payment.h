
#pragma once
#include <iostream>
#include "Registered_Buyer.h"
#include "Registered_Seller.h"


using namespace std;

	class Payment
	{
	private:
		string paymentID;
		string paymentType;
		float paymentAmount;
		string paymentDate;
		int cardNumber;
		string cardName;

		Registered_Buyer* RB1;
		Registered_Seller* RS1;

	public:
		Payment();
		Payment(string payID, string payType, float payAmount, string payDate, int cardNum, string cardName);
		void storePaymentDetails();
		void updatePaymentDetails();
		void validatePaymentDetails();
		void confirmPayment();
		~Payment();
	};



