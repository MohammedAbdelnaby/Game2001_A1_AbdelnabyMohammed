#include <iostream>
#include "Array.h"
#include "UnorderedArray.h"
#include "OrderedArray.h"
using namespace std;


int main()
{
	OrderedArry<int> array(3);

	array.push(2);
	array.push(1);
	array.setDuplicateData(true);
	array.push(1);
	for (int i = 0; i < array.getSize(); i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}