#include <iostream>
#include "Complex.h"

int main()
{
	Complex a;
	Complex b;
	Complex c;
	a.setComplex(1, 2);
	b.setComplex(1, 2);
	c.sum(a.sum(b));
	Complex::print(c.sum(a.sum(b)));
}