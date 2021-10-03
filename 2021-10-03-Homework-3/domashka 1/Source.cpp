#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 1;
	int f = 1;
	cout << "N: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		f = f * i;
		cout << "Fact=" << f << endl;
	}
	
	return EXIT_SUCCESS;
}