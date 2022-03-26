#include <iostream>
#include "Complex.h"

int main()
{
	Complex a{ 5, 3 };
	Complex b{ 3, 5 };
	//Complex c{ 9, 4 };
	Complex::print(a.div(b));
}