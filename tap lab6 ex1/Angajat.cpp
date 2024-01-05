#include <iostream>
#include <string>
#include "Angajat.h"
using namespace std;

Angajat::Angajat(string nume, string prenume, int varsta, int CNP, string email, string departament) :
	Persoana(nume, prenume, varsta, CNP), email(email), departament(departament) {}

Angajat::~Angajat() {}

Angajat::Angajat(string nume, string prenume, int varsta, int CNP) :Persoana(nume, prenume, varsta, CNP), email(""), departament("") {}

Angajat::Angajat(string email, string departament)
{
	this->email = email;
	this->departament = departament;
}

Angajat::Angajat(const Angajat& other) :Persoana(other)
{
	this->email = other.email;
	this->departament = other.departament;
}

void Angajat::afisare() const
{
	Persoana::afisare();
	cout << getEmail() << " " << getDepartament() << endl;
}

void Angajat::detalii() const
{
	cout << "Angajatul " << getNume() << " " << getPrenume() << " face parte din departamentul " << getDepartament() << endl;
}