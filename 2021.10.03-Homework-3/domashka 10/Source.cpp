#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int i = 0;
	while (i * i < a)
	{
		++i;
	}
	for (; i * i <= b; ++i)
	{
		cout << i * i << " ";
	}
	return EXIT_SUCCESS;
}
