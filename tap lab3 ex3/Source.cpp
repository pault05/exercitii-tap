#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

Carte::Carte(string autor, string titlu, int ISBN, int pret)
{
	this->autor = autor;
	this->titlu = titlu;
	this->ISBN = ISBN;
	this->pret = pret;
}

Carte::~Carte()
{
	this->autor = "";
	this->titlu = "";
	this->ISBN = 0;
	this->pret = 0;
}

Carte::Carte(const Carte& other)
{
	this->autor = other.autor;
	this->titlu = other.titlu;
	this->ISBN = other.ISBN;
	this->pret = other.pret;
}