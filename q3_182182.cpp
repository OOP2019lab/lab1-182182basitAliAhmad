#include<iostream>
using namespace std;

int power (int a, int b)
{
	if (b == 0)
		return 1;
	int A = power(a, b/2);
	if (b % 2 == 0)
		return A * A;
	return a * A * A;
}


void main()
{
	int x, y;
	int* p;
	int* q;
	x = 419;
	y = 114;
	p = &x;
	q = &y;

	cout << x << " " << y << " " << p << " " << q <<  " " <<*p <<  " " <<*q << endl;

	int z;
	z = x;
	x = y;
	y = z;

	cout << x << " " << y << " " << p << " " << q <<  " " <<*p <<  " " <<*q << endl;

	int* temp2;
	temp2 = p;
	p = q;
	q = temp2;

	cout << x << " " << y << " " << p << " " << q <<  " " <<*p <<  " " <<*q << endl;
}

