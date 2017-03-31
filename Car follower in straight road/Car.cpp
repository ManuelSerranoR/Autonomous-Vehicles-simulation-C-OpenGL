#include "Car.h"


Car::Car()
{
	position.x = 0.0f;
	position.y = 3.0f;

	realPosition.x = position.x - (3.5*0.5);
	realPosition.y = position.y;

	futurePosition.x = position.x;
	futurePosition.y = position.y;

	currentAngle = PI;
	rotationAngle = 0;

	deviationVectorCounter = 0;
	movementVector = {0.5, 0.58714, 0.57809, 0.56119, 0.53533, 0.50016, 0.45589, 0.40308, 0.34251, 0.27513, 0.20197, 0.12413, 0.042728, -0.041096, -0.12622, -0.21156, -0.29604, -0.37866, -0.45847, -0.53458, -0.60618, -0.67256, -0.73308, -0.78717, -0.8344, -0.87441, -0.90694, -0.93181, -0.94897, -0.95843, -0.96031, -0.9548, -0.94217, -0.92277, -0.89701, -0.86537, -0.82837, -0.78658, -0.74059, -0.69105, -0.6386, -0.58391, -0.52764, -0.47045, -0.413, -0.35592, -0.29982, -0.24526, -0.19279, -0.14291, -0.096072, -0.05267, -0.01306, 0.022465, 0.053663, 0.080352, 0.10241, 0.11975, 0.13238, 0.14033, 0.14368, 0.14258, 0.13721, 0.1278, 0.1146, 0.097908, 0.078057, 0.05539, 0.030275, 0.0030945, -0.025759, -0.05589, -0.086901, -0.1184, -0.15, -0.18133, -0.21204, -0.24178, -0.27026, -0.29718, -0.32227, -0.34532, -0.36613, -0.38453, -0.40038, -0.4136, -0.42411, -0.43189, -0.43693, -0.43928, -0.43898, -0.43614, -0.43086, -0.42329, -0.41359, -0.40193, -0.38852, -0.37357, -0.35728, -0.33989, -0.32164, -0.30275, -0.28346, -0.26399, -0.24458, -0.22543, -0.20675, -0.18874, -0.17157, -0.1554, -0.14039, -0.12665, -0.1143, -0.10342, -0.094091, -0.086358, -0.08025, -0.075778, -0.072934, -0.071692, -0.072008, -0.073822, -0.07706, -0.081633, -0.087443, -0.094377, -0.10232, -0.11114, -0.1207, -0.13088, -0.14153, -0.15252, -0.1637, -0.17495, -0.18613, -0.19711, -0.20778, -0.21803, -0.22775, -0.23685, -0.24525, -0.25287, -0.25967, -0.26558, -0.27057, -0.27461, -0.2777, -0.27982, -0.281, -0.28124, -0.28058, -0.27905, -0.27671, -0.2736, -0.26978, -0.26534, -0.26033, -0.25483, -0.24893, -0.2427, -0.23622, -0.22958, -0.22285, -0.21613, -0.20947, -0.20296, -0.19666, -0.19063, -0.18494, -0.17964, -0.17478, -0.17038, -0.1665, -0.16314, -0.16034, -0.1581, -0.15644, -0.15534, -0.1548, -0.15481, -0.15535, -0.15639, -0.1579, -0.15986, -0.16221, -0.16493, -0.16797, -0.17128, -0.17481, -0.17852, -0.18236, -0.18628, -0.19023, -0.19416, -0.19804, -0.20183, -0.20547, -0.20893, -0.21219, -0.21521, -0.21796, -0.22043, -0.22259, -0.22443, -0.22594, -0.22712, -0.22796, -0.22847, -0.22865, -0.22851, -0.22807, -0.22733, -0.22632, -0.22506, -0.22357, -0.22188, -0.22001, -0.21799, -0.21584, -0.21361, -0.21131, -0.20897, -0.20663, -0.2043, -0.20201, -0.1998, -0.19767, -0.19566, -0.19378, -0.19204, -0.19047, -0.18907, -0.18786, -0.18683, -0.18601, -0.18538, -0.18495, -0.18471, -0.18467, -0.18482, -0.18514, -0.18563, -0.18628, -0.18707, -0.188, -0.18903, -0.19017, -0.19139, -0.19267, -0.19401, -0.19537, -0.19676, -0.19814, -0.1995, -0.20084, -0.20212, -0.20335, -0.20451, -0.20559, -0.20658, -0.20747, -0.20826, -0.20893, -0.20949, -0.20993, -0.21026, -0.21047, -0.21056, -0.21054, -0.21041, -0.21018, -0.20986, -0.20944, -0.20894, -0.20837, -0.20773, -0.20704, -0.2063, -0.20553, -0.20473, -0.20391, -0.2031, -0.20228, -0.20148, -0.2007, -0.19995, -0.19923, -0.19857, -0.19795, -0.19738, -0.19688, -0.19644, -0.19606, -0.19576, -0.19552, -0.19535, -0.19525, -0.19522, -0.19526, -0.19536 };
	bool aux = true;
}

Car::Car(vector<double> myMovementVector, vector<double> myDeviationVector, vector<int> packageVector, bool myLateralFlag, int color_R, int color_G, int color_B, float initial_positionX, float initial_positionY, bool packets)
{
	//Ojo aquí. Añado el vector de desviación lateral, por si hace falta en el futuro. Para el primer trabajo, 
	//computaré el movimiento lateral del coche del medio como una tangente inversa con un simple flag, que lo llamaremos lateralFlag
	colorR = color_R;
	colorG = color_G;
	colorB = color_B;

	lateralFlag = myLateralFlag;
	tangentIncrement = 10;

	position.x = initial_positionX;
	position.y = initial_positionY;

	realPosition.x = position.x;
	realPosition.y = position.y + myMovementVector[0];

	futurePosition.x = position.x;
	futurePosition.y = position.y;

	currentAngle = PI;
	rotationAngle = 0;

	deviationVectorCounter = 0;
	movementVectorCounter = 0;
	packageVectorCounter = 0;
	movementVector = myMovementVector;
	deviationVector = myDeviationVector;
	this -> packageVector = packageVector; //Another way to do the same as the two lines above, because of the same name.

	bool aux = true;
	this -> packets = packets;
}


Car::~Car()
{
}

Vector2D Car::getRealPosition()
{
	Vector2D realPositionReturn;
	realPositionReturn.x = realPosition.x;
	realPositionReturn.y = realPosition.y;
	return realPositionReturn;
}

void Car::Dibuja()
{
	glPushMatrix();
	glColor3ub(colorR, colorG, colorB);
	glTranslatef(realPosition.x, realPosition.y, 1.0f);
	//PARA DIBUJAR UN RECT¡NGULO
	glRotatef(rotationAngle, 0.0, 0.0, 1.0);
	glScalef(1, 2, 0.7f);//longitud, ancho y altura
	glutSolidCube(1.3f);
	glPopMatrix();
	glEnd();

	if (packets == 1)
	{
		if (packageVectorCounter < packageVector.size())
		{
			if (packageVector[packageVectorCounter] == 1)
			{
				glPushMatrix();
				glColor3ub(255, 255, 255);
				glTranslatef(realPosition.x, realPosition.y-0.2, 1.3);
				//glTranslatef(15, 0, 1.0f);
				//We draw the sphere... (little dot)
				//glScalef(1, 1, 1);//longitud, ancho y altura. I might want to use this to make the dots closer to mini lines..
				glutSolidSphere(0.4f, 10, 10);
				glPopMatrix();
				glEnd();
			}

			if (packageVector[packageVectorCounter] == 0)
			{
				glPushMatrix();
				glColor3ub(255, 0, 0);
				glTranslatef(realPosition.x, realPosition.y - 0.2, 1.3);
				//glTranslatef(15, 0, 1.0f);
				//We draw the sphere... (little dot)
				//glScalef(1, 1, 1);//longitud, ancho y altura. I might want to use this to make the dots closer to mini lines..
				glutSolidSphere(0.4f, 10, 10);
				glPopMatrix();
				glEnd();
			}
			packageVectorCounter++;
		}
	}
}

void Car::Movement()
{
	if (movementVectorCounter < (movementVector.size() - 1))
	{

		realPosition.x = futurePosition.x;
		realPosition.y = futurePosition.y;

		movementVectorCounter++;

		if (realPosition.y >= 10)
		{
			if (lateralFlag)
			{
				futurePosition.x = position.x + 1.75*atan(tangentIncrement) - 1.75*atan(10);
				tangentIncrement = tangentIncrement - 0.1; //Incremento de sampleo en la tangente. Mirar grafica para entender mejor
			}
			else
				futurePosition.x = realPosition.x;
		}
		else 
			futurePosition.x = realPosition.x;

		futurePosition.y = position.y + (0.3*movementVector[movementVectorCounter]);

		rotationAngle = -90 + (180 / PI)*atan((futurePosition.y - realPosition.y) / (futurePosition.x - realPosition.x)); // degrees (not radians) being Y axis our 0 degrees
	}
}