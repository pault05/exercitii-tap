#include <iostream>
#include <string>
#include "Persoana.h"
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"
using namespace std;

int main()
{
	Student stud("pop", "ion", 22, 123456, "pop_ion22gmail.com", 10);
	stud.detalii();
	stud.afisare();

	Profesor prof("popa", "ioana", 42, 654321, "popa_ioana@yahoo.com", "chimie");
	prof.detalii();
	prof.afisare();

	Angajat angj("ion", "vasile", 39, 192830, "vasy_pop@gmail.ro", "IT");
	angj.detalii();
	angj.afisare();

	return 0;
}