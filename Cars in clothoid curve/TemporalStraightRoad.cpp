#include "TemporalStraightRoad.h"


TemporalStraightRoad::TemporalStraightRoad()
{
}


TemporalStraightRoad::~TemporalStraightRoad()
{
}

void TemporalStraightRoad::Dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(180, 180, 180);
	glBegin(GL_POLYGON);
	glVertex3f(30.0f, 60.0f, 0.0f);
	glVertex3f(30.0f, 70.0f, 0.0f);
	glVertex3f(70.0f, 70.0f, 0.0f);
	glVertex3f(70.0f, 60.0f, 0.0f);
	glEnd();
	glEnable(GL_LIGHTING);
}