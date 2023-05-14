#pragma once

class CPunct {
public:
	CPunct();
	CPunct(int x, int y);
	~CPunct();
	void setX(int xC);
	void setY(int yC);
	int getX();
	int getY();
protected:
	int x, y;
};