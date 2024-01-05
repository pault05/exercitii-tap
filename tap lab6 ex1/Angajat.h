#pragma once
#ifndef _ANGAJAT_H
#define _ANGAJAT_H
#include "Persoana.h"
using namespace std;

class Angajat :public Persoana
{
private:
	string email;
	string departament;

public:
	Angajat(string nume = "", string prenume = "", int varsta = 0, int CNP = 0, string email = "", string departament = "");
	Angajat(string email, string departament);
	Angajat(string nume, string prenume, int varsta, int CNP);
	~Angajat();
	Angajat(const Angajat&);

	inline string getEmail() const { return email; }
	inline string getDepartament() const { return departament; }

	inline void setDepartament(string depNou) { this->departament = depNou; }
	inline void setEmail(string emailNou) { this->email = emailNou; }

	void afisare() const override;
	void detalii() const;
};

#endif // !_ANGAJAT_H
