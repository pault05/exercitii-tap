#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	string optiune;
	cout << "C sau F? : ";
	cin >> optiune;
	Grade gr2;
		if (optiune == "C")
		{
			double gr1;
			cout << "Introduceti grade C : ";
			cin >> gr1;
			Grade grad1(gr1);
			grad1.convertCtoF();
			cout << grad1.getGrade() << " " << grad1.getTip();
			cout << endl;
		}
		else if (optiune == "F")
		{

			double gr2;
			cout << "Introduceti grade F : ";
			cin >> gr2;
			Grade grad1(gr2);
			grad1.convertFtoC();
			cout << grad1.getGrade() << " " << grad1.getTip();
			cout << endl;
		}
		else
		{
			cout << "ERROR";
		}
	
return 0;
}

