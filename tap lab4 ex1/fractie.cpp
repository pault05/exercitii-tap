#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

Fractie::Fractie()
{
	this->numarator = 0;
	this->numitor = 1;
}

Fractie::Fractie(int numarator)
{
	this->numarator = numarator;
	this->numitor = 1;

}

Fractie::Fractie(int numarator, int numitor)
{
	this->numarator = numarator;
	this->numitor = numitor;
}

Fractie::Fractie(const Fractie& other)
{
	this->numarator = other.numarator;
	this->numitor = other.numitor;
}


Fractie::~Fractie()
{
	this->numarator = 0;
	this->numitor = 0;
}



int Fractie::cmmdc(int n, int m)
{
	while (n != m)
	{
		if (n > m)
		{
			n -= m;
		}
		else
		{
			m -= n;
		}
	}
	return n;
}

int Fractie::cmmmc(int a, int b)
{
	int x = a;
	int y = b;

	while (x != y)
	{
		if (x > y)
		{
			x -= y;
		}
		else
		{
			y -= x;
		}
	}

	int cmmmc = (a * b) / x;

	return cmmmc;
}

//MEMBRE

Fractie Fractie::operator+(const Fractie& other) 
{
	Fractie rez;

	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (this->numitor == other.numitor)
	{
		rez.numitor = this->numitor;
		rez.numarator = this->numarator + other.numarator;
	}

	else
	{
		int cmmmcr = cmmmc(this->numitor, other.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) + other.numarator * (cmmmcr / other.numitor));
	}

	return rez;
}

Fractie Fractie::operator-(const Fractie& other)
{
	Fractie rez;

	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (this->numitor == other.numitor)
	{
		rez.numitor = this->numitor;
		rez.numarator = this->numarator - other.numarator;
	}

	else
	{
		int cmmmcr = cmmmc(this->numitor, other.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) - other.numarator * (cmmmcr / other.numitor));
	}

	return rez;
}

Fractie Fractie::operator*(const Fractie& other)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int num, numi;
		num = this->numarator * other.numarator;

		numi = this->numitor * other.numitor;

		rez.setNumarator(num);

		rez.setNumitor(numi);

	}
	return rez;
}

Fractie Fractie::operator/(const Fractie& other)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || other.numarator == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int numarator, numitor;

		numarator = this->numarator * other.numitor;
		numitor = this->numitor * other.numarator;

		rez.setNumarator(numarator);

		rez.setNumitor(numitor);
		rez = rez.simplifica();
	}

	return rez;
}

bool Fractie::operator<(const Fractie& other)
{
	int f1, f2;

	int cmmcF = cmmmc(this->numitor, other.numitor);

	f1 = this->numarator * (cmmcF / this->numitor);
	f2 = other.numarator * (cmmcF / other.numitor);
	
	return f1 < f2;
}

bool Fractie::operator>(const Fractie& other)
{
	int f1, f2;

	int cmmcF = cmmmc(this->numitor, other.numitor);

	f1 = this->numarator * (cmmcF / this->numitor);
	f2 = other.numarator * (cmmcF / other.numitor);

	return f1 > f2;
	
}

bool Fractie::operator<=(const Fractie& other)
{
	int f1, f2;

	int cmmcF = cmmmc(this->numitor, other.numitor);

	f1 = this->numarator * (cmmcF / this->numitor);
	f2 = other.numarator * (cmmcF / other.numitor);

	return f1 <= f2;
}

bool Fractie::operator>=(const Fractie& other)
{
	int f1, f2;

	int cmmcF = cmmmc(this->numitor, other.numitor);

	f1 = this->numarator * (cmmcF / this->numitor);
	f2 = other.numarator * (cmmcF / other.numitor);

	return f1 >= f2;
}


bool Fractie::operator!=(const Fractie& other)
{
	int f1, f2;

	int cmmcF = cmmmc(this->numitor, other.numitor);

	f1 = this->numarator * (cmmcF / this->numitor);
	f2 = other.numarator * (cmmcF / other.numitor);

	return f1 != f2;
}

bool Fractie::operator==(Fractie& other)
{
	Fractie thisf = this->simplifica();

	Fractie otherf = other.simplifica();

	return (thisf.numarator == otherf.numarator && thisf.numitor == otherf.numitor);
}

//COMPUSI MEMBRE

Fractie& Fractie::operator+=(Fractie& other)  
{
	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
	}

	else if (this->numitor == other.numitor)
	{
		this->numitor = numitor;
		this->numarator = this->numarator + other.numarator;
	}

	else
	{
		this->numarator = other.numitor * this->numarator + other.numarator * this->numitor;
		this->numitor = this->numitor * other.numitor;
	}
	

	return *this;
}

Fractie& Fractie::operator-=(Fractie& other)  
{
	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
	}

	else if (this->numitor == other.numitor)
	{
		this->numitor = numitor;
		this->numarator = this->numarator - other.numarator;
	}

	else
	{
		this->numarator = other.numitor * this->numarator - other.numarator * this->numitor;
		this->numitor = this->numitor * other.numitor;
	}


	return *this;
}


Fractie& Fractie::operator*=(Fractie& other)
{
	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
	}
	else
	{
		this->numarator = this->numarator * other.numarator;
		this->numitor = this->numitor * other.numitor;
	}

	return *this;
}

Fractie& Fractie::operator/=(Fractie & other)
{
	if (this->numitor == 0 || other.numitor == 0)
	{
		cout << "ERROR" << " ";
	}
	else
	{
		int numarator, numitor;

		numarator = this->numarator * other.numitor;
		numitor = this->numitor * other.numarator;

		this->numarator = numarator;
		this->numitor = numitor;
	
	}
	return *this;
}

Fractie& Fractie::operator=(const Fractie& other)
{
	this->numarator = other.numarator;
	this->numitor = other.numitor;

	return *this;
}


Fractie& Fractie::operator++()  //++pre 
{
	this->numarator = this->numarator + this->numitor;

	return *this;
}

Fractie Fractie::operator++(int)  //post++
{
	Fractie old = *this;
	this->numarator = this->numarator + this->numitor;

	return old;
}

Fractie& Fractie::operator--()  //pre--
{
	this->numarator = this->numarator - this->numitor;

	return *this;
}

Fractie Fractie::operator--(int)  //post--
{
	Fractie old = *this;
	this->numarator = this->numarator - this->numitor;

	return old;
}


ostream& Fractie::operator<<(ostream& os) const
{
	os << this->numarator << "/" << this->numitor << endl;
	return os;
}

istream& Fractie::operator>>(istream& is)
{
	is >> this->numarator >> this->numitor;
	return is;
}


//FRIEND


/*
* 
ostream& operator<<(ostream& os, const Fractie& f)
{
	os << f.numarator << "/" << f.numitor << endl;
	return os;
}


istream& operator>>(istream& is, Fractie& f)
{
	is >> f.numarator >> f.numitor;
	return is;
}



Fractie operator+(const Fractie& f1, const Fractie& f2)
{
	Fractie rez;

	if (f1.numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (f1.numitor == f2.numitor)
	{
		rez.numitor = f1.numitor;
		rez.numarator = f1.numarator + f2.numarator;
	}

	else
	{
		int cmmmcr = cmmmc(f1.numitor, f2.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(f1.numarator * (cmmmcr / f1.numitor) + f2.numarator * (cmmmcr / f2.numitor));
	}

	return rez;

}

Fractie operator-(const Fractie& f1, const Fractie& f2)
{
	Fractie rez;

	if (f1.numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (f1.numitor == f2.numitor)
	{
		rez.numitor = f1.numitor;
		rez.numarator = f1.numarator - f2.numarator;
	}

	else
	{
		int cmmmcr = cmmmc(f1.numitor, f2.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(f1.numarator * (cmmmcr / f1.numitor) - f2.numarator * (cmmmcr / f2.numitor));
	}

	return rez;
}



Fractie operator*(const Fractie& f1, const Fractie& f2)
{
	Fractie rez = Fractie();

	if (f1.numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int num, numi;
		num = f1.numarator * f2.numarator;

		numi = f1.numitor * f2.numitor;

		rez.setNumarator(num);

		rez.setNumitor(numi);

	}
	return rez;
}

Fractie operator/(const Fractie& f1, const Fractie& f2)
{
	Fractie rez = Fractie();

	if (f1.numitor == 0 || f2.numarator == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int numarator, numitor;

		numarator = f1.numarator * f2.numitor;
		numitor = f1.numitor * f2.numarator;

		rez.setNumarator(numarator);

		rez.setNumitor(numitor);
		rez = rez.simplifica();
	}

	return rez;
}

bool operator==(const Fractie& f1, const Fractie& f2)
{
	return (f1.numarator == f2.numarator && f1.numitor == f2.numitor);
}

bool operator!=(const Fractie& f1, const Fractie& f2)
{
	return (f1.numarator != f2.numarator || f1.numitor != f2.numitor);
}

*/

Fractie Fractie::simplifica()
{
	Fractie rez = Fractie();

	if (this->numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int n, m, min;
		n = this->numarator;
		m = this->numitor;

		if (n < m)
		{
			min = n;
		}
		else
		{
			min = m;
		}

		int i = min;

		for (i; i >= 2; i--)
		{
			if (m % i == 0 && n % i == 0)
			{
				n = n / i;
				m = m / i;
			}
		}
		rez.setNumarator(n);
		rez.setNumitor(m);

	}
	return rez;
}

bool Fractie::egal(const Fractie& f2)
{
	Fractie rez = Fractie();
	Fractie rez2 = Fractie();

	if (this->numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return false;
	}

	rez.setNumarator(f2.numarator);
	rez.setNumitor(f2.numitor);

	rez2.setNumarator(this->numarator);
	rez2.setNumitor(this->numitor);

	rez = rez.simplifica();
	rez2 = rez2.simplifica();

	cout << rez.print() << " " << rez2.print() << endl;

	if ((rez.numarator == rez2.numarator) && (rez.numitor == rez2.numitor))
	{
		return true;
	}
	else
	{
		return false;
	}
}

string Fractie::print()
{
	return to_string(this->numarator) + "/" + to_string(this->numitor);
}