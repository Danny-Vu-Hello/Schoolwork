//Danny Vu
#include <iostream>

using namespace std;

bool isSorted(const int list[], int size)
{

	for(int i = 0; i < size-1;i++)
	{
		if (list[i]>list[i+1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int list[100];
	int size;
	cout << "Enter the size of the list: " << flush;
	cin >> size;
	cout << "\nEnter list: " << flush;
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];
	}
	if (isSorted(list,size))
	{
		cout << "\nThe list is already sorted" << endl;
	}
	else 
	{
		cout << "\nThe list is not sorted" << endl;
	}
	return 0;
}
