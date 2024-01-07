#include <iostream>
#include "TablouS.h"
using namespace std;

int main()
{
	Tablou_Uni<int> v;

	for (int i = 0; i < 9; ++i)
	{
		v.adauga(i);
	}
}