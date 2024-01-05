#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student(string nume, string prenume, int varsta, int CNP, string email, int nota):
		Persoana(nume, prenume, varsta, CNP), email(email), nota(nota) {}

Student::~Student() {}

Student::Student(string nume, string prenume, int varsta, int CNP):Persoana(nume, prenume, varsta, CNP), email(""), nota(0) {}

Student::Student(string email, int nota)
{
	this->email = email;
	this->nota = nota;
}

Student::Student(const Student& other) :Persoana(other)
{
	this->email = other.email;
	this->nota = other.nota;
}

void Student::afisare() const
{
	Persoana::afisare();
	cout << this->email << " " << this->nota << endl;
}

void Student::detalii() const
{
	cout << "Studentul " << Persoana::getNume() << " " << getPrenume() << " are nota " << this->nota << " " << endl;
}