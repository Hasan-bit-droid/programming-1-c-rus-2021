<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[1000] = { 0 };
	int n = 0;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum = arr[0] + arr[n - 1] + ((arr[1] > arr[n - 2]) ? arr[1] : arr[n - 2]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (arr[i - 1] + arr[i] + arr[i + 1] > sum)
		{
			sum = arr[i - 1] + arr[i] + arr[i + 1];
		}
	}
	cout << sum << endl;
	return EXIT_SUCCESS;
=======
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[1000] = { 0 };
	int n = 0;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum = arr[0] + arr[n - 1] + ((arr[1] > arr[n - 2]) ? arr[1] : arr[n - 2]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (arr[i - 1] + arr[i] + arr[i + 1] > sum)
		{
			sum = arr[i - 1] + arr[i] + arr[i + 1];
		}
	}
	cout << sum << endl;
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}