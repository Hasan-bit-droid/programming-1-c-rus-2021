#include<iostream>
#include"Matrix.h"

using namespace std;

int main(int argc, char* argv[])
{
    srand((unsigned)time(NULL));
    setlocale(0, "");

    Matrix M1;
    Matrix M2;
    Matrix M3;

    //������� M1
    M1.setMatrix(); //���������� ������� M1
    cout << "������� �1 New\n";
    M1.getMatrix(); //����� ������� M1

    //������� M2
    M2.setMatrix(); //���������� ������� M2
    cout << "������� �2 New\n";
    M2.getMatrix(); //����� ������� M2

    //������� M3
    cout << "������� �3 New\n";
    M3.getMatrix(); //����� ������� M3 (������)

    cout << "������������\n";
    M3 = M1; M3.getMatrix(); M1.getMatrix();

    cout << "���������\n";
    M3 = M3 - M2 - M1 - M3; M1.getMatrix(); M2.getMatrix(); M3.getMatrix();

    cout << endl;
    system("pause");

	return EXIT_SUCCESS;
}