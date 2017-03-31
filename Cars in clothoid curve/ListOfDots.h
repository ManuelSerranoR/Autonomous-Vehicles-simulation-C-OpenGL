#pragma once
#include "LineDot.h"
#include "Car.h"

class ListOfDots
{
public:
	ListOfDots();
	virtual ~ListOfDots();
	void addDot(Car *myCar);
	void Dibuja(); //This dibuja will collect all "Dibuja()" from all LineDots

private:
	Vector2D dotPosition;
	int vectorCounter;
	int vectorCounter_2;

	//int a = Car::getDeviationVectorSize();
	int a;
	LineDot *myListOfDots[300]; //Manually introduce the number of dots of the first car
	LineDot *myListOfDots_2[400]; //Manually introduce the number of dots of the second
	//For future work, we will try to make this dynamic, and we will also only create one Car class, passing the vector as a parameter
	//The way it is done now, it is not a good and flexible disign. We should be able to create only one class of each, and different objects. Just one add method, and just one vector list.
};