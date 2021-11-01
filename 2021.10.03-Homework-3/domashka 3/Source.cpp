#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	for (int i = 1, row = 1, count = 0; i <= n; ++i)
	{
		cout << setw(2) << i;
		++count;
		if (count == row)
		{
			cout << endl;
			count = 0;
			++row;
		}
		else
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}