#pragma once
#include "CPunct.h"

class CDreapta : virtual public CPunct {
public:
	CDreapta();
	CDreapta(CPunct p1, CPunct p2);
	~CDreapta();
	float calcLat(CPunct p1, CPunct p2);
private:
	CPunct p1, p2;
};
