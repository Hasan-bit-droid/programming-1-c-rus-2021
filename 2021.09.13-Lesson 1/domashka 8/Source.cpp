#include <iostream>

using namespace std;

int main()
{
	int H, M, S, h, m, s;
	cin >> H >> M >> S >> h >> m >> s;
	H = H * 60 * 60 + M * 60 + S;
	h = h * 60 * 60 + m * 60 + s;
	cout << h - H;
	
	return 0;
}