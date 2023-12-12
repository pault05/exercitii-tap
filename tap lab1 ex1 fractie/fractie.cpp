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

/*
Fractie& Fractie::operator=(const Fractie& other)
{
	this->numarator = other.numarator;
	this->numitor = other.numitor;
	return *this;
}
*/


Fractie::~Fractie()
{
	this->numarator = 0;
	this->numitor = 0;
}

int Fractie::getNumitor() { return this->numitor; }
void Fractie::setNumitor(int n) { this->numitor = n; }

int Fractie::getNumarator() { return this->numarator; }
void Fractie::setNumarator(int n) { this->numarator = n;  }

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

 Fractie Fractie::adunare(const Fractie & f2)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || f2.numitor ==0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (this->numitor == f2.numitor)
	{
		rez.numitor = this->numitor;
		rez.numarator = this->numarator + f2.numarator;
	}
	
	else
	{
		int cmmmcr = cmmmc(this->numitor, f2.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) + f2.numarator * (cmmmcr / f2.numitor));
	}

	return rez;
}
 
Fractie Fractie::scadere(const Fractie& f2)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}

	else if (this->numitor == f2.numitor)
	{
		rez.numitor = this->numitor;
		rez.numarator = this->numarator + f2.numarator;
	}

	else
	{
		int cmmmcr = cmmmc(this->numitor, f2.numitor);
		rez.setNumitor(cmmmcr);
		rez.setNumarator(this->numarator * (cmmmcr / this->numitor) - f2.numarator * (cmmmcr / f2.numitor));
	}

	return rez;
}

Fractie Fractie::inmultire(const Fractie& f2)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || f2.numitor == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int num, numi;
		num = this->numarator * f2.numarator;

		numi = this->numitor * f2.numitor;

		rez.setNumarator(num);

		rez.setNumitor(numi);

	}
	return rez;
}

Fractie Fractie::impartire(const Fractie &f2)
{
	Fractie rez = Fractie();

	if (this->numitor == 0 || f2.numarator == 0)
	{
		cout << "ERROR" << " ";
		return NULL;
	}
	else
	{
		int numarator, numitor;

		numarator = this->numarator * f2.numitor;
		numitor = this->numitor * f2.numarator;

		rez.setNumarator(numarator);

		rez.setNumitor(numitor);
		rez = rez.simplifica();
	}

	return rez;
}

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