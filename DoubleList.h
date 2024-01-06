#pragma once
using namespace std;
#include <string>
#include <iostream>
class DoubleList
{
private:
	int size;
	double* array;
public:
	DoubleList(int size);
	DoubleList(int size, double value);
	~DoubleList();
	void append(double value);
	void deleteI(int i);
	int getSize();
	void print();
	double* reverse();
};

