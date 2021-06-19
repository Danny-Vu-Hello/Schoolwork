//Luis Ortiz Baca
//Danny Vu
#include<iostream>

using namespace std;

int large(int& x, int& y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int max(int& a, int& b, int& c) {
	int x = large(a,b);
	return large(x,c);
}


int main() {
	int a;
	int b;
	int c;
	cout << "hello\n";
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "the max number is: " << max(a, b, c);
	return 0;
}
