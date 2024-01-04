#pragma once
#ifndef _ACTOR_H
#define _ACTOR_h
#include <string>
using namespace std;

class Actor 
{
protected:
	string nume;
	string prenume;
	int varsta;

public:

	Actor(string nume, string prenume, int varsta);
	~Actor();
	Actor(const Actor&);
	Actor();

};

#endif