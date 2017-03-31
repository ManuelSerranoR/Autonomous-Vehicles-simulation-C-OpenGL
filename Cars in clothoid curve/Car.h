#pragma once
#include <stdlib.h>
#include "glut.h"
#include "Vector2D.h"
#include <vector>
using namespace std;


#define PI 3.14159265


class Car
{
public:
	Car();
	Car(vector<double> vectorForStraightPart, vector<double> vectorForCurvedPart, int color_R, int color_G, int color_B, float initial_positionX, float initial_positionY);
	virtual ~Car();

	void Dibuja();
	void Movement(float angle_sample1, float angle_sample2, float angle_sample3, float angle_sample4);
	Vector2D getRealPosition();

private:
	int colorR;
	int colorG;
	int colorB;
	Vector2D position;
	Vector2D realPosition;
	Vector2D futurePosition;
	float currentAngle;
	float rotationAngle;
	int deviationVectorCounterCurved;
	int deviationVectorCounterStraight;
	vector<double> deviationVectorStraight;
	vector<double> deviationVectorCurved;
	bool aux;
	bool aux1;
	bool aux2;
	bool aux3;
};