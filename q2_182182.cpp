#include<iostream>
#include<fstream>
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
	ifstream fin;
	fin.open("q2_182182_in.txt");
	if(fin)
	{
		ofstream fout;
		fout.open("q2_182182_out.txt");
		int i = 0, num = 0, pwr = 0;
		fin >> i;
		for ( ;i > 0; i--)
		{
			fin >> num >> pwr;
			fout << power(num,pwr) << endl; 
		}

		fout.close();
		fin.close();
	}
	else
		cout <<  "File not found!" << endl;

	
}

