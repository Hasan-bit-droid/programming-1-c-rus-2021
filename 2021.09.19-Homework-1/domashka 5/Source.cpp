#include <iostream>

using namespace std;

int main()
{
	int n=0;
	cin >> n;
	int sum = (n / 100) + ((n / 10) % 10) + (n % 10);
	cout << sum << endl;
	return 0;
}