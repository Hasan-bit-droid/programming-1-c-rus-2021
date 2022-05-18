#include<iostream>
#include"Matrix.h"

using namespace std;

int main(int argc, char* argv[])
{
	Matrix ma1(3, 1);
	Matrix ma2(5, -2);
	cout << ma1 * ma2 << endl;
	cout << ma1 / ma2 << endl;
	cout << 1 / (3 * ma1 + 4 * ma2) << endl;
	cout << ma1.det() << endl;
	cout << ma1.reverse() << endl;
	
	return EXIT_SUCCESS;
}