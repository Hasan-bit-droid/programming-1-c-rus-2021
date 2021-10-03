#include <iostream>

using namespace std;

int main()
{
	int s = 0;
	
	int v = 0;
	
	int t = 0;

	cin >> v >> t;
	
	s = (v * t % 109 + 109) % 109;
	
	cout << s;
	
	return 0;
}
