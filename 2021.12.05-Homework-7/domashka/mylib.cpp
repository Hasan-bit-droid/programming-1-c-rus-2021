#include"mylib.h"

using namespace std;

int k = 0;
int f(int n)
{
	if (n == 1)
	{
		int count = k;
		k = 0;
		return count;
	}
	k++;
	return (n % 2 == 0 ? f(n / 2) : f(3 * n + 1));
}
void round(int r)
{
	for (double i = 0; i <= 2 * r; i++)
	{
		int h = 0;
		h = cos(asin(i / r - 1)) * r;
		for (int j = 0; j <= 2 * r; j++)
		{
			cout << (j == r - h ? "*" : (j == r + h ? " *" : "  "));
		}
		cout << endl;
	}
}