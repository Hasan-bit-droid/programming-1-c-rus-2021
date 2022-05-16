#pragma once
#include <iostream>
class IntArray
{
private:
    int* data;
    int capacity;
    int length;

    void expand(int addLength)
    {
        if (length + addLength <= capacity)
        {
            for (int i = length; i < length + addLength; ++i)
            {
                data[i] = 0;
            }
            length += addLength;
        }
        else
        {
            length += addLength;
            capacity = std::max(2 * capacity, length);
            int* tmp = new int[capacity];
            for (int i = 0; i < capacity; ++i)
            {
                if (i < length - addLength)
                {
                    tmp[i] = data[i];
                }
                else
                {
                    tmp[i] = 0;
                }
            }
            delete[] data;
            data = tmp;
        }

    }

public:
    IntArray();
    IntArray(int* data, int capacity, int length);
    IntArray(IntArray& arr);
    ~IntArray();

    int getData(int i);
    void setData(int i, int t);

    IntArray& operator=(const IntArray& arr);
    friend bool operator==(IntArray& arr1, IntArray& arr2);
    friend void operator+=(IntArray& arr, int element); //добавить элемент в конец массива
    //оператор сложения двух массивов
    friend IntArray operator+(IntArray& arr1, IntArray& arr2);

    //оператор вывода массива в поток
    friend std::ostream& operator<<(std::ostream& stream, const IntArray& arr);
};