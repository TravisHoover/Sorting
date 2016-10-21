#include "algorithm.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

using namespace std;

int getTime(int n, string sort);

int main() {

	cout << "Test cases on random data:" << endl;
	cout << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	cout << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;
	
	cout << "    10    \t" << getTime(10, "bubble") << "\t" << getTime(10, "insertion") << endl;
	cout << "    50    \t" << getTime(50, "bubble") << "\t" << getTime(50, "insertion") << endl;
	cout << "    100   \t" << getTime(100, "bubble") << "\t" << getTime(100, "insertion") << endl;
	cout << "    200   \t" << getTime(200, "bubble") << "\t" << getTime(200, "insertion") << endl;
	cout << "    300   \t" << getTime(300, "bubble") << "\t" << getTime(300, "insertion") << endl;
	cout << "    400   \t" << getTime(400, "bubble") << "\t" << getTime(400, "insertion") << endl;
	cout << "    500   \t" << getTime(500, "bubble") << "\t" << getTime(500, "insertion") << endl;
	cout << "    1000  \t" << getTime(1000, "bubble") << "\t" << getTime(1000, "insertion") << endl;
	cout << "    2000  \t" << getTime(2000, "bubble") << "\t" << getTime(2000, "insertion") << endl;
	cout << "    3000  \t" << getTime(3000, "bubble") << "\t" << getTime(3000, "insertion") << endl;
	cout << "    4000  \t" << getTime(4000, "bubble") << "\t" << getTime(4000, "insertion") << endl;
	cout << "    5000  \t" << getTime(5000, "bubble") << "\t" << getTime(5000, "insertion") << endl;
	cout << "    10000 \t" << getTime(10000, "bubble") << "\t" << getTime(10000, "insertion") << endl;
	cout << "    50000 \t" << getTime(50000, "bubble") << "\t" << getTime(50000, "insertion") << endl;
	cout << "    100000\t" << getTime(100000, "bubble") << "\t" << getTime(100000, "insertion") << endl;



	return 0;
}

int getTime(int n, string sort)
{
	DWORD begin, end;
	int arraySize = n;
	int* data = new DataType[arraySize];

	srand((unsigned)time(0));
	for (int i = 0; i < arraySize; i++)
		data[i] = rand();

	if (sort == "bubble") {
		begin = GetTickCount();
		bubbleSort(data, arraySize);
		end = GetTickCount();

	}
	else if (sort == "insertion") {
		begin = GetTickCount();
		insertionSort(data, n);
		end = GetTickCount();
	}

	int timeUsed = end - begin;

	return timeUsed;
}
