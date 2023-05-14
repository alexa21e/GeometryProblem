#pragma once
#include "CPunct.h"
#include "CDreapta.h"

class CDreptunghi : virtual public CDreapta {
public:
	CDreptunghi();
	CDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4);
	~CDreptunghi();
	float calcArieDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4);
	void printArie();
	void setArie(float arieC);
	int getArie();
	float calcPerimDreptunghi(CPunct p1, CPunct p2, CPunct p3, CPunct p4);
	void printPerim();
	void setPerim(float perimC);
	int getPerim();
private:
	CPunct p1, p2, p3, p4;
	float arie, perimetru;
};
