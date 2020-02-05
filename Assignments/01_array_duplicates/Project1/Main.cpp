#include <iostream>
using namespace std;

#include "Functions.h"

void processArrays();
void testArray(int a[], int numOfElements);
void deleteDuplicates(int a[], int& numOfElements);
void printArray(const int a[], const int numOfElements);

int main()
{
	processArrays();

	cout << endl;
	system("Pause");
	return 0;
}

void processArrays()
{
	{	int a[] = { 1 }; testArray(a, 1); }
	{	int a[] = { 1, 1 }; testArray(a, 2); }
	{	int a[] = { 1, 1, 2 }; testArray(a, 3); }
	{	int a[] = { 1, 2, 1 }; testArray(a, 3); }
	{	int a[] = { 1, 2, 2 }; testArray(a, 3); }
	{	int a[] = { 1, 1, 1, 2, 1 }; testArray(a, 5); }
	{	int a[] = { 1, 2, 2, 1, 2, 2, 2 }; testArray(a, 7); }
	{	int a[] = { 2, 3, 6, 3, 2, 4, 6, 6, 3, 2 }; testArray(a, 10); }
}

void testArray(int a[], int numOfElements)
{
	cout << "Array: ";
	printArray(a, numOfElements);

	if (numOfElements != 0)
	{
		cout << "\nAfter deleting duplicates: ";
		deleteDuplicates(a, numOfElements);

		printArray(a, numOfElements);
		cout << endl << endl;
	}
}

