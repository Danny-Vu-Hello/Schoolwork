#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void print(const string& title, const vector<T>& v)
{
	cout << title << " ";
	for (int i = 0; i < v.size(); i++)
	cout << v[i] << " ";
	cout << endl;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 5; i++)
	v.push_back(i);
	
	//v.insert(v.begin()+1,20); // Insert 20 at index 1
	//v.erase(v.end()-2,v.end()-1); // Remove the second last element
	print("The elements in vector:", v);
	
	sort(v.begin(), v.end()); // Sort the elements in v
	print("Sorted elements:", v);
	
	random_shuffle(v.begin(), v.end()); // Shuffle the elements in v
	print("After random shuffle:", v);
	
	cout << "The max element is " <<
	*max_element(v.begin(), v.end()) << endl;
	
	cout << "The min element is " <<
	*min_element(v.begin(), v.end()) << endl;
	
	int key = 45;
	if (find(v.begin(), v.end(), key) == v.end())
	cout << key << " is not in the vector" << endl;
	else
	cout << key << " is in the vector" << endl;
	
	return 0;
}
