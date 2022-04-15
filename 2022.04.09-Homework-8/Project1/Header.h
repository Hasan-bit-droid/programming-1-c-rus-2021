#pragma once
#include <cmath>
#include <ostream>
class Complex
{
private:
	double re;
	double im;
	double sqrabs();

public:
	Complex(double re, double im);
	Complex(const Complex& complex);
	~Complex();

	Complex& operator=(Complex& complex);
	double abs();
	double arg();
	Complex reverse();
	void printroots(int n, std::ostream& stream);
	friend Complex operator*(Complex complex1, Complex complex2);
	friend Complex operator*(double d, Complex complex);
	friend Complex operator*(Complex complex, double d);
	friend Complex operator+(Complex complex1, Complex complex2);
	friend Complex operator/(Complex complex1, Complex complex2);
	friend Complex operator-(Complex complex1, Complex complex2);
	friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};

