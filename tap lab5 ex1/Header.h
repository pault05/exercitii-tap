#pragma once
#ifndef _ANGAJAT_H
#define _ANGAJAT_H
using namespace std;

class Angajat
{
protected:
	double tarifOrar;
	int nrOre;

public:

	Angajat();

	Angajat(double tarifOrar, int nrOre);

	Angajat(const Angajat&);

	~Angajat();

	Angajat operator=(const Angajat& other);

	inline double getSalar() { return this->tarifOrar * this->nrOre; }
	inline double getTarifOrar() { return this->tarifOrar; }

	//friend ostream& operator<<(ostream& os, const Angajat& obj);// const;
	//friend istream& operator>>(istream& is, const Angajat& obj);

	void printAngj();
};


#endif