#include<iostream>
using namespace std;

void swapint(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void sort(int* ptr, int s)
{
	for (int i = 0; i < s - 1; i++)
	{
		for ( int j = 0; j < s - 1; j++)
		{
			if (ptr[j] > ptr[j+1])
				swapint(ptr[j], ptr[j+1]);
		}
	}
}

void main()
{
	int size = 0;
	cout << "Enter size ----> ";
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	sort(arr,size);

	for (int i = 0; i < size; i++)
		cout << i[arr] << " ";
	cout << endl;
}

