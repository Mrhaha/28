 ///
 /// @file    big_little.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-13 09:52:24
 ///
 
#include <iostream>
using namespace std;


bool isLittleEndian()
{
	union Example
	{
		int number;
		char ch;
	};

	union Example e;
	e.number = 1;
	return e.ch;
}
 
int test0(void)
{
	int number = 1;
	char * p = (char *)&number;
	//cout << "*p = " << *p << endl;
	printf("*p = %d\n", *p);

	return 0;
}

int main()
{
	cout << "isLittleEndian = " << isLittleEndian() << endl;
	return 0;
}
