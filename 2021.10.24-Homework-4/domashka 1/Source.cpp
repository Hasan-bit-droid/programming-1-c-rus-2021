#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;
	int product = 1;
	int minindex = 0;
	int a[100] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "ARRAY: " << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}
	cout << "EVEN: " << endl;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << endl;
		}
	}
	cout << "SUM: ";

	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	cout << sum << endl;

	cout << "PRODUCT OF NEGATIVE: ";

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			product *= a[i];
		}
	}
	cout << product << endl;

	int min = a[0];

	cout << "FIRST MIN INDEX: ";

	for (int i = 1; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
			minindex = i;
		}
	}
	cout << minindex << endl;

	int max = a[0];

	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	int secmax = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < max)
		{
			secmax = a[i];
			break;
		}
	}
	cout << "SECOND MAX: ";

	for (int i = 1; i < n; ++i)
	{
		if (a[i] > secmax && a[i] < max)
		{
			secmax = a[i];
		}
	}
	cout << secmax << endl;

	cout << "REVERSE: " << endl;

	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << endl;
	}

	cout << "ODD INDEXES:" << endl;

	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << endl;
	}
	return EXIT_SUCCESS;
}