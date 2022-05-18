#include "Matrix.h"

using namespace std;

// матрица NxM, если E, то единичная, иначе нулевая
Matrix(int N, int M, bool E = 0)
{
    n = N;
    m = M;
    a = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new double[m];
        for (int j = 0; j < m; ++j)
            a[i][j] = (i == j) * E;
    }
}
// матрица из элементов array, если horizontal, то  горизонтальная, иначе вертикальная
Matrix(double array[], int N, bool horizontal)
{
    if (horizontal)
    {
        n = 1;
        m = N;
        a = new double* [1];
        a[0] = new double[m];
        for (int i = 0; i < m; ++i)
            a[0][i] = array[i];
    }
    else
    {
        n = N;
        m = 1;
        a = new double* [n];
        for (int i = 0; i < n; ++i)
        {
            a[i] = new double[1];
            a[i][0] = array[i];
        }
    }
}
int N()
{
    return n;
}
int M()
{
    return m;
}
double* operator [] (int index)
{
    return getRow(index);
}
// получить строку матрицы
double* getRow(int index)
{
    if (index >= 0 && index < n)
        return a[index];
    return 0;
}
// получить столбец матрицы
double* getColumn(int index)
{
    if (index < 0 || index >= m)
        return 0;
    double* c = new double[n];
    for (int i = 0; i < n; ++i)
        c[i] = a[i][index];
    return c;
}
// поменять местами две строки
void swapRows(int index1, int index2)
{
    if (index1 < 0 || index2 < 0 || index1 >= n || index2 >= n)
        return;
    for (int i = 0; i < m; ++i)
        swap(a[index1][i], a[index2][i]);
}
// поменять местами два столбца
void swapColumns(int index1, int index2)
{
    if (index1 < 0 || index2 < 0 || index1 >= m || index2 >= m)
        return;
    for (int i = 0; i < n; ++i)
        swap(a[i][index1], a[i][index2]);
}
// приписывание матрицы b к текущей матрице справа
Matrix concateMatrix(Matrix& b)
{
    if (n != b.N())
        return Matrix();
    Matrix c = Matrix(n, m + b.M());
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            c[i][j] = a[i][j];
        for (int j = 0; j < b.M(); ++j)
            c[i][j + m] = b[i][j];
    }
    return c;
}
// удаление столбцов с index1 по index2
Matrix eraseColumns(int index1, int index2)
{
    Matrix c = Matrix(n, m - (index2 - index1 + 1));
    for (int j = 0; j < index1; ++j)
        for (int i = 0; i < n; ++i)
            c[i][j] = a[i][j];
    for (int j = index2 + 1; j < m; ++j)
        for (int i = 0; i < n; ++i)
            c[i][j - index2 - 1 + index1] = a[i][j];
    return c;
}

    // прочитать матрицу с консоли
    Matrix scanMatrix()
    {
        int n, m;
        scanf("%d%d", &n, &m);
        Matrix a = Matrix(n, m);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                scanf("%lf", &a[i][j]);
        return a;
    }

    // вывести матрицу на консоль
    void printMatrix(Matrix& a)
    {
        for (int i = 0; i < a.N(); ++i)
        {
            for (int j = 0; j < a.M(); ++j)
                printf("%5.3lf ", a[i][j]);
            puts("");
        }
    }

    // сложить две матрицы
    Matrix add(Matrix& a, Matrix& b)
    {
        if (a.N() != b.N() || a.M() != b.M())
            return Matrix();
        Matrix c = Matrix(a.N(), b.M());
        for (int i = 0; i < a.N(); ++i)
            for (int j = 0; j < a.M(); ++j)
                c[i][j] = a[i][j] + b[i][j];
        return c;
    }
    // умножение матрицы на число
    Matrix mul(Matrix& a, double k)
    {
        Matrix c = Matrix(a.N(), a.M());
        for (int i = 0; i < a.N(); ++i)
            for (int j = 0; j < a.M(); ++j)
                c[i][j] = a[i][j] * k;
        return c;
    }
    // умножение двух матриц
    Matrix mul(Matrix& a, Matrix& b)
    {
        if (a.M() != b.N())
            return Matrix();
        Matrix c = Matrix(a.N(), b.M());
        for (int i = 0; i < a.N(); ++i)
            for (int j = 0; j < b.M(); ++j)
                for (int k = 0; k < a.M(); ++k)
                    c[i][j] += a[i][k] * b[k][j];
        return c;
    }
    // транспонирование матрицы
    Matrix transp(Matrix& a)
    {
        Matrix c = Matrix(a.M(), a.N());
        for (int i = 0; i < a.N(); ++i)
            for (int j = 0; j < a.M(); ++j)
                c[j][i] = a[i][j];
        return c;
    }
