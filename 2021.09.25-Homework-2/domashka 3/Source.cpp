#include <iostream>

using namespace std;

int main() 
{
    int k = 0;
    int m = 0;
    int n = 0;
    
    cin >> k >> m >> n;
    
    if (k >= n)
    {
        cout << n * 2 * m;
    }
    else //если все котлеты помещаются на сковородку,то их жарим за 1 раз
    {
        cout << (k * 2 * m) * n / k; // иначе жарим n/k раз
    }
    return 0;
}