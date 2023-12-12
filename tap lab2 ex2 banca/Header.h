#pragma once
#ifndef  _BANCA_H
#define _BANCA_H
#include <string>

using namespace std;


class Operatiuni {
public:
	float getSumaTotala(Client cl);
	float getDobanda(float n);
	void depunere(float suma);
	void extragere(float suma);
};

class Banca : Operatiuni{

private:
	string codBanca;
	unsigned nrClienti;
	Client clienti;

public:
	Banca(string codBanca="", unsigned nrClienti=0, Client clienti);
	Banca(const Banca& other);

	string getCodBanca();
	void setCodBanca(string n);

	unsigned getNrClienti();
	void setNrClienti(unsigned n);

	//clienti?

	string afisareDateBanca();

};

class ContBancar : Operatiuni{
private:
	string numarCont;
	float suma;
	string moneda = ("RON", "EUR");

public:
	ContBancar(string numarCont = "", float suma = 0.0, string moneda = ("RON", "EUR"));
	ContBancar(const ContBancar& other);
	~ContBancar();

	void transfer(ContBancar& contDest, float suma); // doar intre conturi RON-RON

	string getNumarCont();
	void setNumarCont(string n);

	float getSuma();
	void setSuma(float n);

	string getMoneda();
	void setMoneda(string n);

	string afisareDateCont();
};

class Client : Operatiuni {
private:
	string nume;
	string prenume;
	string adresa;
	unsigned nrConturi;
	ContBancar conturi;

public:
	Client(string nume = "", string prenume = "", string adresa = "", unsigned nrConturi = 0, ContBancar conturi);
	Client(const Client& other);
	~Client();

	string getNume();
	void setNume(string n);

	string getPrenume();
	void setPrenume(string n);

	string getAdresa();
	void setAdresa(string n);

	unsigned getNrConturi();
	void setNrConturi(unsigned n);


	string afisareDateClient();

	//conturi?

};

#endif 