#pragma once
#include<iostream>
#include<cmath>
#define ll long long

class Fraction
{
private:
	ll num;
	ll denom;

	friend ll NOD(ll num1, ll num2);
	friend ll NOK(ll num1, ll num2);
public:
	Fraction(ll num = 0, ll denom = 0);
	Fraction(const Fraction& frac);
	~Fraction();

	ll getNum();
	void setNum(ll num);
	ll getDenom();
	void setDenom(ll denom);
	void set(ll num, ll denom);

	Fraction& operator=(const Fraction& frac);
	bool operator==(const Fraction& frac);
	bool operator>(const Fraction& frac);
	bool operator>=(const Fraction& frac);
	bool operator<(const Fraction& frac);
	bool operator<=(const Fraction& frac);

	friend Fraction operator+(const Fraction& fr1, const Fraction& fr2);
	friend Fraction operator+(const Fraction& fr, double summ);
	friend Fraction operator+(double summ, const Fraction& fr);

	friend Fraction operator-(const Fraction& fr1, const Fraction& fr2);
	friend Fraction operator-(const Fraction& fr, double summ);
	friend Fraction operator-(double summ, const Fraction& fr);

	friend Fraction operator*(const Fraction& fr1, const Fraction& fr2);
	friend Fraction operator*(const Fraction& fr, double summ);
	friend Fraction operator*(double summ, const Fraction& fr);

	friend Fraction operator/(const Fraction& fr1, const Fraction& fr2);
	friend Fraction operator/(const Fraction& fr, double summ);
	friend Fraction operator/(double summ, const Fraction& fr);
	friend Fraction powf(ll n, const Fraction& fr);
	Fraction operator-();
	Fraction abs();
	Fraction reverse();

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fr);
};