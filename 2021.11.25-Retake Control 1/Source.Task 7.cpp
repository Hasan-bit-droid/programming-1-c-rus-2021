<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;

	if ((x1 % 2 + y1 % 2) == (x2 % 2 + y2 % 2) || x1 == y1 && x2 == y2 || x1 % 2 == y1 % 2 && x2 % 2 == y2 % 2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
=======
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;

	if ((x1 % 2 + y1 % 2) == (x2 % 2 + y2 % 2) || x1 == y1 && x2 == y2 || x1 % 2 == y1 % 2 && x2 % 2 == y2 % 2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
>>>>>>> 96ef0ba26f0e24d8a9f62888b1436c1c4c558e10
}