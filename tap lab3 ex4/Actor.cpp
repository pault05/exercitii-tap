#include "Actor.h"
#include <iostream>
#include <string>
using namespace std;

Actor::~Actor()
{
	this->nume = "";
	this->prenume = "";
	this->varsta = 0;
}

Actor::Actor(string nume, string prenume, int varsta)
{
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
}

Actor::Actor(const Actor& other)
{
	this->nume = other.nume;
	this->prenume = other.prenume;
	this->varsta = other.varsta;
}

Actor::Actor()
{

}