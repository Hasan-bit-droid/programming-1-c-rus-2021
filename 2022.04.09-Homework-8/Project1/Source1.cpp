#include "Header.h"

const double PI = 3.14159265358979323846;

Complex::Complex(double re = 0, double im = 0) :re(re), im(im) {}
Complex::Complex(const Complex& complex) : re(complex.re), im(complex.im) {}
Complex::~Complex()
{
	this->re = 0;
	this->im = 0;
}
Complex& Complex::operator=(Complex& complex) {
	this->re = complex.re;
	this->im = complex.im;
	return *this;
}
double Complex::abs()
{
	return sqrt(this->re * this->re + this->im * this->im);
}
double  Complex::arg()
{
	return atan(this->im / this->re);
}
Complex Complex::reverse()
{
	return Complex(this->re / (this->re * this->re + this->im * this->im), -(this->im / (this->re * this->re + this->im * this->im)));
}
std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
	stream << complex.re << " + " << complex.im << " * i";
	return stream;
}
void Complex::printroots(int n, std::ostream& stream)
{
	for (int k = 0; k < n; ++k)
	{
		stream << pow(this->abs(), 1 / n) * cos((this->arg() + 2 * PI * k) / n) << " + i * " << pow(this->abs(), 1 / n) * sin((this->arg() + 2 * PI * k) / n);
	}
}
Complex operator*(Complex complex1, Complex complex2)
{
	return Complex(complex1.re * complex2.re - complex1.im * complex2.im, complex1.re * complex2.im + complex1.im * complex2.re);
}
Complex operator*(double d, Complex complex)
{
	return Complex(complex.re * d, complex.im * d);
}
Complex operator*(Complex complex, double d)
{
	return Complex(complex.re * d, complex.im * d);
}
Complex operator+(Complex complex1, Complex complex2)
{
	return Complex(complex1.re + complex2.re, complex1.im + complex2.im);
}
Complex operator/(Complex complex1, Complex complex2)
{
	return Complex((complex1.re * complex2.re + complex1.im * complex2.im) / (complex2.re * complex2.re + complex2.im * complex2.im), (complex1.im * complex2.re - complex1.re * complex2.im) / (complex2.re * complex2.re + complex2.im * complex2.im));
}
Complex operator-(Complex complex1, Complex complex2)
{
	return Complex(complex1.re - complex2.re, complex1.im - complex2.im);
}
