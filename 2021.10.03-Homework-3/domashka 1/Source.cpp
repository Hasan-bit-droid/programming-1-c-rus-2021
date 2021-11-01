#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int fact = 1;
	for (int i = 2; i <= n; ++i)
	{
		fact *= i;
	}
	cout << fact;
	return EXIT_SUCCESS;
}