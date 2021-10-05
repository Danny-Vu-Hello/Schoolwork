// cin with strings
#include <iostream>
#include <String>
#include <cmath>
using namespace std;

int bin2Dec(const string& binaryString)
{
	int counter = 1;
	int value;
	for (int i = binaryString.length()-1; i >= -1  ; i--)
	{
		if (binaryString[i]=='1')
		{
			value += counter;
		}
		counter += counter;
	}
	return value;
}

int main()
{
	string s;
	cout << "Please enter a binary number: " << endl;
	cin>>s;
	cout << "Your number in decimal is: " << bin2Dec(s) << endl;
	return 0;
}


