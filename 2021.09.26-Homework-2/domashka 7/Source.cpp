#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	
	cin >> n >> m >> k;
	
	if (n <= k < n * m && k % n == 0 || k % m == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}