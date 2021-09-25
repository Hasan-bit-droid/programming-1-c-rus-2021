#include <iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int K = 0;
	
	cin >> K ;
	
	if (K % 4 == 0 )
	
	{
		cout << "YES";
	}
	
	else
	
	{
		cout << "NO";
	}
	
	return EXIT_SUCCESS;
}