#include "LineDot.h"


LineDot::LineDot()
{
}

LineDot::LineDot(Car myCar)
{
	position.x = myCar.getRealPosition().x;
	position.y = myCar.getRealPosition().y;
	color_R = 200;
	color_G = 0;
	color_B = 0;
}

LineDot::~LineDot()
{
}

void LineDot::Dibuja()
{

	//If this is too heavy for the compiler, consider placing gluDisk insted. Might be lighter for the processor
	glPushMatrix();
	glColor3ub(color_R, color_G, color_B);
	glTranslatef(position.x, position.y, 0.01f);
	//glTranslatef(15, 0, 1.0f);
	//We draw the sphere... (little dot)
	//glScalef(1, 1, 1);//longitud, ancho y altura. I might want to use this to make the dots closer to mini lines..
	glutSolidSphere(0.115f, 10, 10);
	glPopMatrix();
	glEnd();
}