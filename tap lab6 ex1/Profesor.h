#pragma once
#ifndef _PROFESOR_H
#define _PROFESOR_H
#include "Persoana.h"
using namespace std;

class Profesor :public Persoana
{
private:
	string email;
	string materie;

public:
	Profesor(string nume = "", string prenume = "", int varsta = 0, int CNP = 0, string email = "", string materie = "");
	Profesor(string email, string materie);
	Profesor(string nume, string prenume, int varsta, int CNP);
	~Profesor();
	Profesor(const Profesor&);

	inline string getEmail() const { return email; }
	inline string getMaterie() const { return materie; }

	inline void setMaterie(string materieNoua) { this->materie = materieNoua; }
	inline void setEmail(string emailNou) { this->email = emailNou; }

	void afisare() const override;
	void detalii() const;
};

#endif