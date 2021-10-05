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
		fill((p),(p+size),0);
	}
	pointerDataClass(pointerDataClass& pDC)
	{
		maxSize = pDC.maxSize;
		length = pDC.length;
		p = new int[maxSize];
		for (int i = 0; i < maxSize; i++)
		{
			*(p+i)=*(pDC.p+i);
		}
	}
	//Destructor to deallocate the memory space occupied by the array p
	~pointerDataClass()
	{
		delete p;
	}
	//the function insertAt inserts num into array p at the position specified by  
	//index
	void insertAt(int index, int num)
	{
		*(p + index) = num;
		length++;
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
	pointerDataClass list1(10);
	list1.insertAt(0, 50);
	list1.insertAt(4, 30);
	list1.insertAt(8, 60);
	cout<<"List1: " <<endl;
	list1.displayData();
	cout<<"List 2: "<<endl;
	pointerDataClass list2(list1);
	list2.displayData();
	list1.insertAt(4,100);
	cout<<"List1: (after insert 100 at indext 4) " <<endl;
	list1.displayData();
	cout<<"List 2: "<<endl;
	list2.displayData();
	
	return 0;
}
