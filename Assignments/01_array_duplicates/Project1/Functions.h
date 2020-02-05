/*
	Nguyen, Frank
	Song, Jung Hoon
	Diep, Vu

	February 3, 2020

	CS 250
	Assignment 01 - Array Duplicates
*/
#ifndef FUNCTION_H_

#define FUNCTION_H_

// Definition function deleteDuplicates
/*
	@param a is an array that user pass it in to remove the duplicated elements.
	@param numOfElements is the size of the array.
*/
// Your code here...
void deleteDuplicates(int a[], int& numOfElements)
{
	for (size_t i = 0; i < numOfElements; i++)
	{
		for (size_t j = (i + 1); j < numOfElements; j++)			//pick up a number on the right and compare to the rest elements of the array
		{
			if (a[i] == a[j])
			{

				for (size_t k = j; k < (numOfElements - 1); k++)
					a[k] = a[k + 1];
				numOfElements--;
				j--;
			}
		}
	}
}



// Definition function printArray
/*
	@param a is an array that user pass it in to print.
	@param numOfElements is the size of the array.
*/
// Your code here...
void printArray(const int a[], const int numOfElements)
{
	for (size_t i = 0; i < numOfElements; i++)
		cout << a[i] << ' ';
}

#endif