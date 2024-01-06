#include "DoubleList.h"
#include <iostream>
#include <string>
using namespace std;
DoubleList::DoubleList(int size)
{
    this->size = size;
    array = new double[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = 0.0;
    }
}

DoubleList::DoubleList(int size, double value)
{
    this->size = size;
    array = new double[this->size];
    for (int i = 0; i < size; i++)
    {
        array[i] = value;
    }
}

DoubleList::~DoubleList()
{
    cout << "Memory has been cleared!" << endl;
    delete[] array;
}

void DoubleList::append(double value)
{
    double* bigArray = new double[size + 1];
    for (int i = 0; i < size; i++)
    {
        bigArray[i] = array[i];
    }
    bigArray[size] = value;
    delete[] array;
    array = bigArray;
    size++;
}

void DoubleList::deleteI(int i)
{
    if (i >= 0 && i < size)
    {
        for (int j = i; j < size - 1; j++)
        {
            array[j] = array[j + 1];
        }
        size--;
    }
}

int DoubleList::getSize()
{
    return size;
}

void DoubleList::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << to_string(array[i]) << " ";
    }
    cout << endl;
}

double* DoubleList::reverse()
{
    double* reversed = new double[size];
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        reversed[i] = array[j];
    }
    return reversed;
}