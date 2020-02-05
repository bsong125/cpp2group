/*
	Song, Brian

	February 4, 2020

	CS A250
	Practice
*/

#include "Product.h"

#include <iostream>
using namespace std;

int main()
{
	Product plumeriaSoap; // default constructor (creating object)
	Product tuberoseSoap("Tuberose Soap", 23713564, 4.59); // another object
	
	//...

	tuberoseSoap.setPrice(6.99); // setting price to 6.99 from 4.59
	
	plumeriaSoap.print();
	tuberoseSoap.print(); // make the function constant
						  // to take control
	cout << "Price of Plumeria Soap: $" 
		<< plumeriaSoap.getPrice() << endl;

	cout << tuberoseSoap.getName() << " - Apply 25% discount: $"
		<< tuberoseSoap.getDiscountedPrice(0.25) << endl;

	cout << endl;
	system("Pause");
	return 0;
}