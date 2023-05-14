#include "CPunct.h"
#include <iostream>
using namespace std;

CPunct::CPunct():x(-900), y(-900)
{
	//cout << "Constructor implicit al clasei CPunct" << endl;
}

CPunct::CPunct(int x, int y) : x(x), y(y)
{
	//cout << "Constructor general al clasei CPunct" << endl;
}

CPunct::~CPunct()
{
	//cout << "Destructor clasa CPunct" << endl;
}

void CPunct::setX(int xC)
{
	this->x = xC;
}

void CPunct::setY(int yC)
{
	this->y = yC;
}

int CPunct::getX()
{
	return x;
}

int CPunct::getY()
{
	return y;
}
