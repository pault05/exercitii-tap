#include <string>
#include <set>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");

int main()
{
	set <string> in;
	set <string>::iterator init;

	string cuv;
	while (fin >> cuv)
	{
		in.insert(cuv);
	}

	for (init = in.begin(); init != in.end(); ++init)
	{
		fout << *init << endl;
	}

	return 0;
}