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

    //Матрицы M1
    M1.setMatrix(); //Заполнение матрицы M1
    cout << "Матрица М1 New\n";
    M1.getMatrix(); //Вывод матрицы M1

    //Матрицы M2
    M2.setMatrix(); //Заполнение матрицы M2
    cout << "Матрица М2 New\n";
    M2.getMatrix(); //Вывод матрицы M2

    //Матрицы M3
    cout << "Матрица М3 New\n";
    M3.getMatrix(); //Вывод матрицы M3 (Пустая)

    cout << "Присваивание\n";
    M3 = M1; M3.getMatrix(); M1.getMatrix();

    cout << "Вычитание\n";
    M3 = M3 - M2 - M1 - M3; M1.getMatrix(); M2.getMatrix(); M3.getMatrix();

    cout << endl;
    system("pause");

	return EXIT_SUCCESS;
}