#include "algorithm.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

using namespace std;

int randomTime(int data [], int n, string sort);
int sortedTime(int n, string sort);
int invertSortedTime(int n, string sort);

int main() {

	/*int arraySize = 50000;				//maximum size that array can be, will piece apart later
	int *data;
	data = new int[arraySize];		//create base array to work with*/

	int arraySize = 5000;
	int data[5000];

	//randomize data[] to be used in first set of data
	srand((unsigned)time(0));				//seed randomizer
	for (int i = 0; i < arraySize; i++)		//for loop to cycle through array
		data[i] = rand();					//assign random value to data[] element

	cout << randomTime(data, 10, "bubble");

	cout << "Test cases on random data:" << endl;
	cout << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	cout << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;
	
	cout << "    10    \t" << randomTime(data, 10, "bubble") << "\t" << randomTime(data, 10, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    50    \t" << randomTime(data, 50, "bubble") << "\t" << randomTime(data, 50, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    100   \t" << randomTime(data, 100, "bubble") << "\t" << randomTime(data, 100, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    200   \t" << randomTime(data, 200, "bubble") << "\t" << randomTime(data, 200, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    300   \t" << randomTime(data, 300, "bubble") << "\t" << randomTime(data, 300, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    400   \t" << randomTime(data, 400, "bubble") << "\t" << randomTime(data, 400, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    500   \t" << randomTime(data, 500, "bubble") << "\t" << randomTime(data, 500, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    1000  \t" << randomTime(data, 1000, "bubble") << "\t" << randomTime(data, 1000, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    2000  \t" << randomTime(data, 2000, "bubble") << "\t" << randomTime(data, 2000, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    3000  \t" << randomTime(data, 3000, "bubble") << "\t" << randomTime(data, 3000, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    4000  \t" << randomTime(data, 4000, "bubble") << "\t" << randomTime(data, 4000, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	cout << "    5000  \t" << randomTime(data, 5000, "bubble") << "\t" << randomTime(data, 5000, "insertion") << "\t\t" << randomTime(data, 10, "merge") << endl;
	/*cout << "    10000 \t" << randomTime(data, 10000, "bubble") << "\t" << randomTime(data, 10000, "insertion") << endl;
	//cout << "    50000 \t" << randomTime(data, 50000, "bubble") << "\t" << randomTime(data, 50000, "insertion") << endl;
	//cout << "    100000\t" << randomTime(data, 100000, "bubble") << "\t" << randomTime(data, 100000, "insertion") << endl;
	cout << endl;

	//Sort array for next set of data
	bubbleSort(data, arraySize);

	cout << "Test cases on sorted data:" << endl;
	cout << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	cout << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;

	cout << "    10    \t" << sortedTime(10, "bubble") << "\t" << sortedTime(10, "insertion") << endl;
	cout << "    50    \t" << sortedTime(50, "bubble") << "\t" << sortedTime(50, "insertion") << endl;
	cout << "    100   \t" << sortedTime(100, "bubble") << "\t" << sortedTime(100, "insertion") << endl;
	cout << "    200   \t" << sortedTime(200, "bubble") << "\t" << sortedTime(200, "insertion") << endl;
	cout << "    300   \t" << sortedTime(300, "bubble") << "\t" << sortedTime(300, "insertion") << endl;
	cout << "    400   \t" << sortedTime(400, "bubble") << "\t" << sortedTime(400, "insertion") << endl;
	cout << "    500   \t" << sortedTime(500, "bubble") << "\t" << sortedTime(500, "insertion") << endl;
	cout << "    1000  \t" << sortedTime(1000, "bubble") << "\t" << sortedTime(1000, "insertion") << endl;
	cout << "    2000  \t" << sortedTime(2000, "bubble") << "\t" << sortedTime(2000, "insertion") << endl;
	cout << "    3000  \t" << sortedTime(3000, "bubble") << "\t" << sortedTime(3000, "insertion") << endl;
	cout << "    4000  \t" << sortedTime(4000, "bubble") << "\t" << sortedTime(4000, "insertion") << endl;
	cout << "    5000  \t" << sortedTime(5000, "bubble") << "\t" << sortedTime(5000, "insertion") << endl;
	//cout << "    10000 \t" << sortedTime(10000, "bubble") << "\t" << sortedTime(10000, "insertion") << endl;
	//cout << "    50000 \t" << sortedTime(50000, "bubble") << "\t" << sortedTime(50000, "insertion") << endl;
	//cout << "    100000\t" << sortedTime(100000, "bubble") << "\t" << sortedTime(100000, "insertion") << endl;
	cout << endl;


	//reverse data[] for next set of data
	cout << "Test cases on inverted sorted data:" << endl;
	cout << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	cout << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;

	cout << "    10    \t" << invertSortedTime(10, "bubble") << "\t" << invertSortedTime(10, "insertion") << endl;
	cout << "    50    \t" << invertSortedTime(50, "bubble") << "\t" << invertSortedTime(50, "insertion") << endl;
	cout << "    100   \t" << invertSortedTime(100, "bubble") << "\t" << invertSortedTime(100, "insertion") << endl;
	cout << "    200   \t" << invertSortedTime(200, "bubble") << "\t" << invertSortedTime(200, "insertion") << endl;
	cout << "    300   \t" << invertSortedTime(300, "bubble") << "\t" << invertSortedTime(300, "insertion") << endl;
	cout << "    400   \t" << invertSortedTime(400, "bubble") << "\t" << invertSortedTime(400, "insertion") << endl;
	cout << "    500   \t" << invertSortedTime(500, "bubble") << "\t" << invertSortedTime(500, "insertion") << endl;
	cout << "    1000  \t" << invertSortedTime(1000, "bubble") << "\t" << invertSortedTime(1000, "insertion") << endl;
	cout << "    2000  \t" << invertSortedTime(2000, "bubble") << "\t" << invertSortedTime(2000, "insertion") << endl;
	cout << "    3000  \t" << invertSortedTime(3000, "bubble") << "\t" << invertSortedTime(3000, "insertion") << endl;
	cout << "    4000  \t" << invertSortedTime(4000, "bubble") << "\t" << invertSortedTime(4000, "insertion") << endl;
	cout << "    5000  \t" << invertSortedTime(5000, "bubble") << "\t" << invertSortedTime(5000, "insertion") << endl;
	//cout << "    10000 \t" << invertSortedTime(10000, "bubble") << "\t" << invertSortedTime(10000, "insertion") << endl;
	//cout << "    50000 \t" << invertSortedTime(50000, "bubble") << "\t" << invertSortedTime(50000, "insertion") << endl;
	//cout << "    100000\t" << invertSortedTime(100000, "bubble") << "\t" << invertSortedTime(100000, "insertion") << endl;*/

	//delete[] data;
	return 0;
}

int randomTime(int data [], int n, string sort)
{
	DWORD begin, end;
	
	//make a new temporary array
	int *tempArray;
	tempArray = new int[n];

	//initialize temporary array with the first nth elements from data[]
	for (int i = 0; i < n; i++) {
		tempArray[i] = data[i];
	}

	if (sort == "bubble") {
		begin = GetTickCount();
		bubbleSort(tempArray, n);
		end = GetTickCount();
	}
	else if (sort == "insertion") {
		begin = GetTickCount();
		insertionSort(tempArray, n);
		end = GetTickCount();
	}
	else if (sort == "merge") {
		begin = GetTickCount();
		//mergesort();
		end = GetTickCount();
	}
	else if (sort == "quick") {
		begin = GetTickCount();
		//quicksort();
		end = GetTickCount();
	}
	else
		cout << "Error passing sort" << endl;


	int timeUsed = end - begin;
	
	delete [] tempArray;

	return timeUsed;
}

int sortedTime(int n, string sort)
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

int invertSortedTime(int n, string sort)
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
