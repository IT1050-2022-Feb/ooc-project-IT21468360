#include "Category.h"
#include "Product.h"

Category::Category() {
	prod[0] = new Product();
	prod[1] = new Product();
}
Category::Category(string catID, string catName) { 
	category_ID = catID;
	category_name = catName;
}
void Category::storeCategoryDetails() {

}
void Category::updateCategory() {

}
void Category::deleteCategory() {

}
Category::~Category(){
	cout << "Category Deleted" << endl;
	for (int i = 0; i < SIZE; i++)
		delete prod[i];
	cout << "All Deleted" << endl;
}