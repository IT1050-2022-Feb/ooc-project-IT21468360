// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Category.h"
#include "Product.h"
#include "Wishlist.h"
#include "Cart.h"
#include "Delivery.h"
#include "Discount.h"
#include "Order.h"
#include "Payment.h"
#include "Registered_Buyer.h"
#include "Registered_Seller.h"
#include "Report.h"
#include "User.h"
#include "Visitor.h"

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    
    //Dynamic object creations

    Order* ord1;
    ord1 = new Order("OID004", "Jhon", "17/02/2022");
   
    Delivery* del1;
    del1 = new Delivery("DID130", "20/02/2022", "Kandy");

    Cart* crt1;
    crt1 = new Cart("CID012");
  
    Category* cat1;
    cat1 = new Category("CAT006", "Fashion");

    Product* prod1;
    prod1 = new Product(201, "Red Shoes", 2000.00, "Good quality product", 1);

    Wishlist* wish1;
    wish1 = new Wishlist("W034");
   
    Registered_Buyer* regBuyer1;
    regBuyer1 = new Registered_Buyer("Nil", "ABcd1234", "RB0001");

    Payment* pay1;
    pay1 = new Payment("P001", "online", 2500.00, "04/02/2022", 001002024220505, "visa");
  
    Discount* dis1;
    dis1 = new Discount("d097", 2133, "2022/01/20");

    Registered_Seller* RS1;
    RS1 = new Registered_Seller("Meru", "#14Meru@", "M133");

 
    //Delete Objects

    delete ord1;
    delete del1;
    delete crt1;
    delete cat1;
    delete prod1;
    delete wish1;
    delete regBuyer1;
    delete pay1;
    delete dis1;
    delete RS1;

    return 0;
   

}
