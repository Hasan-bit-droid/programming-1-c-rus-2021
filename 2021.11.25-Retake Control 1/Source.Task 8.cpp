<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int D = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> m;
			D += m;
		}
		cout << D / 2;
	}
	
	return EXIT_SUCCESS;
=======
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int D = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> m;
			D += m;
		}
		cout << D / 2;
	}
	
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}