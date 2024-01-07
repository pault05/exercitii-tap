#include <iostream>
#include <cstdlib>
#include <time.h>
#include "FTablou.h"
using namespace std;

int main()
{
	srand(time(NULL));

	int v[100];

	for (int i = 0; i < 100; ++i)
	{
		v[i] = rand() % 1000 + 1;
	}

	cout << min(v, 100) << endl;
	cout << max(v, 100) << endl;
	caut_sec(v, 100, 1);
	cout << endl;
	caut_bin(v, 100, 1);
	cout << endl;
	sortare_bubble(v, 100);
	for (int i = 0; i < 100; ++i)
	{
		cout << v[i] << " ";
	}

}