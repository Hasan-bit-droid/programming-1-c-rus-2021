#include<iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList list(5);
	cout << list << endl;
	list.pushend(5);
	cout << list << endl;
	list.pushend(4);
	list.pushend(3);
	list.pushend(2);
	list.pushend(1);
	cout << list << endl;
	list.pushend(0);
	cout << list << endl;
	cout << list.extractend();
	cout << list << endl;

	list[1] = 1;
	cout << list << endl;
	list[5] = 10;
	cout << list << endl;
	list[16] = 20;
	cout << list << endl;
	list[-2] = 20;

	cout << list << endl;
	cout << list.extractend() << endl;
	cout << list << endl;
	cout << list.extractbegin() << endl;
	cout << list << endl;
	list.insert(200, 2);
	cout << list << endl;
	cout << list.extract(2) << endl;
	cout << list << endl;
	list.sort();
	cout << list << endl;
	return 0;
}