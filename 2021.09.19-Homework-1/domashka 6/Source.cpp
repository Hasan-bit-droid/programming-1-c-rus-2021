#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	cout << (n / 2 + 1) * 2 << endl; // первый способ
	cout << n + (2 - n % 2); // второй способ
	return 0;
}