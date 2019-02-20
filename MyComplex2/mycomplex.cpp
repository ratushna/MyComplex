#include "mycomplex.h"

MyComplex::MyComplex(double InitRe, double InitIm) {
	Re = InitRe;
	Im = InitIm;
}

MyComplex::~MyComplex() {
	//cout << "In Destructor" << endl;
}

double MyComplex::GetRe() {
	return Re;
}

double MyComplex::GetIm() {
	return Im;
}

int MyComplex::SetRe(double newVal) {
	Re = newVal;
	return 1;
}

int MyComplex::SetIm(double newVal) {
	Im = newVal;
	return 1;
}

MyComplex MyComplex::operator=(MyComplex a) {
	Re = a.Re;
	Im = a.Im;
	return (*this);
}

MyComplex operator+(MyComplex a, MyComplex b) {
	MyComplex c;
	c.SetRe(a.GetRe() + b.GetRe());
	c.SetIm(a.GetIm() + b.GetIm());
	return c;
}

MyComplex operator+(MyComplex a, double b) {
	MyComplex c;
	c.SetRe(a.GetRe() + b);
	c.SetIm(a.GetIm());
	return c;
}

MyComplex operator+(double a, MyComplex b) {
	return (b + a);
}

MyComplex operator-(MyComplex a, MyComplex b) {
	MyComplex c;
	c.SetRe(a.GetRe() - b.GetRe());
	c.SetIm(a.GetIm() - b.GetIm());
	return c;
}

MyComplex operator-(MyComplex a, double b) {
	MyComplex c;
	c.SetRe(a.GetRe() - b);
	c.SetIm(a.GetIm());
	return c;
}

MyComplex operator-(double a, MyComplex b) {
	MyComplex c;
	c.SetRe(a - b.GetRe());
	c.SetIm(-b.GetIm());
	return c;
}

MyComplex operator*(MyComplex a, MyComplex b) {
	MyComplex c;
	c.SetRe(a.GetRe()*b.GetRe() - a.GetIm()*b.GetIm());
	c.SetIm(a.GetRe()*b.GetIm() + b.GetRe()*a.GetIm());
	return c;
}

MyComplex operator*(MyComplex a, double b) {
	MyComplex c;
	c.SetRe(a.GetRe()*b);
	c.SetIm(a.GetIm()*b);
	return c;
}

MyComplex operator*(double a, MyComplex b) {
	return (b*a);
}

istream& operator>>(istream& o, MyComplex& b) {
	double a, d;
	cout << "Re: ";
	o >> a;
	b.SetRe(a);
	cout << "Im: ";
	o >> d;
	b.SetIm(d);
	return o;
}

ostream& operator<<(ostream& o, MyComplex& b) {
	o << "Re = " << b.GetRe() << " Im = " << b.GetIm() << endl;
	return o;
}

