#pragma once

#if !defined COMPLEX_H
#define COMPLEX_H 

#include <iostream>
using namespace std;

class MyComplex {
private:
	double Re, Im;
public:

	MyComplex(double InitRe = 0, double InitIm = 0);

	~MyComplex();

	double GetRe();

	double GetIm();

	int SetRe(double newVal);

	int SetIm(double newVal);

	MyComplex operator=(MyComplex a);

	friend MyComplex operator+(MyComplex a, MyComplex b);

	friend MyComplex operator+(MyComplex a, double b);

	friend MyComplex operator+(double a, MyComplex b);

	friend MyComplex operator-(MyComplex a, MyComplex b);

	friend MyComplex operator-(MyComplex a, double b);

	friend MyComplex operator-(double a, MyComplex b);

	friend MyComplex operator*(MyComplex a, MyComplex b);

	friend MyComplex operator*(MyComplex a, double b);

	friend MyComplex operator*(double a, MyComplex b);

	friend istream& operator>>(istream& o, MyComplex& b);

	friend ostream& operator<<(ostream& o, MyComplex& b);
};

#endif