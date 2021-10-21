#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int n = 10;
	int a[n]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 90 + 10; 
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	int min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << "MIN = " << min << endl;

	return EXIT_SUCCESS;
}
