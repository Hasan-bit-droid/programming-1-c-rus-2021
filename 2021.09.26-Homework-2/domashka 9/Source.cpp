#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	
	cin >> M >> N >> x >> y;

	if (1 <= x <= M && 1 <= y <= N)
	{
		cout << x << ";" << y + 1 << endl;
		cout << x + 1 << ";" << y << endl;
		cout << x << ";" << y - 1 << endl;
		cout << x - 1 << ";" << y;
	}
	else
	{
		cout << "No";
	}
	return EXIT_SUCCESS;
}   