/*
    Nguyen, Frank
    Song, Jung Hoon
    Diep, Vu
    Vuong, Anh
    Zhao, Xiangjun

    February 3, 2020

    CS 250
    Assignment 01 - Array Duplicates
*/

#ifndef FUNCTION_H
#define FUNCTION_H

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElements)
{
    for (size_t i = 0; i < numOfElements; i++)
    {
        for (size_t j = (i + 1); j < numOfElements; j++)      
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
void printArray(const int a[], int numOfElements)
{
    if (numOfElements == 0)
        cout << "Array is empty.";
    for (size_t i = 0; i < numOfElements; i++)
        cout << a[i] << ' ';
}

#endif