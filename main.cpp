#include "Array.h"

int main()
{
	Array arr(10);
	arr.setValue(5);
	int size1 = arr.getSize();
	std::cout << "getSize =" << size1 << std::endl;
	int size2 = arr.getElemSize();
	std::cout << "getElemSize =" << size2 << std::endl;
	arr.showElements();
	arr.expandArray(50);
	size1 = arr.getSize();
	std::cout << "getSize =" << size1 << std::endl;
	size2 = arr.getElemSize();
	std::cout << "getElemSize =" << size2 << std::endl;
	int arr2[] = {1,2,3,4,5,6,7,8,9};
	arr.setArray(arr2, 9);
	size2 = arr.getElemSize();
	std::cout << "****************************";
	std::cout << "getElemSize =" << size2 << std::endl;
	arr.showElements();

	return 0;
}