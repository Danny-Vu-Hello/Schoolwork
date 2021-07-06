//Danny Vu
#include <iostream>

using namespace std;

class pointerDataClass
{
	private:
	int maxSize;//variable to store the maximum size of p
	int length;//variable to store the number of elements in p
	int *p;// pointer to an int array
	
	public:
	//Constructor to create an array of the size specified by the parameter size.
	pointerDataClass(int size)
	{
		length = 0;
		maxSize = size;
		p = new int[maxSize];
	}
	//Destructor to deallocate the memory space occupied by the array p
	~pointerDataClass()
	{
		delete[] p;
	}
	//the function insertAt inserts num into array p at the position specified by  
	//index
	void insertAt(int index, int num)
	{
		if (index < maxSize&&length < maxSize)
		{
			*(p + index) = num;
			length++;
		}
	}
	//The function displayData displays all the array elements in p
	void displayData()
	{
		for(int i = 0;i < maxSize;i++)
		{
			cout << *(p + i) << " " << flush;
		}
		cout << endl;
	}
}; 

int main()
{
	pointerDataClass list11 = pointerDataClass(10);
	for(int i = 0; i < 10; i++)
	{
		list11.insertAt(i,i);
	}
	list11.displayData();
	return 0;
}
