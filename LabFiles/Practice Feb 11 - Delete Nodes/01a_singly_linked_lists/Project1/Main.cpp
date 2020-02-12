#include "AnyList.h"

#include <iostream>
using namespace std;

void processList(AnyList& myList, int elemToDelete);

int main()
{
	AnyList myList;

	//list is empty
	{
		AnyList myList;
		myList.deleteElem(100);
	}

	// list has 1 node and elem is found
	{
		AnyList myList;
		myList.insertFront(40);
		processList(myList, 40);


	}

	// list has 1 node and elem is not found
	{
		AnyList myList;
		myList.insertFront(40);
		processList(myList, 100);
	}

	//list has 2 odes and elem is found
	{
		AnyList myList;
		myList.insertFront(2);
		myList.insertFront(1);
		processList(myList, 2);
	}

	//list has 2 odes and elem is not found
	{
		AnyList myList;
		myList.insertFront(2);
		myList.insertFront(1);
		processList(myList, 3);
	}

	// list has several nodes and elem is found somewhere in the middle
	{
		AnyList myList;
		myList.insertFront(4);
		myList.insertFront(3);
		myList.insertFront(2);
		myList.insertFront(1);
		processList(myList, 3);
	}
	//list has several nodes and elem is found in last position
	{
		AnyList myList;
		myList.insertFront(4);
		myList.insertFront(3);
		myList.insertFront(2);
		myList.insertFront(1);
		processList(myList, 4);
	}
	//list has several nodes and elem is not found
	{
		AnyList myList;
		myList.insertFront(4);
		myList.insertFront(3);
		myList.insertFront(2);
		myList.insertFront(1);
		processList(myList, 40);
	}
	cout << endl;
	system("Pause");
	return 0;


}

void processList(AnyList& myList, int elemToDelete)
{
	cout << "\nList is: ";
	myList.print();
	cout << "\nDeleting " << elemToDelete <<  "... ";
	myList.deleteElem(elemToDelete);
	cout << "\nList is: ";
	myList.print();
	cout << endl;
}
