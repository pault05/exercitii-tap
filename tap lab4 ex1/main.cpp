#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	/*
	Fractie f1(3, 4);
	Fractie f2(8, 4);

	//Fractie f3 = f1 - f2;
	
	//f1 += f2;
	
	Fractie h;
	 h.operator=(f1.operator++());
	//h.operator=(f1.operator++(1));

	// membru
	f1.operator<<(cout);

	Fractie f3;

	f3.operator>>(cin);

	f3.operator<<(cout);
	

	//friend
	//operator<<(cout, f1);

	//Fractie f4;
	//operator>>(cin, f4);
	//operator<<(cout, f4);
	

	*/
	
	int optiune;

	do {
		
		cout << "1. Adunare fractii" << endl;
		cout << "2. Scadere fractii" << endl;
		cout << "3. Inmultire fractii" << endl;
		cout << "4. Impartire fractii" << endl;
		cout << "5. Simplificare fractie" << endl;
		cout << "6. Egalitate fractii" << endl;
		cout << "7. Copiere fractie" << endl;
		cout << "8. Diferenta fractii" << endl;
		cout << "9. Comparare stricta fractii" << endl;
		cout << "10. Comparare cu egalitate fractii" << endl;
		cout << "11. Post incrementare" << endl;
		cout << "12. Pre incrementare" << endl;
		cout << "13. Post decrementare" << endl;
		cout << "14. Pre decrementare" << endl;


		cout << "Alegeti operatia : ";
		cin >> optiune;

		switch (optiune)
		{
		case 1:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			Fractie rez;

			rez = f1 + (f2);
			cout << rez.print() << endl;

			break;
		}

		case 2:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			Fractie rez;

			rez = f1 - f2;
			cout << rez.print() << endl;

			break;
		}
		case 3:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			Fractie rez;
			rez = f1 * f2;
			cout << rez.print() << endl;

			break;
		}

		case 4:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			Fractie rez;

			rez = f1 / f2;
			cout << rez.print() << endl;

			break;
		}

		case 5:
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie rez;

			rez = f1.simplifica();
			cout << rez.print() << endl;

			break;
		}

		case 6:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			cout << f1.operator==(f2) << endl;

			break;
		}

		case 7:
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie f2 = f1;

			cout << f2.print() << endl;

			break;
		}

		case 8:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			cout << f1.operator!=(f2) << endl;

			break;
		}

		case 9:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			if (f1 < f2)
			{
				cout << "f1 < f2" << endl;
			}
			else if (f1 > f2)
			{
				cout << "f1 > f2" << endl;
			}

			break;
		}

		case 10:
		{
			Fractie f1;
			Fractie f2;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);
			cout << "Fractie 2 = : ";
			f2.operator>>(cin);

			if (f1 <= f2)
			{
				cout << "f1 <= f2" << endl;
			}
			else if (f1 >= f2)
			{
				cout << "f1 >= f2" << endl;
			}

			break;
		}

		case 12:  //++pre
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie h;
			h.operator=(f1.operator++());

			h.print();
			cout << endl;

			break;
		}

		case 11:   //post++
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie h;
			h.operator=(f1.operator++(1));

			h.print();
			cout << endl;

			break;
		}

		case 13:  //post--
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie h;
			h.operator=(f1.operator--(1));

			h.print();
			cout << endl;

			break;
		}

		case 14: //--pre
		{
			Fractie f1;

			cout << "Fractie 1 = : ";
			f1.operator>>(cin);

			Fractie h;
			h.operator=(f1.operator--());

			h.print();
			cout << endl;
			
			break;
		}

		}

	} while (optiune != 0);
	

	return 0;
}