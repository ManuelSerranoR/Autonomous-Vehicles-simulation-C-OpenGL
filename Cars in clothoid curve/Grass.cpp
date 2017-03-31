#include "Grass.h"


Grass::Grass()
{
}


Grass::~Grass()
{
}

void Grass::Dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(0, 170, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-400.0f, -400.0f, -0.1f);
	glVertex3f(-400.0f, 800.0f, -0.1f);
	glVertex3f(400.0f, 800.0f, -0.1f);
	glVertex3f(400.0f, -400.0f, -0.1f);
	glEnd();
	glEnable(GL_LIGHTING);

}
