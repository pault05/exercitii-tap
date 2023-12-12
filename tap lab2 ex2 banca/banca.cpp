#include "Header.h"
#include <string>
using namespace std;

ContBancar::ContBancar(string numarCont, float suma, string moneda)
{
	this->numarCont = numarCont;
	this->suma = suma;
	this->moneda = moneda;
}

ContBancar::~ContBancar()
{
	this->numarCont = "";
	this->suma = 0.0;
	this->moneda = "";

}

Client::Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar conturi)
{
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;
	this->nrConturi = nrConturi;
	this->conturi = conturi;
}

Client::~Client()
{
	this->nume = "";
	this->prenume = "";
	this->adresa = "";
	this->nrConturi = 0;
}

Banca::Banca(string codBanca, unsigned nrClienti, Client clienti)
{
	this->codBanca = codBanca;
	this->nrClienti = nrClienti;
	this->clienti = clienti;
}

Banca::Banca(const Banca& other)
{
	this->codBanca = other.codBanca;
	this->nrClienti = other.nrClienti;
	this->clienti = other.clienti;
}

ContBancar::ContBancar(const ContBancar& other)
{
	this->numarCont = other.numarCont;
	this->moneda = other.moneda;
	this->suma = other.suma;
}

Client::Client(const Client& other)
{
	this->nume = other.nume;
	this->prenume = other.prenume;
	this->adresa = other.adresa;
	this->nrConturi = other.nrConturi;
}

string Banca::getCodBanca() { return this->codBanca; }
void Banca::setCodBanca(string n) { this->codBanca = n; }

unsigned Banca::getNrClienti() { return this->nrClienti; }
void Banca::setNrClienti(unsigned n) { this->nrClienti = n; }

string ContBancar::getNumarCont() { return this->numarCont; }
void ContBancar::setNumarCont(string n) { this->numarCont = n; }

float ContBancar::getSuma() { return this->suma; }
void ContBancar::setSuma(float n) { this->suma = n; }

string ContBancar::getMoneda() { return this->moneda; }
void ContBancar::setMoneda(string n) { this->moneda = n; }

string Client::getNume() { return this->nume; }
void Client::setNume(string n) { this->nume = n; }

string Client::getPrenume() { return this->prenume; }
void Client::setPrenume(string n) { this->prenume = n; }

string Client::getAdresa() { return this->adresa; }
void Client::setAdresa(string n) { this->adresa = n; }

unsigned Client::getNrConturi() { return this->nrConturi; }
void Client::setNrConturi(unsigned n) { this->nrConturi = n; }

void ContBancar::transfer(ContBancar& contDest, float suma)
{
	contDest.suma += suma;
	this->suma -= suma;
}

void Operatiuni::depunere(float suma)
{
	//???
}

void Operatiuni::extragere(float suma)
{

}

string ContBancar::afisareDateCont()
{
	return this->numarCont + " " + to_string(this->suma) + " " + this->moneda;
}

string Client::afisareDateClient()
{
	//return afisareDateCont();  //??

	return this->nume + " " + this->prenume + " " + this->adresa + " " + to_string(this->nrConturi);
}

string Banca::afisareDateBanca()
{
	return this->codBanca + " " + to_string(this->nrClienti);
}

float Operatiuni::getDobanda(float n)
{
	float dobNoua;
	if (n >= 500)
	{
		dobNoua = n + n * 0.8;
	}
	else
	{
		dobNoua = n + n * 0.3;
	}
	return dobNoua;
}

float Operatiuni::getSumaTotala(Client cl)
{
	
}