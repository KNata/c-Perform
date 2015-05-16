#include <iostream>
#include <stdlib.h>
#include <cstring>

#include "Array.h"


using namespace std;

int main (void)
{
	
	const int size = 4;
	Array<4 , int> intArray(4);
	intArray[0] = 4;
	intArray[1] = 2;
	intArray[2] = 5;
	intArray[3] = 60;

/*	Array<size, double> doubleArray(size);
	doubleArray[0] = 9.0;
	doubleArray[1] = 24.6;
	doubleArray[2] = 3.0;
	doubleArray[3] = 60.3;

	Array<size, char> charArray(size);
	charArray[0] = 'a';
	charArray[1] = 'v';
	charArray[2] = 'k';
	charArray[3] = 's';
*/
	try {
		cout<<intArray[6];
	}
	catch(const Array<4, int>::BadArray& badArr)
	{
		cerr<<"Non existing number "<<endl;
	}

	system("Pause");
	return 0;
}