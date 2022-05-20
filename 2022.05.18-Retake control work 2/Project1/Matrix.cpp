#include "Matrix.h"

using namespace std;



    //Заполнение матрицы
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

    //Вывод матрицы
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
                data[ i ][ j ] = ob.data[ i ][ j ];
            }
        }
    }

    //Перегрузка оператора присваивания
    Matrix&Matrix::operator=(const Matrix& ob)
    {
        if (n != ob.n)
        {
            // освобождение памяти в левом операнде
            for (int i = 0; i < n; i++)
                delete[] data[i];
            delete[] data;
            // выделение памяти в левом операнде
            n = ob.n;
            double** data = new double* [n];
            for (int i = 0; i < n; i++)
                data[i] = new double[n];
        }
        //Копирование данных правого операнда в левый
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                data[ i ][ j ] = ob.data[ i ][ j ];
        return *this;
    }

    //Перегрузка оператора вычитания
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

    //Перегрузка оператора вычитания
    Matrix operator-(Matrix& left, Matrix& right)
    {
        if (left.n != right.n)
            cout << "\nМатричные размеры не совпадают\n";

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


    //Перегрузка оператора смены знака
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

