// lab4.cpp : Defines the entry point for the application.
//

#include "lab4.h"
#include "Complex.cpp"

using namespace std;

Complex& y(const Complex& z) {
	return Complex(module_r(2, 0), arg_phi(2, 0)) * z + exp(5) * (1 + z);
}

int main()
{
	Complex c = Complex(module_r(1, 2), arg_phi(1, 2));
	cout << "c1: " << c << endl;

	Complex c1 = Complex(module_r(2, 3), arg_phi(2, 3));
	cout << "c2: " << c1 << endl;

	Complex c2 = c + c1;
	Complex c3 = c - c1;
	Complex c4 = c * c1;
	Complex c5 = c / c1;
	cout << endl;

	cout << "c1 + c2:" << endl;
	cout << c2 << endl;

	cout << "c1 - c2:" << endl;
	cout << c3 << endl;

	cout << "c1 * c2:" << endl;
	cout << c4 << endl;

	cout << "c1 / c2:" << endl;
	cout << c5 << endl;

	cout << "y(c): " << endl;
	cout << y(c);
	
	return 0;
}
