#pragma once
#ifndef _MANAGER_H
#define _MANAGER_H
#include "Header.h"
using namespace std;

class Manager :public Angajat 
{
protected:
	int nrSub;

public:

	Manager(double tarifOrar, int nrOre, int nrSub);

	Manager(double tarifOrar, int nrOre);

	Manager(const Manager&);

	~Manager();

	Manager operator=(const Manager&);
	
	inline double getSalar()
	{
		double salarM;
		salarM = this->tarifOrar * this->nrOre;
		salarM = salarM + salarM / 2;
		return salarM; 
	}

	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);

};


#endif