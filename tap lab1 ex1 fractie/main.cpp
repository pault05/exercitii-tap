#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	int optiune;

	do {

		cout << "1. Adunare fractii" << endl;
		cout << "2. Scadere fractii" << endl;
		cout << "3. Inmultire fractii" << endl;
		cout << "4. Impartire fractii" << endl;
		cout << "5. Simplificare fractie" << endl;
		cout << "6. Egalitate fractii" << endl;
		cout << "7. Copiere fractie" << endl;

		cout << "Alegeti operatia : ";
		cin >> optiune;

		switch (optiune)
		{
		case 1:
		{
			Fractie f1;
			Fractie f2;

			int nrf1, numf1, nrf2, numf2;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;


			cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
			cout << "numitor fr2 = "; cin >> numf2; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			f2.setNumitor(numf2);
			f2.setNumarator(nrf2);

			Fractie rez;

			rez = f1.adunare(f2);
			cout << rez.print() << endl;

			break;
		}

		case 2:
		{
			Fractie f1;
			Fractie f2;

			int nrf1, numf1, nrf2, numf2;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;


			cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
			cout << "numitor fr2 = "; cin >> numf2; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			f2.setNumitor(numf2);
			f2.setNumarator(nrf2);

			Fractie rez;

			rez = f1.scadere(f2);
			cout << rez.print() << endl;

			break;
		}
		case 3:
		{
			Fractie f1;
			Fractie f2;

			int nrf1, numf1, nrf2, numf2;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;


			cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
			cout << "numitor fr2 = "; cin >> numf2; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			f2.setNumitor(numf2);
			f2.setNumarator(nrf2);

			Fractie rez;

			rez = f1.inmultire(f2);
			cout << rez.print() << endl;

			break;
		}

		case 4:
		{
			Fractie f1;
			Fractie f2;

			int nrf1, numf1, nrf2, numf2;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;


			cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
			cout << "numitor fr2 = "; cin >> numf2; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			f2.setNumitor(numf2);
			f2.setNumarator(nrf2);

			Fractie rez;

			rez = f1.impartire(f2);
			cout << rez.print() << endl;

			break;
		}

		case 5:
		{
			Fractie f1;

			int nrf1, numf1;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			Fractie rez;

			rez = f1.simplifica();
			cout << rez.print() << endl;

			break;
		}

		case 6:
		{
			Fractie f1;
			Fractie f2;

			int nrf1, numf1, nrf2, numf2;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;


			cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
			cout << "numitor fr2 = "; cin >> numf2; cout << endl;

			f1.setNumitor(numf1);
			f1.setNumarator(nrf1);

			f2.setNumitor(numf2);
			f2.setNumarator(nrf2);

			Fractie rez;

			cout << f1.egal(f2) << endl;

			break;
		}

		case 7: //??
		{
			Fractie f1;

			int nrf1, numf1;

			cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
			cout << "numitor fr1 = "; cin >> numf1; cout << endl;

			Fractie f2 = f1;

			cout << f2.print() << endl;

			break;
		}

		}

	}while (optiune != 0);
	
	/*	
	Fractie f1;
	Fractie f2;

	int nrf1, numf1, nrf2, numf2;

	cout << "numarator fr1 = "; cin >> nrf1; cout << endl;
	cout << "numitor fr1 = "; cin >> numf1; cout << endl;

	 
	cout << "numarator fr2 = "; cin >> nrf2; cout << endl;
	cout << "numitor fr2 = "; cin >> numf2; cout << endl;

	f1.setNumitor(numf1);
	f1.setNumarator(nrf1);

	f2.setNumitor(numf2);
	f2.setNumarator(nrf2);

	Fractie rez;

	
	//rez = f1.adunare(f2);
	//cout << rez.print();
	
	//rez = f1.scadere(f2);
	//cout << rez.print();
	
	//rez = f1.inmultire(f2);
	//cout << rez.print();

	//rez = f1.impartire(f2);
	//cout << rez.print();

	//rez = f1.simplifica();
	//cout << rez.print();

	//cout << f1.egal(f2);
	*/

	return 0;
}