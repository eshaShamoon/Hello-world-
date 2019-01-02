// Hello Word app.cpp : Defines the entry point for the console application.
//this programe is just for testing.

#include "stdafx.h"
#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	cout << "hello word!"<<endl;

	getchar();
    return 0;
}

