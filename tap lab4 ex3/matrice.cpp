#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

Matrice::Matrice(int nrLinii, int nrCol) : nrLinii(nrLinii), nrColoane(nrCol)
{
	this->elemente = new int* [nrLinii];

	for (int i = 0; i < nrLinii; ++i)
	{
		this->elemente[i] = new int[nrColoane];
	}
}


Matrice::Matrice(const Matrice& other)
{
	nrLinii = other.nrLinii;
	nrColoane = other.nrColoane;

	for (int i = 0; i < nrLinii; ++i)
	{
		for (int j = 0; j < nrColoane; ++j)
		{
			this->elemente[i][j] = other.elemente[i][j];
		}
	}
}


Matrice::~Matrice()
{
	for (int i = 0; i < this->nrLinii; ++i)
	{
		delete[] this->elemente[i];
	}
	delete[] elemente;
}

int* Matrice::operator[](int index) const
{
	return elemente[index];
}

void Matrice::print()
{
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			cout << (this->elemente[i][j]) << " ";
		}
		cout << endl;
	}
}

//membre

Matrice Matrice::operator+(const Matrice& other)
{
	Matrice rez(this->nrLinii, this->nrColoane);

	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		return Matrice();
	}


	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			rez.elemente[i][j] = this->elemente[i][j] + other.elemente[i][j];
		//	cout << rez.elemente[i][j];
		}
	}

	return rez;
}


Matrice Matrice::operator-(const Matrice& other)
{
	Matrice rez(this->nrLinii, this->nrColoane);

	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		return Matrice();
	}


	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			rez.elemente[i][j] = this->elemente[i][j] - other.elemente[i][j];
			//	cout << rez.elemente[i][j];
		}
	}

	return rez;
}

Matrice Matrice::operator*(const Matrice& other)
{
	Matrice rez(this->nrLinii, this->nrColoane);

	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		return Matrice();
	}

	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			rez.elemente[i][j] = 0;

			for (int k = 0; k < nrLinii; ++k)
			{
				rez.elemente[i][j] = rez.elemente[i][j] + this->elemente[i][k] * other.elemente[k][j];
				//cout << rez.elemente[i][j] << " ";
			}
		}
	}
	return rez;
}

bool Matrice::operator!=(const Matrice& other)
{
	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		return false;
	}

	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			if (this->elemente[i][j] != other.elemente[i][j])
			{
				return true;
			}
		}
	}
	return false;
}


bool Matrice::operator==(const Matrice& other)
{
	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		return false;
	}

	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			if (this->elemente[i][j] != other.elemente[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

Matrice& Matrice::operator=(const Matrice& other)
{
	if (this->nrColoane != other.nrColoane || this->nrLinii != other.nrLinii)
	{
		cout << "ERROR";
	}

	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			this->elemente[i][j] = other.elemente[i][j];
		}
	}

	return *this;
}

/*
ostream& Matrice::operator<<(ostream& os)
{
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			os << this->elemente[i][j] << " ";
		}
		cout << endl;
	}

	return os;
}



istream& Matrice::operator>>(istream& is)
{
	for (int i = 0; i < this->nrLinii; ++i)
	{
		for (int j = 0; j < this->nrColoane; ++j)
		{
			is >> this->elemente[i][j];
		}
	}
	return is;
}


*/
//friend

/*
Matrice operator+(const Matrice& m1, const Matrice& m2)
{
	if (m1.nrLinii != m2.nrLinii || m1.nrColoane != m2.nrColoane)
	{
		return Matrice();
	}

	int linii = m1.nrLinii;
	int coloane = m1.nrColoane;

	Matrice rez(linii, coloane);

	for (int i = 0; i < linii; ++i)
	{
		for (int j = 0; j < coloane; ++j)
		{
			rez.elemente[i][j] = m1.elemente[i][j] + m2.elemente[i][j];
		}
	}

	return rez;
}
*/