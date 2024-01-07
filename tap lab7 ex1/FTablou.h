#pragma once
#ifndef _FTABLOU_H
#define _FTABLOU_H
#include <iostream>
using namespace std;

template <class T>
T max(T v[], int n)
{
	T maxx = v[0];
	for (int i = 0; i < n; ++i)
	{
		if (maxx < v[i])
		{
			maxx = v[i];
		}
	}

	return maxx;
}

template <class T>
T min(T v[], int n)
{
	T minn = v[0];
	for (int i = 0; i < n; ++i)
	{
		if (minn > v[i])
		{
			minn = v[i];
		}
	}

	return minn;
}

template <class T>
T caut_sec(T v[], int n, T x)
{
	int ok = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == x)
		{
			ok = 1;
			break;
		}
	}

	if (ok == 1)
	{
		cout << "Elementul " << x << " exista";
		return true;
		
	}
	else
	{
		cout << "Elementul " << x << " NU exista";
		return false;
	
	}
}

template <class T>
T caut_bin(T v[], int n, T x)
{
	int st = 1;
	int dr = n;
	int gasit = -1;

	while (st <= dr)
	{
		int mij = (st + dr) / 2;
		if (v[mij] == x)
		{
			gasit = mij;
			break;
		}
		else if (v[mij] < x)
		{
			st = mij + 1;
		}
		else
		{
			dr = mij - 1;
		}
	}

	if (gasit == -1)
	{
		cout << "Elementul " << x << " NU exista";
		return false;
	}
	else
	{
		cout << "Elementul " << x << " exista";
		return true;
	}
}

template <class T>
T sortare_bubble(T v[], int n)
{
	int ok;

	do 
	{
		ok = 0;

		for (int i = 0; i < n - 1; ++i)
		{
			if (v[i] > v[i + 1])
			{
				swap(v[i], v[i + 1]);
				ok = 1;
			}
		}
	} while (ok == 1);

	return 0;
}
#endif