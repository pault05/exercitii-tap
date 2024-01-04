#include "Film.h"
#include "Actor.h"
#include <iostream>
#include <string>
using namespace std;

Film::~Film()
{
	this->buget = 0;
	this->nrActori = 0;
}

Film::Film(int buget, int nrActori, Actor va[10])
{
	this->buget = buget;
	this->nrActori = nrActori;
	this->va[10] = va[10];
}

Film::Film(const Film& other)
{
	this->buget = other.buget;
	this->nrActori = other.nrActori;
	this->va[10] = other.va[10];
}

Film::Film()
{

}