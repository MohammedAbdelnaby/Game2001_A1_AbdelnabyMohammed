#include <iostream>
#include "Array.h"
#include "UnorderedArray.h"
#include "OrderedArray.h"
using namespace std;


int main()
{
	OrderedArray<int> array(3);
	UnorderedArray<int> array2(3);

	array.push(89);
	array.push(34);
	array.push(45);
	for (int i = 0; i < array.getSize(); i++)
	{
		cout << array[i] << ", ";
	}
	cout << endl;
	cout << "now checking for duplicate data" << endl;
	array2.setDuplicateData(true);

	array2.push(34);
	array2.push(12);
	array2.push(100);
	for (int i = 0; i < array2.getSize(); i++)
	{
		cout << array2[i] << ", ";
	}
	array2.push(100);

	cout << "now checking for epanding growth" << endl;
	array.push(200);
	cout << array.getGrowSize() << endl;
	array.push(0);
	cout << array.getGrowSize() << endl;
	array.push(450);
	cout << array.getGrowSize() << endl;
	array.push(200);
	cout << array.getGrowSize() << endl;

	return 0;
}