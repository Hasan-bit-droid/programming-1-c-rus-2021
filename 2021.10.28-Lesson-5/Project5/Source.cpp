#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	float f = 5.25f;
	int value = *((int*)&f);
	// вывести float побитого
	for (int i = 0; i < sizeof(int) * 8; ++i)
	{
		int currentBit = (sizeof(int) * 8 - 1 - i);
		int bitMask = 1 << currentBit;
		int bit = value & bitMask;
		bit = bit >> currentBit;
		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}