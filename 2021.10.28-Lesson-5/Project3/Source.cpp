#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	float varFloat = 0;
	varFloat = 5.2f;
	varFloat = 5.2;

	double varDouble = 0;
	varDouble = 5.2;
	varDouble = (double)5.2f;

	int varInt = 0;
	varInt = (int)varDouble;
	for (int i = 0; i < 256; ++i)
	{
		cout << i << "->" << (char)i << "\t";
	}
	cout << endl;
	return EXIT_SUCCESS;
}