#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream fin("in.text");

	int a = 0;
	int sum = 0;

	while (!fin.eof())
	{
		fin >> a;
		sum += a;
	}
	cout << sum;

	fin.close();
	return EXIT_SUCCESS;
}