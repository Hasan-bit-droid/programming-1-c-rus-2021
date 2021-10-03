#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 1;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		m *= 2;
	}
	cout << m << endl;

	return EXIT_SUCCESS;
}