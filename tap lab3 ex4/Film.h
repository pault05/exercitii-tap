#pragma once
#ifndef _FILM_H
#define _FILM_H
#include "Actor.h"
using namespace std;

class Film : public Actor
{

protected:
	int buget;
	int nrActori;
	Actor va[10];

public:
	~Film();
	Film(int buget, int nrActori, Actor va[10]);
	Film(const Film&);
	Film();


};

#endif