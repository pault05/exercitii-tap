#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

Angajat::Angajat()
{
	this->tarifOrar = 5.5;
	this->nrOre = 0;
}

Angajat::Angajat(double tarifOrar, int nrOre)
{
	this->tarifOrar = tarifOrar;
	this->nrOre = nrOre;
}

Angajat::Angajat(const Angajat& other)
{
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
}

Angajat::~Angajat()
{
	this->tarifOrar = 0.0;
	this->nrOre = 0;
}

Angajat Angajat::operator=(const Angajat& other)
{
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;

	return *this;
}

/*
ostream& operator<<(ostream& os, const& Angajat)
{
	os << this->tarifOrar << " " << this->nrOre << endl;
	return os;
}
*/


void Angajat::printAngj()
{
	cout << "tarif orar : " << this->tarifOrar << " " << "nr ore: " << this->nrOre << endl;
}
