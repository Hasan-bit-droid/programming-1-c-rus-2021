#include "Matrix.h"

using namespace std;



    //���������� �������
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

    //����� �������
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


    Matrix:: Matrix(const Matrix& ob)
    {
        cout << "\n���������� �����������\n";
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
                data[ i ][ j ] = ob.data[ i ][ j ];
            }
        }
    }

    //���������� ��������� ������������
    Matrix&Matrix::operator=(const Matrix& ob)
    {
        if (n != ob.n)
        {
            // ������������ ������ � ����� ��������
            for (int i = 0; i < n; i++)
                delete[] data[i];
            delete[] data;
            // ��������� ������ � ����� ��������
            n = ob.n;
            double** data = new double* [n];
            for (int i = 0; i < n; i++)
                data[i] = new double[n];
        }
        //����������� ������ ������� �������� � �����
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                data[ i ][ j ] = ob.data[ i ][ j ];
        return *this;
    }

    //���������� ��������� ���������
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

    //���������� ��������� ���������
    Matrix operator-(Matrix& left, Matrix& right)
    {
        if (left.n != right.n)
            cout << "\n��������� ������� �� ���������\n";

        Matrix Matrix:: result();
        {
            for (int i = 0; i < left.n; i++)
            {
                for (int j = 0; j < left.n; j++)
                    result.data[i][j] = left.data[i][j] - right.data[i][j];
            }
        }
        return result;
    }


    //���������� ��������� ����� �����
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

