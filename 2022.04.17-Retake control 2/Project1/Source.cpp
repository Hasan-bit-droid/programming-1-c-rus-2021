#include <iostream>
#include "ArrayList.h"

using namespace std;
int main()
{
    int* tmp = new int[2];
    tmp[0] = 2;
    tmp[1] = -1;
    IntArray arr1(tmp, 2, 2), arr2;
    delete[] tmp;
    tmp = nullptr;

    for (int i = 0; i < 3; ++i)
    {
        arr2 += i;
    }

    cout << arr1 + arr2 << endl;

    IntArray arrClone(arr1);
    arrClone = arr2;
    if (arrClone == arr2)
    {
        cout << arrClone << endl;
    }
}