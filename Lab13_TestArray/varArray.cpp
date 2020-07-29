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
}

void removeNumber(double*& arrayPtr, double number, int& size)
{
}
