#include <iostream>

using namespace std;

int main()
{
	int x = 0;

	int x2 = x * x;
	
	int res = x2 * (x2 + 2 + 1) + x + 1;
	
	cin >> x ;
	
	cout << res;
	
	return 0;
}