#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;
	if (k % 4 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}