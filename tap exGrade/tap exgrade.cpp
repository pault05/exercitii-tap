#include "Header.h"
#include <iostream>
using namespace std;

Grade::Grade(double grad, string nume)
{
	this->grad = grad;
	this->tip = tip;
}

void Grade::setGrade(double g) { this->grad = g; }

void Grade::convertCtoF()
{
	grad = (grad * (9.0 / 5)) + 32;
	tip = "Fahrenheit";
}

void Grade::convertFtoC()
{
	grad = (grad - 32) * (5.0 / 9);
	tip = "Celsius";
}

double Grade::getGrade() { return grad; }

string Grade::getTip() { return tip; }

