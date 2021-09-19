#include <iostream>
using namespace std;
int main()
{
	int s, v, t;
	cin >> v >> t;
	s = (v * t % 109 + 109) % 109;
	cout << s;
	return 0;
}
