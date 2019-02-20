#include <iostream>
#include "mycomplex.h"
using namespace std;

int main()
{
	MyComplex A(1, 6), B(6, 3), C, D;
	cout << "A: " << A << "B: " << B;
	cout << "A+B: ";
	C = A + B;
	cout << C;
	cout << "A-B: ";
	C = A - B;
	cout << C;
	cout << "A*B: ";
	C = A * B;
	cout << C;
	cout << "Input C: " << endl;
	cin >> C;
	cout << "(A+B)*C: ";
	D = (A + B)*C;
	cout << D;
	system("pause");
	return 0;
}