#include "CDreapta.h"
#include "CPunct.h"
#include <iostream>
#include <cmath>
using namespace std;

CDreapta::CDreapta() : p1(-900,-900), p2(-900,-900)
{
	//cout << "Constructor implicit al clasei CDreapta" << endl;
}

CDreapta::CDreapta(CPunct p1, CPunct p2) : p1(p1), p2(p2)
{
	//cout << "Constructor general al clasei CDreapta" << endl;
}

CDreapta::~CDreapta()
{
	//cout << "Destructor al clasei CDreapta" << endl;
}

float CDreapta::calcLat(CPunct p1, CPunct p2)
{
	float lat = 0.0;
	lat = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) + (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
	lat = sqrt(lat);
	return lat;
}

