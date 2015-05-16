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