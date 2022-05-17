#include "Product.h"
#include <iostream>
#include <cstring>
// Whole class of Product class
#define SIZE 5

class Category
{
private:
	string category_ID;
	string category_name;
	Product* prod[SIZE];

public:
	Category();
	Category(string catID, string catName);
	void storeCategoryDetails();
	void updateCategory();
	void deleteCategory();
	~Category();


};

