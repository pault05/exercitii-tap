#include <iostream>
#include <string>
#include "Profesor.h"
using namespace std;

Profesor::Profesor(string nume, string prenume, int varsta, int CNP, string email, string materie):
		Persoana(nume, prenume, varsta, CNP), email(email), materie(materie) {}

Profesor::~Profesor() {}

Profesor::Profesor(string nume, string prenume, int varsta, int CNP) :Persoana(nume, prenume, varsta, CNP), email(""), materie("") {}

Profesor::Profesor(string email, string materie)
{
	this->email = email;
	this->materie = materie;
}

Profesor::Profesor(const Profesor& other) :Persoana(other)
{
	this->email = other.email;
	this->materie = other.materie;
}

void Profesor::afisare() const
{
	Persoana::afisare();
	cout << this->email << " " << this->materie << endl;
}

void Profesor::detalii() const
{
	cout << "Profesorul " << getNume() << " " << getPrenume() << " preda " << this->materie << endl;
}