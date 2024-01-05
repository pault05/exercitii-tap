#include "Persoana.h"
#include <iostream>
#include <string>
using namespace std;

Persoana::Persoana(string nume, string prenume, int varsta, int CNP) :nume(nume), prenume(prenume), varsta(varsta), CNP(CNP) {}

Persoana::Persoana(const Persoana& other)
{
	this->nume = other.nume;
	this->prenume = other.prenume;
	this->varsta = other.varsta;
	this->CNP = 0;
}

Persoana::~Persoana(){}


void Persoana::afisare() const
{
	cout << getNume() << " " << getPrenume() << " " << getVarsta() << " " << getCNP() << " ";
}
