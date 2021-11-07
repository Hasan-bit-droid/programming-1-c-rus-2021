#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	bool a = true;
	bool b = false;
	bool c = false;
	c = a || b;
	c = a && b;
	c = a == b;
	c = a != b;
	c = a ^ b;
	c = !a;

	return EXIT_SUCCESS;
}