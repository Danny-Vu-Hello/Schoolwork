//Danny Vu
#include <fstream>
#include <iostream>

using namespace std;

// Reads data from a text file into an array
int readData(int * &arr) 
{
	// Open the file to get the data
	int size;
	ifstream inputFile;
	inputFile.open("data.txt");
	// The first line of the file is the size of the array
	inputFile >> size;
	
	//Allocate the memory for pointer arr
	arr = new int[size];
	// Read the rest of the data into the array

	for (int i = 0; i < size; i++) 
	{
		inputFile >> *(arr + i);
	} // End for loop
	inputFile.close();
	return size;
} // End readData

void bsort(int * arr, int last) 
{
	for (int i = 0; i < last; i++) 
	{
		// Find the smallest value in the unsorted section of the array
		//YOUR CODE
		for (int j = 0; j < (last-i-1);j++)
		{
			double min = *(arr + j);
			if (min > *(arr + j + 1))
			{
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = min;
			}
		}
	} // End outer for loop
} // End ascending


void writeToConsole(int * arr, int last) 
{
	cout << "Contents of array:" << endl;
	for (int i = 0; i < last; i++) 
	{
		cout << *(arr + i) << " ";
	} // End for loop
	cout << "\n";
} // End writeToConsole

int main()
{
	int * arr;
	int last = readData(arr);
	writeToConsole(arr,last);
	bsort(arr,last);
	writeToConsole(arr,last);
	return 0;
}
