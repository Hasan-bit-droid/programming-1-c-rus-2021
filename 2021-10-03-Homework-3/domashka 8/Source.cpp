#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int x = 0;
		cin >> x;
		s += x;
	}
	cout << s;

	return EXIT_SUCCESS;
}