#pragma once
#include<iostream>
#include<ostream>
#include<cmath>
#include <iomanip>



class Matrix
{
private:
    long long n;
    double** data;
public:
    Matrix(double** data, int count) {
        double** data = new double*[n];
        for (int i = 0; i < n; ++i)
            data[i] = new double[n];
        n = count;
    }
    //конструктор по умолчанию
    Matrix()
    {
        //Матрица с размером по умолчанию
        n = 4; 

        //Выделение памяти (с помощью new)
        double** data = new double* [n];
        for (int i = 0; i < n; i++)
            data[i] = new double[n];

        //Обнуляем матрицу
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                data[i][j] = 0;
            }
        }
        cout << this << endl;
    }

    ~Matrix()
    {
        for (int i = 0; i < n; ++i)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    void setMatrix();
    void getMatrix();
    Matrix(const Matrix& ob);
   
    Matrix& operator=(const Matrix& ob);
    Matrix operator-(const Matrix& ob);
    friend Matrix operator-(Matrix& left, Matrix& right);
     
    Matrix operator-() const;
      

    void print(double** data, int n, const char pre[]);

    Matrix mult(int lambda);

    Matrix& operator=(const Matrix& ob);
    bool operator==(const Matrix& ob);
    
    friend Matrix operator+(const Matrix& M1, const Matrix& M2);

    friend Matrix operator-(const Matrix& M1, const Matrix& M2);
    friend Matrix operator*(const Matrix& M1, const Matrix& M2);
   
   
   
    Matrix operator-();
    Matrix det();
    Matrix reverse();
};







    
