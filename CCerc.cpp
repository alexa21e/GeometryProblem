#include "CCerc.h"
#include "CPunct.h"
#include "CDreapta.h"
#include <iostream>
using namespace std;

CCerc::CCerc() : c1(-900,-900), p1(-900, -900)
{
	//cout << "Constructor implicit al clasei CCerc" << endl;
}

CCerc::CCerc(CPunct c1, CPunct p1) : c1(c1), p1(p1)
{
	//cout << "Constructor general al clasei CCerc" << endl;
}

CCerc::~CCerc()
{
	//cout << "Destructor al clasei CCerc" << endl;
}

int CCerc::calcArieCerc(CPunct c1, CPunct p1)
{
	float r = 0.0;
	CDreapta raza;
	r = raza.calcLat(c1, p1);
	arie = r * r;
	return arie;
}

void CCerc::printArie()
{
	cout << "Aria cercului este: " << calcArieCerc(c1, p1) << "*pi" << endl;
}

void CCerc::setArie(float arieC)
{
	this->arie = arieC;
}

int CCerc::getArie()
{
	return arie;
}

int CCerc::calcPerimCerc(CPunct c1, CPunct p1)
{
	float r = 0.0;
	CDreapta raza;
	r = raza.calcLat(c1, p1);
	perimetru = 2 * r;
	return perimetru;
}

void CCerc::printPerim()
{
	cout << "Perimetrul cercului este: " << calcPerimCerc(c1, p1) << "*pi" << endl;
}

void CCerc::setPerim(float perimC)
{
	this->perimetru = perimC;
}

int CCerc::getPerim()
{
	return perimetru;
}
