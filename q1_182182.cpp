#include<iostream>
using namespace std;

void main()
{
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
			cout << i;
		for (int j = 0; j < 2*(num-i); j++)
			cout << "*";
		for (int j = 0; j < i; j++)
			cout << i;

		cout << endl;
	}
	for (int i = 1; i < num; i++)
	{
		for (int j = 0; j < num-i; j++)
			cout << i + num;
		for (int j = 0; j < 2*i; j++)
			cout << "*";
		for (int j = 0; j < num - i; j++)
			cout << i + num;

		cout << endl;
	}


}

