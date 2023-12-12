#pragma once
#ifndef DREAPTA_H
#define DREAPTA_H

class Dreapta
{
	double m;
	double n;

public:
	Dreapta(double m = 1, double n = 0);
	~Dreapta();

	Dreapta(const Dreapta& other);

	double operator()(double x);

	double Panta(double x);
};

class Punct
{
	double x, y;

public:
	Punct(double x = 0, double y = 0);
	~Punct();

	Punct(const Punct& other);

	void setPunct(double x, double y);

	void getPunct();

	friend double distanta(Punct p1, Punct p2);
	
	friend class Dreapta;

	//static Dreapta d;

	static short pSemiPoz;
	static short pSemiNeg;
	static short pDreapta;
};

#endif // !DREAPTA
