#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;

bool read_numbers(int * ptr, unsigned int size)
{
	string string;
	getline(cin, string);
	istringstream stream(string);
	for (unsigned int i = 0; i < size; ++i)
	{
		if (!(stream >> ptr[i]))
		{
			return false;
		}
	}
	return stream.eof();
}

int invers(int * ptr) 
{
	unsigned int k = 0;
	for (int i = 0; i < 10; i++) 
	{
		for (int j = i; j < 10; j++) 
		{
			if (ptr[j] < ptr[i])
				k++;
		}
	}
	return k;
}

void print(int * ptr, unsigned int size)
{
	for (unsigned int i = 0; i < size; ++i) 
	{
		cout << ptr[i];
		if (i != size - 1) 
		{
			cout << ' ';
		}
	}
	cout << endl;
}


int main()
{
	int a[10];
	if (read_numbers(a, 10))
	{
		cout << invers(a);
	}
	else 
	{
		cout << "An error has occured while reading input data";
	}
	cin.get();
	return 0;
}
