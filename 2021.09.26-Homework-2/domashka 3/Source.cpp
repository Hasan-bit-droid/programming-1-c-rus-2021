#include <iostream>

using namespace std;
 
int main() 
 {
     int k = 0;
     int m = 0;
     int n = 0;
     
     cin >> k >> m >> n;
    
     if (k >= n)  //если все котлеты помещаются на сковородку,то их жарим за 1 раз
     {
       cout << n * 2 * m;
     }
     else  // иначе жарим n/k раз
     {
         cout << (k * 2 * m) * n / k;
     }
     return 0;
}