#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian"); 
	int x = 0; 
	int n = 0;
	int y = 0; 
	int count = 0; 
	char c; 
	cout « "Введите значение n:\nn = "; 
	cin » n; 
	system("cls"); 
	x = rand() % n; 
	for (int i = 0; i < log(n) / log(2); i++) 
	{
		cout « "Введите предположение в формате " ? y":\n"; 
		cin » c » y; 
		system("cls"); 
		cout « c « ' ' « y « "\n\n"; 
		if (x < y) cout « "<\n"; 
		if (x >= y) cout « ">=\n"; 
		if (y == x - 1) count++; 
		if (y == x + 1) count++; 
		if (y == x) count = +2; 
		if (count == 2) 
		{ 
			cout « "_________________________\n"; 
			cout « "! " « x « "\n"; 
			break; 
		} 
	} 
	if (count < 2) 
	{ 
		system("cls"); 
		cout « "Wrong answer"; 
	} 
	cout « endl;
	return EXIT_SUCCESS;
}