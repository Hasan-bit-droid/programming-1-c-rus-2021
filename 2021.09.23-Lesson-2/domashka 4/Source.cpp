#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	cin >> a >> b >> c >> d;
	if (a == 0 && b == 0 && c != 0 || c == 0 && d == 0 || d != 0)
	{
		cout << (a*x +b) / (c*x +d);
	}
	else
	{
		if (c == 0 && d == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << "INF";
		}
	}

	return EXIT_SUCCESS;
}