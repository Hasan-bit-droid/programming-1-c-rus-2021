#pragma once
#include<iostream>
#include<ostream>
#include<cmath>
#include<stdio.h>


const double eps = 1e-9;

class Matrix
{
private:
    double** a;
    int n, m;
public:
    // матрица без элементов
    Matrix()
    {
        a = 0;
        n = 0;
        m = 0;
    }

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

    double* getRow(int index);
    double* getRow(int index);
    void swapRows(int index1, int index2);
    void swapColumns(int index1, int index2);
    Matrix concateMatrix(Matrix& b);
    Matrix eraseColumns(int index1, int index2);     
    Matrix scanMatrix();
    void printMatrix(Matrix& a);
    Matrix add(Matrix& a, Matrix& b);
    Matrix mul(Matrix& a, double k);
    Matrix mul(Matrix& a, Matrix& b);
    Matrix transp(Matrix& a);

    Matrix& operator=(const Matrix& matrix);
    bool operator==(const Matrix& matrix);
    bool operator>(const Matrix& matrix);
    bool operator>=(const Matrix& matrix);
    bool operator<(const Matrix& matrix);
    bool operator<=(const Matrix& matrix);

    friend Matrix operator+(const Matrix& ma1, const Matrix& ma2);
    friend Matrix operator+(const Matrix& fr, double summ);
    friend Matrix operator+(double summ, const Matrix& ma);

    friend Matrix operator-(const Matrix& ma1, const Matrix& ma2);
    friend Matrix operator-(const Matrix& ma, double summ);
    friend Matrix operator-(double summ, const Matrix& ma);

    friend Matrix operator*(const Matrix& ma1, const Matrix& ma2);
    friend Matrix operator*(const Matrix& ma, double summ);
    friend Matrix operator*(double summ, const Matrix& ma);

    friend Matrix operator/(const Matrix& ma1, const Matrix& ma2);
    friend Matrix operator/(const Matrix& ma, double summ);
    friend Matrix operator/(double summ, const Matrix& ma);
    friend Matrix powf( .N, const Matrix& ma);
    Matrix operator-();
    Matrix det();
    Matrix reverse();

    friend ostream& operator <<(ostream& stream, const Matrix& fr);
};







    
