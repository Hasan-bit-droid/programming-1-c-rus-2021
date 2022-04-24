#include <iostream>
#include "Header.h"

int main() {
	BigInteger Z("100000000000007689970000");
	BigInteger F(9000);
	BigInteger D;
	D = Z + F;

	//D = Z / F;

	std::cout << "Z * F = " << D << std::endl;
    
	return 0;
}