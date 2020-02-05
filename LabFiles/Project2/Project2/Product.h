/*
	Song, Brian

	February 4, 2020

	CS A250
	Practice
*/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
public:
	Product();
	Product(const std::string& newName,
		int newID, double newPrice);

	void setPrice(double newPrice);
	
	double getPrice() const;
	std::string getName() const;
	double getDiscountedPrice(double discount) const;

	void print() const;
	

	~Product();

private:
	std::string productName;
	int productID;
	double productPrice;
};

#endif