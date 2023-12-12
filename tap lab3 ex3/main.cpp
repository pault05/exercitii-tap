#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	cout << "nr carti : ";
	int n;
	cin >> n;
	
	Carte** vcarte = new Carte * [n];

	for (int i = 0; i < n; ++i)
	{
		cout << "Autor carte " << i + 1 << " : ";
		string aut;
		cin >> aut;

		cout << "Titlu carte " << i + 1 << " : ";
		string tit;
		cin >> tit;

		cout << "ISBN carte " << i + 1 << " : ";
		int ID;
		cin >> ID;

		cout << "Pret carte " << i + 1 << " : ";
		int pt;
		cin >> pt; 

		vcarte[i] = new Carte(aut, tit, ID, pt);
	}

	cout << "Autor : ";
	string autTast;
	cin >> autTast;

	int ok = 0;

	for (int i = 0; i < n; ++i)
	{
		if (vcarte[i]->getAutor() == autTast)
		{
			cout << vcarte[i]->getAutor() << " ";
			cout << vcarte[i]->getTitlu() << " ";
			cout << vcarte[i]->getISBN() << " ";
			cout << vcarte[i]->getPret() << endl;
			ok = 1;
		}
	}

	if (ok == 0)
	{
		cout << "Nu s-au gasit carti!";
	}
	return 0;
}