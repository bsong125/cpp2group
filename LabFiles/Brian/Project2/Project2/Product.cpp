/*
	Song, Brian

	February 4, 2020

	CS A250
	Practice
*/

#include "Product.h"

#include <iostream>
#include <iomanip>

using namespace std;

Product::Product()
{
	productName = "Not determined yet";
	productID = 0;
	productPrice = 0.0;
}

Product::Product(const string& newName, int newID, double newPrice)
{
	productName = newName;
	productID = newID;
	productPrice = newPrice;
}

void Product::setPrice(double newPrice)
{
	productPrice = newPrice;
}

double Product::getPrice() const
{
	return productPrice;
}

string Product::getName() const
{
	return productName;
}

double Product::getDiscountedPrice(double discount) const
{
	return (productPrice - (productPrice * discount));
}

void Product::print() const
{
	cout << fixed << showpoint << setprecision(3);
	//cout << "Name: " << productName << " ID: " 
	//	<< productID << " Price: " << productPrice;
	cout << productName << " (" << productID
		<< ") $" << productPrice << endl;
	// call to another function
}

Product::~Product()
{}