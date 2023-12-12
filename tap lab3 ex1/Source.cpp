#include "header.h"
#include <iostream>
#include <math.h>
using namespace std;

Dreapta::~Dreapta() {
	this->m = 0;
	this->n = 0;
}

Dreapta::Dreapta(double m, double n): m(m), n(n){}

Dreapta::Dreapta(const Dreapta& other)
{
	this->m = other.m;
	this->n = other.n;
}

double Dreapta::operator()(double x)
{
	return m * x + n;
}

double Dreapta::Panta(double x)
{
	return m * x + n;

}

Punct::~Punct()
{
	this->x = 0;
	this->y = 0;
	this->pSemiNeg--;
}

Punct::Punct(double x, double y): x(x), y(y)
{
	this->pSemiNeg++;
}

Punct::Punct(const Punct& other)
{
	this->x = other.x;
	this->y = other.y;
}

void Punct::setPunct(double a, double b)
{
	this->x = a;
	this->y = b;
}

void Punct::getPunct()
{
	cout << this->x << " " << this->y;
}


double distanta(Punct p1, Punct p2)
{
	double dis;

	dis = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return dis;
}