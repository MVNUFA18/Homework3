/* 
 * Dante Cherubini
 * 10 September 2018
 * Data Structures & Algorithms
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


#include <iostream>

template <typename T, size_t size> 
void printArray(T(&array)[size])
{
	cout << "[ ";
	for (size_t i = 0; i < size; ++i)
		cout << array[i] << " ";
	cout << "]" << endl;
}

template <typename T, size_t size>
bool isSorted(T(&array)[size])
{
	for (size_t i = 1; i < size; ++i)
		if (array[i] < array[i - 1]) {
			return false;
		}
}

int main() {
	cout << "Sample Int Array 1" << '\n';
	int sampleArray[] = { 1, 2, 3, 5, 7 };
	printArray(sampleArray);	
	if (!isSorted(sampleArray)) {
		cout << "Array is not sorted!" << '\n' << endl;
	 }
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}

	cout << "Sample Int Array 2" << '\n';
	int sampleArray2[] = { 3, 2, 7, 4, 8 };
	printArray(sampleArray2);
	if (!isSorted(sampleArray2)) {
		cout << "Array is not sorted!" << '\n' << endl;
	}
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}

	cout << "Sample String Array 1" << '\n';
	string stringArray[] = { "a", "b", "c", "e", "r" };
	printArray(stringArray);
	if (!isSorted(stringArray)) {
		cout << "Array is not sorted!" << '\n' << endl;
	}
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}

	cout << "Sample String Array 2" << '\n';
	string stringArray2[] = { "x", "z", "b", "a", "c" };
	printArray(stringArray2);
	if (!isSorted(stringArray2)) {
		cout << "Array is not sorted!" << '\n' << endl;
	}
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}

	cout << "Sample Double Array 1" << '\n';
	double doubleArray[] = { 1.1, 1.4, 1.8, 2.1, 2.5 };
	printArray(doubleArray);
	if (!isSorted(doubleArray)) {
		cout << "Array is not sorted!" << '\n' << endl;
	}
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}

	cout << "Sample Double Array 2" << '\n';
	double doubleArray2[] = { 1.4, 1.1, 1.8, 3.4, 4.25 };
	printArray(doubleArray2);
	if (!isSorted(doubleArray2)) {
		cout << "Array is not sorted!" << '\n' << endl;
	}
	else
	{
		cout << "Array is sorted!" << '\n' << endl;
	}
}
