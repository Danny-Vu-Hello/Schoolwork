//Luis Ortiz Baca
//Danny Vu
#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction& multiplyFract(Fraction& fr1, Fraction& fr2);
Fraction product;

int main()
{
	// Instantiation of some objects
	Fraction fract1;
	Fraction fract2(14, 21);
	Fraction fract3(11, -8);
	Fraction fract4(fract3);
	Fraction fract5(2, 0);

	// Printing the object
	cout << "Printing four fractions after constructed: " << endl;
	cout << "fract1: ";
	fract1.print();
	cout << "fract2: ";
	fract2.print();
	cout << "fract3: ";
	fract3.print();
	cout << "fract4: ";
	fract4.print();
	cout << "fract5: ";
	fract5.print();

	// Using mutators
	cout << "Changing the first two fractions and printing them:";
	cout << endl;
	fract1.setNumer(4);
	cout << "fract1: ";
	fract1.print();
	fract2.setDenom(-5);
	cout << "fract2: ";
	fract2.print();

	// Using accessors
	cout << "Testing the changes in two fractions:" << endl;
	cout << "fract1 numerator: " << fract1.getNumer() << endl;
	cout << "fract2 numerator: " << fract2.getDenom() << endl;

	//Using multiply
	Fraction fract6(1, 2);
	Fraction fract7(2, 3);
	multiplyFract(fract6, fract7);
	//
	cout << "Testing" << endl;
	cout << "Multiplying 1/2 and 2/3 = ";
	product.print();
	return 0;
}


Fraction& multiplyFract(Fraction& fr1, Fraction& fr2) {
	product.setNumer(fr1.getNumer() * fr2.getNumer());
	product.setDenom(fr1.getDenom() * fr2.getDenom());
	return product;
}

