#pragma once
#ifndef _STUDENT_H
#define _STUDENT_H
#include <iostream>
#include "Persoana.h"
using namespace std;

class Student :public Persoana
{
private:
	string email;
	int nota;

public:
	Student(string nume = "", string prenume = "", int varsta = 0, int CNP = 0, string email = "", int nota = 0);
	Student(string email, int nota);
	Student(string nume, string prenume, int varsta, int CNP);
	~Student();
	Student(const Student&);

	inline int getNota() const { return nota; }
	inline string getEmail() const { return email; }

	inline void setNota(int notaNoua) { this->nota = notaNoua; }
	inline void setEmail(string emailNou) { this->email = emailNou; }

	void afisare() const override;
	void detalii() const;
};

#endif // !_STUDENT_H
