<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[10000] = { 0 };
	int max =arr[ 0 ];
	int min =arr[ 0 ];
	
	for (int i = 0; i < 10000; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		cout << max << endl;
		if (min > arr[i])
		{
			min = arr[i];
		}
		cout << min << endl;
	}
	cout << max + min << endl;
	return EXIT_SUCCESS;
=======
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[10000] = { 0 };
	int max =arr[ 0 ];
	int min =arr[ 0 ];
	
	for (int i = 0; i < 10000; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		cout << max << endl;
		if (min > arr[i])
		{
			min = arr[i];
		}
		cout << min << endl;
	}
	cout << max + min << endl;
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}