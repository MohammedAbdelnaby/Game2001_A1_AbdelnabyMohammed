#include <iostream>
#include "UnorderedArray.h"
#include "OrderedArray.h"
using namespace std;


int main()
{
	OrderedArry<int> array(3);
	array.push(3);
	array.push(53);
	array.push(83);
	array.push(23);
	array.push(82);

	array[2] = 112;
	array.pop();
	array.remove(2);

	for (int i = 0; i < array.getSize(); i++)
	{
		cout << array[i] << endl;
	}

	cout << array.search(23) << endl;
	return 0;
}