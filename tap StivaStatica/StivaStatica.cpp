#include "StivaStatica.h"
#include <iostream>
using namespace std;

Array_Stack::Array_Stack(int max)
{
	this->max = max;
	this->top = 0;
	this->vector = new int[max];
}

Array_Stack::~Array_Stack()
{
	this->top = 0;
	this->max = 0;
	delete[] this->vector;
}


bool Array_Stack::isfull()
{
	if (this->top == this->max)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Array_Stack::isempty()
{
	if (this->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Array_Stack::push(int n) 
{
	if (!isfull())
	{
		this->vector[this->top] = n;
		this->top = this->top + 1;
	}
	else
	{
		cout << "Stack overflow" << endl;
	}
}

int Array_Stack::pop()
{
	if (!isempty())
	{
		this->top = this->top - 1;
		return this->vector[this->top];
	}
	else
	{
		cout << "Stack overflow" << endl;
	}
	return 0;
}

int Array_Stack::peek()
{
	cout << "Stiva : ";
	while (!isempty())
	{
		cout << this->vector[this->top - 1] << " ";
		pop();
	}
	cout << endl;

	return 0;
}
 //print din curs