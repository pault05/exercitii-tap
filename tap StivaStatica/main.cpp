#include <iostream>
#include <string>
#include "StivaStatica.h"

using namespace std;

int main()
{
	Array_Stack stiva;

	int optiune;

	do {

		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peek" << endl;

		cout << "Alegeti operatia : ";
		cin >> optiune;

		switch (optiune)
		{

		case 1:
		{
			int el;
			cout << "element = ";
			cin >> el;
			stiva.push(el);
			break;
		}

		case 2:
		{
			stiva.pop();
			break;
		}

		case 3:
		{
			cout << stiva.peek();
			break;
		}
		}
	} while (optiune != 0);
	
	return 0;

}