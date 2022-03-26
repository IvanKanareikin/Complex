#include "Complex.h"

Complex Complex::sum(Complex cmp1)
{
	Complex sum{ cmp1.im + this->im, cmp1.re + this->re };
	return sum;
}

Complex Complex::sub(Complex cmp1)
{
	Complex sub{ this->im - cmp1.im, this->re - cmp1.re };
	return sub;
}


void Complex::print(Complex n1) {
	string sign = (n1.re >= 0) ? "i+" : "i";
	cout << n1.im << sign << n1.re;
}