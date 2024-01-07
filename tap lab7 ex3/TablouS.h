#pragma once
#ifndef _TABLOUS_H
#define _TABLOU_H
#include <iostream>
using namespace std;

template <class T>
class Tablou_Uni
{
private:
	T data;
	int i;
	int max;

public:
	Tablou_Uni(int max = 10);
	Tablou_Uni(const Tablou_Uni&);
	~Tablou_Uni();

	void adauga(T);
	T afisare();

	Tablou_Uni<T>& operator=(const Tablou_Uni<T>& other);

};

template <class T>
Tablou_Uni<T>::Tablou_Uni(int max)
{
	this->max = max;
	this->i = 0;
	this->data = new T[max];
}

template <class T>
Tablou_Uni<T>::Tablou_Uni(const Tablou_Uni<T>& other)
{
	this->max = other.max;
	this->i = other.i;
	this->data = new T[max];

	for (int i = 0; i < max; ++i)
	{
		this->data[i] = other.data[i];
	}
}

template <class T>
Tablou_Uni<T>::~Tablou_Uni()
{
	this->max = 0;
	this->i = 0;
	delete[] this->data;
}

template <class T>
void Tablou_Uni<T>::adauga(T element)
{
	this->data[this->i++] = element;
}

template <class T>
T Tablou_Uni<T>::afisare()
{
	return this->data[this->i];
}

template<class T>
Tablou_Uni<T>& Tablou_Uni<T>::operator=(const Tablou_Uni<T>& other)
{
	this->data = other.data;
	this->max = other.max;
	this->i = other.i;

	return *this;
}

#endif