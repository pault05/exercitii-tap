#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
#include <string>

using namespace std;


class Fractie {

	private:
		int numarator;
		int numitor;

	public:
//constructori
		Fractie(); // 0 1 param

		Fractie(int numarator);  //numarator numitor = 1

		Fractie(int numarator, int numitor); //ambele

		Fractie(const Fractie&);

		~Fractie();


//metode

		//Fractie impartire();
		//Fractie adunare(Fractie rez);
		//Fractie inmultire();
		//Fractie scadere();
		int cmmdc(int n, int m);
		int cmmmc(int a, int b);
		Fractie adunare(const Fractie&);
		Fractie scadere(const Fractie&);
		Fractie inmultire(const Fractie&);
		Fractie impartire(const Fractie&);
		Fractie simplifica();
		Fractie reciproc();  //?
		bool egal(const Fractie&);
		string print();


//gettere settere
		int  getNumitor();
		void setNumitor(int n);
		int getNumarator();
		void setNumarator(int n);
};


#endif
