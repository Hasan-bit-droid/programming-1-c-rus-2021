#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int y = x*x*x*x + x*x*x + x*x + x +1;
	cout << y << endl;
	cout << 2 * y;
	return 0;
}