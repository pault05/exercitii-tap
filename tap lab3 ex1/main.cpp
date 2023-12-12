#include <iostream>
#include "header.h"
#include <string>
#include <vector>
using namespace std;

short n;
/*
double centruDeGreutate(vector<Punct> v)
{
	Punct G;
	double xG;
	double yG;

	for (int i = 0; i < n; ++i)
	{
		xG = xG + v[i].x;

	}
}
*/

int main()
{
	Dreapta d1;
	Dreapta d2(2.0, 3.0);

	double y1 = d1(5.5);
	double y2 = d2(1.5);

	double y3 = d2.Panta(1.5);

	cout << y1 << endl << y2 << endl << y3 << endl;
	
	vector<Punct> v;
	Punct p;

	cout << "dati nr de puncte ";
	//short n;
	cin >> n;

	for (short i = 0; i < n; ++i)
	{
		double a, b;
		cout << "dati x ";
		cin >> a;
		cout << "dati y ";
		cin >> b;
		p.setPunct(a, b);
		v.push_back(p);
	}

	for (short i = 0; i < n; ++i)
	{
		v[i].getPunct();
		cout << endl;
	}

	Punct p1(2, -1);
	Punct p2(3, 6);

	cout << distanta(p1, p2) << endl;

	return 0;
}