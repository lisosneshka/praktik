#include "Complex.h"

using namespace std;

Complex::Complex()
{
	r = 0.0;
	phi = 0.0;
}

Complex::Complex(double _r, double _phi)
{
	r = _r;
	phi = _phi;
}

double Complex::R() const
{
	return r;
}

double Complex::Phi() const
{
	return phi;
}

double Complex::Re() const
{
	return r * cosf(phi);
}

double Complex::Im() const
{
	return r * sinf(phi);
}

Complex* Complex::tg(const Complex& z)
{
	double x = z.Re();
	double y = z.Im();

	double re = sinf(2 * x) / (cosf(2 * x) + coshf(2 * y));
	double im = sinhf(2 * y) / (cosf(2 * x) + coshf(2 * y));

	return new Complex(module_r(re, im), arg_phi(re, im));
}

Complex* operator + (const Complex& lhs, const Complex& rhs)
{
	double re = lhs.Re();
	double im = lhs.Im();

	double re2 = rhs.Re();
	double im2 = rhs.Im();

	return new Complex(module_r(re + re2, im + im2), arg_phi(re + re2, im + im2));
}

std::ostream& operator << (std::ostream& out, const Complex& c)
{
	double re = c.Re();
	double im = c.Im();
	out << c.Re();
	if (im > 0)
	{
		out << " + ";
		out << im;
		out << "i";
	}
	else if (im < 0)
	{
		out << " - ";
		out << fabs(im);
		out << "i";
	}
	else
	{
		//print nothing
	}
	return out;
}