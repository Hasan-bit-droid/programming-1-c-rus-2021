#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	cout << (abs(a + b) + abs(a - b)) / 2;
	cout << (a / b * a + b / a * b) / (a % b + b % a);
	return EXIT_SUCCESS;
}