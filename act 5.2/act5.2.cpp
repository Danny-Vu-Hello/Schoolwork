//Danny Vu
#include <iostream>

using namespace std;

int main()
{       
	int size;
	cout << "Enter the size of the list: " << flush;
	cin >> size;
	cout << "\nEnter list: " << flush;
	int * pArray = new int[size];
	for (int i = 0; i < size; i++) 
	{
		cin >> *(pArray + i);
	}
	
	int large = *(pArray);
	for (int i = 0; i < size; i++)
	{
		if (large < *(pArray + i))
		{
			large = *(pArray + i);
		} 
	}
	
	cout << "The largest number is " << large << endl; 
	
	return 0;

}//end main

