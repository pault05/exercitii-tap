#include "Manager.h"
#include "Header.h"
#include <iostream>
using namespace std;

Manager::Manager(double tarifOrar, int nrOre, int nrSub) :Angajat(tarifOrar, nrOre), nrSub(nrSub)
{
	//this->tarifOrar = 5.5;
	//this->nrOre = nrOre;
	//this->nrSub = nrSub;
}

Manager::Manager(double tarifOrar, int nrOre)
{
	this->tarifOrar = tarifOrar;
	this->nrOre = nrOre;
}

Manager::Manager(const Manager& other):Angajat(other)
{
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
	this->nrSub = other.nrSub;
}

Manager::~Manager()
{
	this->tarifOrar = 0;
	this->nrOre = 0;
	this->nrSub = 0;
}

Manager Manager::operator=(const Manager& other)
{
	this->nrOre = other.nrOre;
	this->nrSub = other.nrSub;
	this->tarifOrar = other.tarifOrar;

	return *this;
}

ostream& Manager::operator<<(ostream& os)
{
	os << this->tarifOrar << " " << this->nrOre << " " << this->nrSub << endl;
	return os;
}

istream& Manager::operator>>(istream& is)
{
	is >> this->tarifOrar >> this->nrOre >> this->nrSub;
	return is;
}