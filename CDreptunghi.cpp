#include "CDreptunghi.h"
#include "CPunct.h"
#include "CDreapta.h"
#include <iostream>
using namespace std;

CDreptunghi::CDreptunghi() : p1(-900, -900), p2(-900, -900), p3(-900, -900), p4(-900, -900)
{
	//cout << "Constructor implicit al clasei CDreptunghi" << endl;
}

CDreptunghi::CDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4) : p1(p1), p2(p2), p3(p3), p4(p4)
{
	//cout << "Constructor general al clasei CDreptunghi" << endl;
}

CDreptunghi::~CDreptunghi()
{
	//cout << "Destructor al clasei CDreptunghi" << endl;
}

float CDreptunghi::calcArieDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4)
{
	float l1 = 0, l2 = 0;
	CDreapta lat1, lat2;
	l1 = lat1.calcLat(p1, p2);
	l2 = lat2.calcLat(p2, p3);
	arie = l1 * l2;
	return arie;
}

void CDreptunghi::printArie()
{
	cout << "Aria dreptunghiului este: " << calcArieDreptunghi(p1, p2, p3, p4) << endl;
}

void CDreptunghi::setArie(float arieC)
{
	this->arie = arieC;
}

int CDreptunghi::getArie()
{
	return arie;
}

float CDreptunghi::calcPerimDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4)
{
	float l1 = 0, l2 = 0;
	CDreapta lat1, lat2;
	l1 = lat1.calcLat(p1, p2);
	l2 = lat2.calcLat(p2, p3);
	perimetru = 2*l1 + 2*l2;
	return perimetru;
}

void CDreptunghi::printPerim()
{
	cout << "Perimetrul dreptunghiului este: " << calcPerimDreptunghi(p1, p2, p3, p4) << endl;
}

void CDreptunghi::setPerim(float perimC)
{
	this->perimetru = perimC;
}

int CDreptunghi::getPerim()
{
	return perimetru;
}
