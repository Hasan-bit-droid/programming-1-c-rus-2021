#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	
	int n = 0;
	
	int m = 0;
	
	int k = 0;
	
	cin >> k >> n >> m;
	
	if (k % n == 0 || k % m == 0 && n <= k < n * m)
	
	{
		cout << "YES";
	}
	
	else
	
	{
		cout << "NO";
	}
	
	return EXIT_SUCCESS;
}