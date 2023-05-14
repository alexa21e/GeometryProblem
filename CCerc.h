#pragma once
#include "CPunct.h"
#include "CDreapta.h"

class CCerc : virtual public CPunct
{
public:
	CCerc();
	CCerc(CPunct c1, CPunct p1);
	~CCerc();
	int calcArieCerc(CPunct c1, CPunct p1);
	void printArie();
	void setArie(float arieC);
	int getArie();
	int calcPerimCerc(CPunct c1, CPunct p1);
	void printPerim();
	void setPerim(float perimC);
	int getPerim();
private:
	CPunct c1, p1;
	float arie, perimetru;
};
