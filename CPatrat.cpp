#include "CPatrat.h"
#include "CPunct.h"
#include "CDreapta.h"
#include <iostream>
using namespace std;

CPatrat::CPatrat() : p1(-900, -900), p2(-900, -900)
{
	//cout << "Constructor implicit al clasei CPatrat" << endl;
}

CPatrat::CPatrat(CPunct p1, CPunct p2) : p1(p1), p2(p2)
{
	//cout << "Constructor general al clasei CPatrat" << endl;
}

CPatrat::~CPatrat()
{
	//cout << "Destructor al clasei CPatrat" << endl;
}

float CPatrat::calcAriePatrat(CPunct p1, CPunct p2)
{
	float l = 0.0;
	CDreapta lat;
	l = lat.calcLat(p1, p2);
	arie = l * l;
	return arie;
}

void CPatrat::printArie()
{
	cout << "Aria patratului este: " << calcAriePatrat(p1, p2) << endl;
}

void CPatrat::setArie(float arieC)
{
	this->arie = arieC;
}

int CPatrat::getArie()
{
	return arie;
}

float CPatrat::calcPerimPatrat(CPunct p1, CPunct p2)
{
	float l = 0.0;
	CDreapta lat;
	l = lat.calcLat(p1, p2);
	perimetru = 4 * l;
	return perimetru;
}

void CPatrat::printPerim()
{
	cout << "Perimetrul patratului este: " << calcPerimPatrat(p1, p2) << endl;
}

void CPatrat::setPerim(float perimC)
{
	this->perimetru = perimC;
}

int CPatrat::getPerim()
{
	return perimetru;
}
