#include <iostream>

#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;

	if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	if (a * d == b * c && (a != 0) && (b != 0))
	{
		cout << "NO" << endl;
	}
	if (b % a == 0 && a * d != b * c)
	{
		cout << -b / a << endl;
	}
	return 0;
}