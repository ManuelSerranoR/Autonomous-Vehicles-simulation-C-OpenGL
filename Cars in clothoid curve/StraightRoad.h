#pragma once
#include "glut.h"


#define DASHED_LINE_WIDTH 2


class StraightRoad
{
public:
	StraightRoad();
	StraightRoad(float v1x, float v1y, float v1z, float v2x, float v2y, float v2z, float v3x, float v3y, float v3z, float v4x, float v4y, float v4z);
	virtual ~StraightRoad();

	void Dibuja();


private:
	double length;
	double width;
	bool drawDashedLine;
};