#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	if (a * a + b * b == c * c)
	{
		cout << "right";
	}
	else
	{
		if (a * a + b * b < c * c && a + b > c)
		{
			cout << "acute";
		}
		else
		{
			if (a * a + b * b > c * c && a + b > c)
			{
				cout << "obtuse";
			}
			else
			{
				if (a + b <= c)
				{
					cout << "impossible";
				}
			}
		}
	}
	return EXIT_SUCCESS;
}