// FinalProject2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DoubleList.h"
using namespace std;
int main()
{
	int size = 0;
	double value = 0;
	cout << "Enter a size: ";
	cin >> size;
	cout << "Enter a value: ";
	cin >> value;

	DoubleList d(size, value);
	cout << "Size of list: " << d.getSize() << endl;
	cout << "Values: " << endl;
	d.print();
	cout << endl;
	double appendVal;
	cout << "Enter a value to append: ";
	cin >> appendVal;
	d.append(appendVal);
	cout << endl;
	cout << "Size of list: " << d.getSize() << endl;
	cout << "Values: ";
	d.print();
	cout << endl;
	int toDelete;
	cout << "enter an index to delete: ";
	cin >> toDelete;

	d.deleteI(toDelete);
	cout << endl;
	cout << "Size of list: " << d.getSize() << endl;
	cout << "Values: ";
	d.print();
	cout << endl;

	double* reversedArray = d.reverse();
	cout << "Size of list: " << d.getSize() << endl;
	cout << "Values: ";
	for (int i = 0;i < size;i++) {
		cout << to_string(reversedArray[i]) + " ";
	}
	cout << endl;


}

