#pragma once
#ifndef _CARTE_H
#define _CARTE_H
#include <string>
using namespace std;

class Carte 
{

private:
		string autor;
		string titlu;
		int ISBN;
		int pret;

public:

	Carte(string autor, string titlu, int ISBN, int pret);
	~Carte();
	Carte(const Carte&);

	inline string getAutor() const { return this->autor; }
	inline string getTitlu() const { return this->titlu; }
	inline int getISBN() const { return this->ISBN; }
	inline int getPret() const { return this->pret; }


};

#endif
