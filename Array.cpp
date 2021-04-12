#include "Array.h"

Array::Array(int ArraySize)
{
	if (ArraySize > 0)
	{
		pArray = new int[ArraySize];
		this->ArraySize = ArraySize;
		this->ArrayTail = 0;
		this->ArrayStep = 1;
	}
}

void Array::showElements()
{
	std::cout << "Array elements ***************** " << std::endl;
	for (int i = 0; i < ArrayTail; i++)
	{
		std::cout << pArray[i] << std::endl;
	}
	std::cout << "*********************************" << std::endl;
}

void Array::expandArray(int size)
{
	if (size < ArraySize)
		return;
	int* new_pArray = new int[size + this->ArraySize];
	memcpy(new_pArray, pArray, ArraySize * sizeof(int));
	delete[] pArray;
	ArraySize += size;
	pArray = new_pArray;
}

int Array::getSize()
{
	return this->ArraySize;
}

int Array::getElemSize()
{
	return this->ArrayTail;
}

void Array::setValue(int val)
{
	pArray[this->ArrayTail] = val;
	this->ArrayTail++;
}

void Array::setArray(int* pArr, int size)
{
	this->ArrayStep = size;
	for (int i = 0; i < ArrayStep; i++)
	{
		this->pArray[this->ArrayTail] = pArr[i];
		this->ArrayTail++;
	}
}

Array::~Array()
{
	delete[] pArray;
}

