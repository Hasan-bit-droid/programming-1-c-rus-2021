#include "Matrix.h"

using namespace std;


Matrix::Matrix(double** data, int count)
{
    double** data = new double* [n];
    for (int i = 0; i < n; ++i)
        data[i] = new double[n];
    n = count;
}

Matrix::Matrix()
{
    n = 4;   
    double** data = new double* [n];
    for (int i = 0; i < n; i++)
        data[i] = new double[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            data[i][j] = 0;
        }
    }
    cout << this << endl;
}

Matrix::~Matrix()
{
    for (int i = 0; i < n; ++i)
    {
        delete[] data[i];
    }
    delete[] data;
}

    void Matrix:: setMatrix()
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                data[ i ][ j ] = (double)rand();
            }
        }
    }

    void Matrix:: getMatrix()
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cout << setw(7) << data[ i ][ j ];
            } 
            cout << endl;
        } cout << endl;
    }


    Matrix::Matrix(const Matrix& ob)
    {
        cout << "\nКопирующий конструктор\n";
        n = ob.n;
        double** data = new double* [n];
        for (int i = 0; i < n; ++i)
        {
            data[i] = new double[n];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                data[i][j] = ob.data[i][j];
            }
        }
    }

    Matrix&Matrix::operator=(const Matrix& ob)
    {
        if (n != ob.n)
        {
            for (int i = 0; i < n; i++)
                delete[] data[i];
            delete[] data;
            n = ob.n;
            double** data = new double* [n];
            for (int i = 0; i < n; i++)
                data[i] = new double[n];
        }  
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                data[ i ][ j ] = ob.data[ i ][ j ];
        return *this;
    }

    Matrix Matrix::operator-(const Matrix& ob)
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                data[i][j] = data[i][j] - ob.data[i][j];
            }
        }
        return *this;
    }

 
    Matrix Matrix::operator-() const
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                data[i][j] = -data[i][j];
            }
        }
        return *this;
    }

    void Matrix::print(double** data, int n, const char pre[]) {
        std::cout << pre;
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j)  
            {
                std::cout << data[i][j] << ' ';
            }
        std:cout << std::endl;
        }
    }

    Matrix Matrix::mult(int lambda)
    {
        double** data = new double* [n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                data[i][j] = lambda * data[i][j];
            }
        }
        return;
    }

