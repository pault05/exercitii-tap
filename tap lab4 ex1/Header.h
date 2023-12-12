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

	int cmmdc(int n, int m);
	int cmmmc(int a, int b);

	//membru
	Fractie operator+(const Fractie&);
	Fractie operator-(const Fractie&);
	Fractie operator*(const Fractie&);
	Fractie operator/(const Fractie&);
	bool operator<(const Fractie&);
	bool operator>(const Fractie&);
	bool operator<=(const Fractie&);
	bool operator>=(const Fractie&);
	bool operator!=(const Fractie&);
	bool operator==(Fractie&);

	//membru
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);

	//friend
	//friend ostream& operator<<(ostream& os,const Fractie& f);
	//friend istream& operator>>(istream& is, Fractie& f);

	//compusi
	Fractie &operator+=(Fractie& other);
	Fractie &operator-=(Fractie& other);
	Fractie &operator*=(Fractie& other);
	Fractie &operator/=(Fractie& other);
	Fractie &operator=(const Fractie& other);
	
	Fractie& operator++(); //pre
	Fractie operator++(int);  //post

	Fractie& operator--(); //pre 
	Fractie operator--(int); //post

	Fractie simplifica();
	//Fractie reciproc();  //?
	bool egal(const Fractie&);
	string print();

	//friend + - * / < > <= >= != ==

	friend Fractie operator+(const Fractie& f1, const Fractie& f2);
	friend Fractie operator-(const Fractie& f1, const Fractie& f2);
	friend Fractie operator*(const Fractie& f1, const Fractie& f2);
	friend Fractie operator/(const Fractie& f1, const Fractie& f2);
	//friend bool operator<(const Fractie& f1, const Fractie& f2)
	//friend bool operator>(const Fractie& f1, const Fractie& f2);
	//friend bool operator>=(const Fractie& f1, const Fractie& f2);
	//friend bool operator<=(const Fractie& f1, const Fractie& f2);
	friend bool operator!=(const Fractie& f1, const Fractie& f2);
	friend bool operator==(const Fractie& f1, const Fractie& f2);




	//gettere settere
	inline int  getNumitor() const { return this->numitor; }
	inline void setNumitor(int n) { this->numitor = n; }
	inline int getNumarator() const { return this->numarator; }
	inline void setNumarator(int n) { this->numarator = n; }
};

#endif