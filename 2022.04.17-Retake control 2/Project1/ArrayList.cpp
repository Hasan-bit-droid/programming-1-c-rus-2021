#include "ArrayList.h"
#include <iostream>

IntArray::IntArray()
{
    this->data = new int[0];
    this->capacity = 0;
    this->length = 0;
}
IntArray::IntArray(int* data, int capacity, int length)
{
    this->data = new int[capacity];
    this->capacity = capacity;
    this->length = length;
    for (int i = 0; i < length; ++i)
    {
        this->data[i] = data[i];
    }
}
IntArray::IntArray(IntArray& arr)
{
    this->capacity = arr.capacity;
    this->length = arr.length;
    this->data = new int[capacity];
    for (int i = 0; i < length; ++i)
    {
        this->data[i] = arr.data[i];
    }
}
IntArray::~IntArray()
{
    length = 0;
    capacity = 0;
    delete[] this->data;
    this->data = nullptr;
}

int IntArray::getData(int i)
{
    return this->data[i];
}

void IntArray::setData(int i, int t)
{
    this->data[i] = t;
}

IntArray& IntArray::operator=(const IntArray& arr)
{
    this->capacity = arr.capacity;
    this->length = arr.length;
    delete[] this->data;
    this->data = new int[capacity];
    for (int i = 0; i < length; ++i)
    {
        this->data[i] = arr.data[i];
    }
    return *this;
}


bool operator==(IntArray& arr1, IntArray& arr2)
{
    if (arr1.length != arr2.length)
    {
        return false;
    }
    for (int i = 0; i < arr1.length; ++i)
    {
        if (arr1.data[i] != arr2.data[i])
        {
            return false;
        }
    }
    return true;
}

void operator+=(IntArray& arr, int element)
{
    arr.expand(1);
    arr.data[arr.length - 1] = element;
}

IntArray operator+(IntArray& arr1, IntArray& arr2)
{
    int* tmp = new int[arr1.length + arr2.length];
    for (int i = 0; i < arr1.length + arr2.length; ++i)
    {
        if (i < arr1.length)
        {
            tmp[i] = arr1.data[i];
        }
        else
        {
            tmp[i] = arr2.data[i - arr1.length];
        }
    }
    IntArray ans(tmp, arr1.length + arr2.length, arr1.length + arr2.length);
    delete[] tmp;
    tmp = nullptr;
    return ans;
}

std::ostream& operator<<(std::ostream& stream, const IntArray& arr)
{
    for (int i = 0; i < arr.length; ++i)
    {
        stream << arr.data[i] << " ";
    }
    return stream;
}