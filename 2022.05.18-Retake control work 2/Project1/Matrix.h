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
    Matrix();
    Matrix(int);
    Matrix(double** data, int count);
    ~Matrix();

    void setMatrix();
    void getMatrix();
    Matrix(const Matrix& ob);
   
    Matrix& operator=(const Matrix& ob);
    Matrix operator-(const Matrix& ob);
    Matrix operator-() const;
    Matrix mult(int lambda);

    void print(double** data, int n, const char pre[]);
    bool operator==(const Matrix& ob);
    
    friend Matrix operator+(const Matrix& M1, const Matrix& M2);
    friend Matrix operator-(const Matrix& M1, const Matrix& M2);
    friend Matrix operator*(const Matrix& M1, const Matrix& M2);
      
    Matrix operator-();
    Matrix det();
    Matrix reverse();
};







    
