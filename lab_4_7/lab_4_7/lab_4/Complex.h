#ifndef COMPLEX_H
#define COMPLEX_H

#include "math.h"
#include <iostream>

#include <iostream>
#include <cstdlib>
#include <complex>

#define PI 3.14159265359

using namespace std;

double module_r(double re, double im)
{
	return sqrtf(re * re + im * im);
}

double arg_phi(double re, double im)
{
	if (re > 0)
	{
		return atanf(im / re);
	}
	else if (re < 0 && im > 0)
	{
		return PI + atanf(im / re);
	}
	else if (re < 0 && im < 0)
	{
		return -PI + atanf(im / re);
	}
	else return 0;
}

class Complex {
private:
	double r;
	double phi;
public:
	Complex();
	Complex(double _r, double _phi);

	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;

	Complex& operator+ (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		return Complex(module_r(re + re2, im + im2), arg_phi(re + re2, im + im2));
	};
	Complex& operator - (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		return Complex(module_r(re - re2, im - im2), arg_phi(re - re2, im - im2));
	};
	Complex& operator * (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		double Re = re * re2 - im * im2;
		double Im = re * im2 + im * re2;

		return Complex(module_r(Re, Im), arg_phi(Re, Im));
	};
	Complex& operator / (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		double znam = re2 * re2 + im2 * im2;
		double p1 = re * re2 + im * im2;
		p1 /= znam;
		double p2 = im * re2 - re * im2;
		p2 /= znam;

		return Complex(module_r(p1, p2), arg_phi(p1, p2));
	};
	Complex& operator ^ (const Complex& rhs)
	{
		std::complex<double> c1(this->Re(), this->Im());
		std::complex<double> c2(rhs.Re(), rhs.Im());

		std::complex<double> result = exp(c2 * log(c1));

		return Complex(module_r(real(result), imag(result)), arg_phi(real(result), imag(result)));
	};

	//friend Complex* operator + (const Complex& lhs, const Complex& rhs);
	//friend Complex operator - (const Complex& lhs, const Complex& rhs);
	friend Complex& operator + (double lhs, const Complex& rhs)
	{
		double re2 = rhs.Re();
		double im2 = rhs.Im();

		return Complex(module_r(lhs + re2, im2), arg_phi(lhs + re2, im2));
	};

	friend Complex& operator * (double lhs, const Complex& rhs)
	{
		double re2 = rhs.Re();
		double im2 = rhs.Im();
		
		return Complex(module_r(lhs * re2, lhs * im2), arg_phi(lhs * re2, lhs * im2));
	};
	//friend Complex operator / (const Complex& lhs, const Complex& rhs);

	Complex* tg(const Complex& z);

	///operator double();
	friend std::ostream& operator << (std::ostream& out, const Complex& a);
};

#endif
