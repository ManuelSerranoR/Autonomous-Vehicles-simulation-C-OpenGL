#pragma once
#include <stdlib.h>
#include "glut.h"
#include "Vector2D.h"
#include "Car.h"

class LineDot
{
public:
	LineDot();
	LineDot(Car myCar);
	virtual ~LineDot();

	void Dibuja();

private:
	Vector2D position;
	int color_R;
	int color_G;
	int color_B;
};