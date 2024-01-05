#pragma once
#ifndef _PERSOANA_H
#define _PERSOANA_H
#include <iostream>
using namespace std;

class Persoana
{
	string nume;
	string prenume;
	int varsta;
	int CNP;

public:

	Persoana(string nume = "", string prenume = "", int varsta = 0, int CNP = 0);
	Persoana(const Persoana&);
	virtual ~Persoana();

	virtual void afisare() const;

	inline string getNume() const { return nume; }
	inline string getPrenume() const { return prenume; }
	inline int getVarsta() const { return varsta; }
	inline int getCNP() const { return CNP; }

	inline void setNume(string numeNou) { this->nume = numeNou; }
	inline void setPrenume(string prenumeNou) { this->prenume = prenumeNou; }
	inline void setVarsta(int varstaNoua) { this->varsta = varstaNoua; }
	inline void setCNP(int CNPNou) { this->CNP = CNPNou; }
};


#endif