#include <iostream>

using namespace std;
 
int main() 
 {
     int k = 0;
     int m = 0;
     int n = 0;
     
     cin >> k >> m >> n;
    
     if (k >= n)  //���� ��� ������� ���������� �� ����������,�� �� ����� �� 1 ���
     {
       cout << n * 2 * m;
     }
     else  // ����� ����� n/k ���
     {
         cout << (k * 2 * m) * n / k;
     }
     return 0;
}