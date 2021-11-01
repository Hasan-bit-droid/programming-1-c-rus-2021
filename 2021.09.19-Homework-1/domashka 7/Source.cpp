#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int c = 0;
	int b = 0;
	
	cout << "Print a: ";
	cin >> a ;
	cout << "Print b: ";
	cin >> b;

	c = a;
	a = b;
	b = c;
	cout << "a = " << a << " " << "b = " << b << endl;
	return 0;
}