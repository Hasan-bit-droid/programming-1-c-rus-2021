#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    Complex z1(3, 1);
    Complex z2(5, -2);
    cout << z1 * z2 << endl;
    cout << z1 / z2 << endl;
    cout << 3 * z1 + 4 * z2 << endl;
    cout << z1.abs() << endl; //������ �����
    cout << z2.arg() << endl; //�������� �����
    cout << z1.reverse() << endl; //�������� �����
    z1.printroots(5, cout); //����� � ����� cout ������� ������ ����� �������
    return 0;
}
