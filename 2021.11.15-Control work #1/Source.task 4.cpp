#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int min = 0;
	int max = 0;

	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 1; i < N; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		cout << arr[i] << " ";
	}
	return EXIT_SUCCESS;
}