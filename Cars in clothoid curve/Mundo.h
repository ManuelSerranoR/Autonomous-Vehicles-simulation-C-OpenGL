#include "Car.h"
#include "StraightRoad.h"
#include "CurvedRoad.h"
#include "Grass.h"
#include "TemporalStraightRoad.h"
#include "ListOfDots.h"

class Mundo
{
public: 
	Mundo();
	virtual ~Mundo();
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void SetPos_ojo(Mundo* mundo);

	float x_ojo;
	float y_ojo;
	float z_ojo;

	float x_vista;
	float y_vista;
	float z_vista;

	long waitingTime = 0; // In terms of times*sample time

	vector<double> deviationVectorStraightCar1;
	vector<double> deviationVectorStraightCar2;

	vector<double> deviationVectorCurvedCar1;
	vector<double> deviationVectorCurvedCar2;

	//Car myCar; 
	Car* car1;
	Car* car2;
	StraightRoad myStraightRoad;
	CurvedRoad myCurvedRoad;
	Grass myGrass;
	TemporalStraightRoad myTemporalStraightRoad;
	ListOfDots myListOfDots;
	ListOfDots myListOfDots_2;
};