#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Matrice m(3, 3);
	int k = 1;

	for (int i = 0; i < m.nrLinii; ++i)
	{
		for (int j = 0; j < m.nrColoane; ++j)
		{
			m.elemente[i][j] = k++;
		}
	}

	Matrice m2(3, 3);
	k = 1;
	for (int i = 0; i < m2.nrLinii; ++i)
	{
		for (int j = 0; j < m2.nrColoane; ++j)
		{
			m2.elemente[i][j] = k++;
		}
	}

	
	return 0;
}