#pragma once
#ifndef _H_MATRICE
#define _H_MATRICE
#include <string>
class Matrice {
public:
	int nrLinii;
	int nrColoane;
	int** elemente;

	Matrice(int nrLinii = 0, int nrCol = 0);

	Matrice(const Matrice&);

	~Matrice();

	int* operator[](int index) const;

	void print();


	//membre

	Matrice operator+(const Matrice&);
	Matrice operator-(const Matrice&);
	Matrice operator*(const Matrice&);
	bool operator!=(const Matrice&);
	bool operator==(const Matrice&);
	Matrice& operator=(const Matrice&);
	
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);


	//friend

	//friend Matrice operator+(const Matrice& m1, const Matrice& m2);


};

#endif