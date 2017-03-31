#include "Car.h"
#include "StraightRoad.h"
#include "Grass.h"

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

private:
	float x_ojo;
	float y_ojo;
	float z_ojo;

	float x_vista;
	float y_vista;
	float z_vista;

	long waitingTime = 0; // In terms of times*sample time 
	vector<double> movementVectorCar1;
	vector<double> movementVectorCar2;
	vector<double> deviationVectorCar1;
	vector<double> deviationVectorCar2;
	vector<int> packageVectorCar1;
	vector<int> packageVectorCar2;
	//Car myCar; 
	Car* car1;
	Car* car2;
	Car* car3;
	StraightRoad myStraightRoad;
	Grass myGrass;
};