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
	Car(vector<double> myMovementVector, vector<double> myDeviationVector, vector<int> packageVector, bool myLateralFlag, int color_R, int color_G, int color_B, float initial_positionX, float initial_positionY, bool packets);
	virtual ~Car();

	void Dibuja();
	void Movement();
	Vector2D getRealPosition();

private:
	bool packets;
	int colorR;
	int colorG;
	int colorB;
	Vector2D position;
	Vector2D realPosition;
	Vector2D futurePosition;

	bool lateralFlag;
	float tangentIncrement;

	float currentAngle;
	float rotationAngle;
	int movementVectorCounter;
	int deviationVectorCounter;
	int packageVectorCounter;
	vector<double> movementVector;
	vector<double> deviationVector;
	vector<int> packageVector;
	bool aux;
};