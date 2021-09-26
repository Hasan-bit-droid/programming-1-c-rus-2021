#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;
	cin >> x >> y ;
	if (1 <= x <= M <= 109 && 1 <= y <= N <= 109)
	{
		cout << x + 1 << ";" <<  y << endl;
		cout << x << ";" << y + 1 << endl;
		cout << x - 1 << ";" << y << endl;
		cout << x << ";" << y - 1 ;
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}