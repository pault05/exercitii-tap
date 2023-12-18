#include "Header.h"
#include "Manager.h"
#include <iostream>
using namespace std;

int main()
{
	Angajat angj(10.7, 30);
	angj.printAngj();
	cout << angj.getSalar() << endl;
	cout << angj.getTarifOrar() << endl;

	
Manager mang(10.7, 30, 10);
mang.printAngj();
cout << mang.getSalar();


	return 0;
}
