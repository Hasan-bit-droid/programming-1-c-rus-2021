#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	short vatshort = 0;
	int varInt = 0;
	long varLong = 0;
	long long varLongLong = 0;
	cout << "SHORT : " << sizeof(short) << endl;
	cout << "INT : " << sizeof(int) << endl;
	cout << "LONG : " << sizeof(long) << endl;
	cout << "LONG LONG : " << sizeof(long long) << endl;

	int a = 5;
	a = a << 2;
	a = 5;
	a = a >> 2;

	unsigned short varUShort = 0;
	unsigned int varUInt = 0;
	unsigned long varULong = 0;
	unsigned long long  varULongLong = 0;

	return EXIT_SUCCESS;
}