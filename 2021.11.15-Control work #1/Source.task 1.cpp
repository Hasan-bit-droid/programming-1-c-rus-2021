<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;
	int d = 0;
	cin >> k;
	if (0 <= n <= 10000 & 0 <= m <= 10000 & 1 <= k <= 10000)
	{
		for (int i = 1; i <= k; ++i)
		{
			cin >> n >> m;
			d = 19 * m + (n + 239) * (n + 366) / 2;
			cout << d;
		}
	}
	
	return EXIT_SUCCESS;
=======
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;
	int d = 0;
	cin >> k;
	if (0 <= n <= 10000 & 0 <= m <= 10000 & 1 <= k <= 10000)
	{
		for (int i = 1; i <= k; ++i)
		{
			cin >> n >> m;
			d = 19 * m + (n + 239) * (n + 366) / 2;
			cout << d;
		}
	}
	
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}