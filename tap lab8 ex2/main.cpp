#include <map>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
ifstream fin("in.txt");

int main()
{
	map <string, unsigned short> cuvinte;
	map <string, unsigned short>::iterator itM;
	//pair <map<string, unsigned short>::iterator, bool> it;
	string cuv;
	unsigned short index = 1;
	while (fin >> cuv)
	{
		if (cuvinte.count(cuv) == 0)
		{
			cuvinte[cuv] = 1;
		}
		else
		{
			cuvinte[cuv]++;
		}
	}
	
	for (itM = cuvinte.begin(); itM != cuvinte.end(); ++itM)
	{
		cout << itM->first << " " << itM->second << endl;
	}

	return 0;
}