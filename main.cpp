#include "algorithm.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <fstream>
using namespace std;

int getTime(int data [], int n, string sort);
void reverseArray(int data[], int n);

int main() {

	fstream result;
	result.open("result.dat");

	//declare arrays with max possible sizes. Will only take what is needed if current array is less
	int arraySize = 100000;
	int data[100000];

	//randomize data[] to be used in first set of data
	srand((unsigned)time(0));				//seed randomizer
	for (int i = 0; i < arraySize; i++)		//for loop to cycle through array
		data[i] = rand();					//assign random value to data[] element

	//headers
	result << "Test cases on random data:" << endl;
	result << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	result << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;
	
	result << "    10    \t" << getTime(data, 10, "bubble") << "\t" << getTime(data, 10, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    50    \t" << getTime(data, 50, "bubble") << "\t" << getTime(data, 50, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    100   \t" << getTime(data, 100, "bubble") << "\t" << getTime(data, 100, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    200   \t" << getTime(data, 200, "bubble") << "\t" << getTime(data, 200, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    300   \t" << getTime(data, 300, "bubble") << "\t" << getTime(data, 300, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    400   \t" << getTime(data, 400, "bubble") << "\t" << getTime(data, 400, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    500   \t" << getTime(data, 500, "bubble") << "\t" << getTime(data, 500, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    1000  \t" << getTime(data, 1000, "bubble") << "\t" << getTime(data, 1000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    2000  \t" << getTime(data, 2000, "bubble") << "\t" << getTime(data, 2000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    3000  \t" << getTime(data, 3000, "bubble") << "\t" << getTime(data, 3000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    4000  \t" << getTime(data, 4000, "bubble") << "\t" << getTime(data, 4000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    5000  \t" << getTime(data, 5000, "bubble") << "\t" << getTime(data, 5000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    10000 \t" << getTime(data, 10000, "bubble") << "\t" << getTime(data, 10000, "insertion") << endl;
	result << "    50000 \t" << getTime(data, 50000, "bubble") << "\t" << getTime(data, 50000, "insertion") << endl;
	result << "    100000\t" << getTime(data, 100000, "bubble") << "\t" << getTime(data, 100000, "insertion") << endl;
	result << endl;

	//Sort array for next set of data
	bubbleSort(data, arraySize);

	result << "Test cases on sorted data:" << endl;
	result << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	result << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;

	result << "    10    \t" << getTime(data, 10, "bubble") << "\t" << getTime(data, 10, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    50    \t" << getTime(data, 50, "bubble") << "\t" << getTime(data, 50, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    100   \t" << getTime(data, 100, "bubble") << "\t" << getTime(data, 100, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    200   \t" << getTime(data, 200, "bubble") << "\t" << getTime(data, 200, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    300   \t" << getTime(data, 300, "bubble") << "\t" << getTime(data, 300, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    400   \t" << getTime(data, 400, "bubble") << "\t" << getTime(data, 400, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    500   \t" << getTime(data, 500, "bubble") << "\t" << getTime(data, 500, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    1000  \t" << getTime(data, 1000, "bubble") << "\t" << getTime(data, 1000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    2000  \t" << getTime(data, 2000, "bubble") << "\t" << getTime(data, 2000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    3000  \t" << getTime(data, 3000, "bubble") << "\t" << getTime(data, 3000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    4000  \t" << getTime(data, 4000, "bubble") << "\t" << getTime(data, 4000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    5000  \t" << getTime(data, 5000, "bubble") << "\t" << getTime(data, 5000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    10000 \t" << getTime(data, 10000, "bubble") << "\t" << getTime(data, 10000, "insertion") << endl;
	result << "    50000 \t" << getTime(data, 50000, "bubble") << "\t" << getTime(data, 50000, "insertion") << endl;
	result << "    100000\t" << getTime(data, 100000, "bubble") << "\t" << getTime(data, 100000, "insertion") << endl;
	result << endl;


	//reverse data[] for next set of data
	reverseBubbleSort(data, arraySize);

	result << "Test cases on inverted sorted data:" << endl;
	result << "Array Size\t" << "Bubble\t" << "Insertion\t" << "Merge\t" << "Quick" << endl;
	result << "**********\t" << "******\t" << "*********\t" << "*****\t" << "******" << endl;

	result << "    10    \t" << getTime(data, 10, "bubble") << "\t" << getTime(data, 10, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    50    \t" << getTime(data, 50, "bubble") << "\t" << getTime(data, 50, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    100   \t" << getTime(data, 100, "bubble") << "\t" << getTime(data, 100, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    200   \t" << getTime(data, 200, "bubble") << "\t" << getTime(data, 200, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    300   \t" << getTime(data, 300, "bubble") << "\t" << getTime(data, 300, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    400   \t" << getTime(data, 400, "bubble") << "\t" << getTime(data, 400, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    500   \t" << getTime(data, 500, "bubble") << "\t" << getTime(data, 500, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    1000  \t" << getTime(data, 1000, "bubble") << "\t" << getTime(data, 1000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    2000  \t" << getTime(data, 2000, "bubble") << "\t" << getTime(data, 2000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    3000  \t" << getTime(data, 3000, "bubble") << "\t" << getTime(data, 3000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    4000  \t" << getTime(data, 4000, "bubble") << "\t" << getTime(data, 4000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    5000  \t" << getTime(data, 5000, "bubble") << "\t" << getTime(data, 5000, "insertion") << "\t\t" << getTime(data, 10, "merge") << endl;
	result << "    10000 \t" << getTime(data, 10000, "bubble") << "\t" << getTime(data, 10000, "insertion") << endl;
	result << "    50000 \t" << getTime(data, 50000, "bubble") << "\t" << getTime(data, 50000, "insertion") << endl;
	result << "    100000\t" << getTime(data, 100000, "bubble") << "\t" << getTime(data, 100000, "insertion") << endl;
	result << endl;

	delete [] data;
	return 0;
}

//operations to be ran on random array
int getTime(int data [], int n, string sort)
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
