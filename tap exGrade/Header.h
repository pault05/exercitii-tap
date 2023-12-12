#pragma once
#ifndef _GRAD_H
#define _GRAD_H
#include <string>
using namespace std;

class Grade {

private:
	double grad;
	string tip;

public:
	Grade(double grad = 0, string nume = "Celsius");
	
	void setGrade(double grade);

	void convertCtoF();

	void convertFtoC();

	double getGrade();

	string getTip();
};

#endif