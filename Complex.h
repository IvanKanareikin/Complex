#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
#include <iostream>

using namespace std;

class Complex{
private:
	double re;
	double im;
public:
	Complex();
	~Complex();
	Complex sum(Complex cmp1);
	Complex mult(Complex cmp1);
	Complex del(Complex cmp1);
	void setComplex(int valueRe, int valueIm);
	double mod();
	static void print(Complex n1);
};

#endif