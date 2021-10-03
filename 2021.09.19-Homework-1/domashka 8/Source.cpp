#include <iostream>

using namespace std;

int main()
{
	int H = 0;

	int M = 0;
	
	int S = 0;
	
	int h = 0;
	
	int m = 0;
	
	int s = 0;

	cin >> H >> M >> S >> h >> m >> s;
	
	H = H * 60 * 60 + M * 60 + S;
	
	h = h * 60 * 60 + m * 60 + s;
	
	cout << h - H;
	
	return 0;
}