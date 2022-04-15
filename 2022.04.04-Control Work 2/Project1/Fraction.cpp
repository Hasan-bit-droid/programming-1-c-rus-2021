#include "Fraction.h"

Fraction::Fraction(ll num, ll denom)
{
	this->num = num;
	if (denom != 0) this->denom = denom;
}

Fraction::Fraction(const Fraction& frac) : num(frac.num), denom(frac.denom) {}

Fraction::~Fraction()
{
	this->num = 0;
	this->denom = 0;
}

ll Fraction::getNum()
{
	return this->num;
}

void Fraction::setNum(ll num)
{
	this->num = num;
}

ll Fraction::getDenom()
{
	return this->denom;
}

void Fraction::setDenom(ll denom)
{
	if (denom != 0)	this->denom = denom;
}

void Fraction::set(ll num, ll denom)
{
	this->num = num;
	this->denom = denom;
}

Fraction& Fraction::operator=(const Fraction& frac)
{
	this->num = frac.num;
	this->denom = frac.denom;
	return *this;
}

bool Fraction::operator==(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) == (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator>(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) > (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator>=(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) >= (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator<(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) < (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator<=(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) <= (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

Fraction Fraction::operator-()
{
	return Fraction(-this->num, this->denom);
}

Fraction Fraction::abs()
{
	ll num = 0;
	num = (this->num >= 0 ? this->num : -this->num);
	ll denom = 0;
	denom = (this->denom > 0 ? this->denom : -this->denom);
	return Fraction(num, denom);
}

Fraction Fraction::reverse()
{
	return Fraction(this->denom, this->num);
}


ll NOD(ll num1, ll num2)
{
	ll a = 0;
	a = abs(num1);
	ll b = 0;
	b = abs(num2);

	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return ll(a + b);
}

ll NOK(ll num1, ll num2)
{
	return (num1 * num2) / NOD(num1, num2);
}

Fraction operator+(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom + fr2.num * fr1.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.denom;
	ll a = abs(num);
	ll b = abs(denom);
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), denom / (a + b));
}

Fraction operator+(const Fraction& fr, double summ)
{
	ll num = 0;
	num = fr.num + summ * fr.denom;
	return Fraction(num / NOD(num, fr.denom), fr.denom / NOD(num, fr.denom));
}

Fraction operator+(double summ, const Fraction& fr)
{
	ll num = 0;
	num = fr.num + summ * fr.denom;
	return Fraction(num / NOD(num, fr.denom), fr.denom / NOD(num, fr.denom));
}

Fraction operator-(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom - fr2.num * fr1.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.denom;
	return Fraction(num / NOD(num, denom), denom / NOD(num, denom));
}

Fraction operator-(const Fraction& fr, double summ)
{
	ll num = 0;
	num = fr.num - summ * fr.denom;
	return Fraction(num / NOD(num, fr.denom), fr.denom / NOD(num, fr.denom));
}

Fraction operator-(double summ, const Fraction& fr)
{
	ll num = 0;
	num = summ * fr.denom - fr.num;
	return Fraction(num / NOD(num, fr.denom), fr.denom / NOD(num, fr.denom));
}

Fraction operator*(const Fraction& fr1, const Fraction& fr2)
{
	ll num = fr1.num * fr2.num;
	ll denom = fr1.denom * fr2.denom;
	return Fraction(num / NOD(num, denom), denom / NOD(num, denom));
}

Fraction operator*(const Fraction& fr, double summ)
{
	return Fraction(fr.num * summ / NOD(fr.num * summ, fr.denom), fr.denom / NOD(fr.num * summ, fr.denom));
}

Fraction operator*(double summ, const Fraction& fr)
{
	return Fraction(fr.num * summ / NOD(fr.num * summ, fr.denom), fr.denom / NOD(fr.num * summ, fr.denom));
}

Fraction operator/(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.num;
	return Fraction(num / NOD(num, denom), denom / NOD(num, denom));
}

Fraction operator/(const Fraction& fr, double summ)
{

	ll denom = 0;
	denom = fr.denom * summ;

	return Fraction(fr.num / NOD(fr.num, denom), denom / NOD(fr.num, denom));
}

Fraction operator/(double summ, const Fraction& fr)
{
	ll num = 0;
	num = summ * fr.denom;
	return Fraction(num / NOD(num, fr.num), fr.num / NOD(num, fr.num));
}

Fraction powf(ll n, const Fraction& fr)
{
	return Fraction(pow(fr.num, n), pow(fr.denom, n));
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fr)
{
	if (fr.denom == 1 || fr.num == 0)
	{
		stream << (fr.num == 0 ? 0 : fr.num);
	}
	else
	{
		if (fr.denom < 0)
		{
			stream << "-" << fr.num << "/" << -fr.denom;
		}
		else
		{
			stream << fr.num << "/" << fr.denom;
		}
	}
	return stream;
}