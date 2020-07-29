#include "varArray.h"
#include <iostream>
using namespace std;

void output(double* arrayPtr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << *(arrayPtr + i) << " ";
	}
}

int check(double* arrayPtr, double number, int size)
{
    for (int i = 0; i < size; i++) {
        if ((*(arrayPtr + i)) == number) {
            return i;
        }
    }
    return -1;
}

void addNumber(double*& arrayPtr, double number, int& size)
{
    int index = check(arrayPtr, number, size);
    if (index == -1) {  
        double* arrayPtr2 = new double[++size];
        for (int i = 0; i < size; i++) {
            *(arrayPtr2 + i) = *(arrayPtr + i);
        }
        *(arrayPtr2 + size - 1) = number;
        delete[] arrayPtr;
        arrayPtr = arrayPtr2;
    }
}

void removeNumber(double*& arrayPtr, double number, int& size)
{
}
