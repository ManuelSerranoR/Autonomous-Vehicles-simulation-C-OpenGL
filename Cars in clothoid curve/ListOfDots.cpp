#include "ListOfDots.h"


ListOfDots::ListOfDots()
{
	vectorCounter = 1;
	vectorCounter_2 = 1;
}


ListOfDots::~ListOfDots()
{
	for (int i = 0; i <= vectorCounter; i++)
	{
		delete myListOfDots[i];
	}

	for (int j = 0; j <= vectorCounter_2; j++)
	{
		//This should also be deleted but I am having an error. Temporarily I will leave it commented.
		//delete myListOfDots_2[j];
	}
}

void ListOfDots::addDot(Car *myCar)
{
	myListOfDots[vectorCounter++] = new LineDot(*myCar);
}

void ListOfDots::Dibuja()
{
	if (myListOfDots != 0)
		for (int i = 3; i<vectorCounter; i++)
		{
			myListOfDots[i]->Dibuja();
		}
	if (myListOfDots_2 != 0)
		for (int i = 3; i<vectorCounter_2; i++)
		{
			myListOfDots_2[i]->Dibuja();
		}
}