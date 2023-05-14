#pragma once
#include "CPunct.h"
#include "CDreapta.h"

class CPatrat : virtual public CDreapta
{
public:
	CPatrat();
	CPatrat(CPunct p1, CPunct p2);
	~CPatrat();
	float calcAriePatrat(CPunct p1, CPunct p2);
	void printArie();
	void setArie(float arieC);
	int getArie();
	float calcPerimPatrat(CPunct p1, CPunct p2);
	void printPerim();
	void setPerim(float perimC);
	int getPerim();
private:
	CPunct p1, p2;
	float arie, perimetru;
};
