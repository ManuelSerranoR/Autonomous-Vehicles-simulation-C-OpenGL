#include "StraightRoad.h"



StraightRoad::StraightRoad()
{
	drawDashedLine = true;
}

StraightRoad::StraightRoad(float v1x, float v1y, float v1z, float v2x, float v2y, float v2z, float v3x, float v3y, float v3z, float v4x, float v4y, float v4z)
{
	//this->v1x = v1x;
	//this->v1y = v1y;
	//this->v1z = v1z;
	//this->v2x = v2x;
	//this->v2y = v2y;
	//this->v2z = v2z;
	//this->v3x = v3x;
	//this->v3y = v3y;
	//this->v3z = v3z;
	//this->v4x = v4x;
	//this->v4y = v4y;
	//this->v4z = v4z;
}


StraightRoad::~StraightRoad()
{
}

void StraightRoad::Dibuja()
{
	//Horizontal part
	glDisable(GL_LIGHTING);
	glColor3ub(180, 180, 180);
	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, -30.0f, 0.0f);
	glVertex3f(-5.0f, 79.9f, 0.0f);
	glVertex3f(5.0f, 79.9f, 0.0f);
	glVertex3f(5.0f, -30.0f, 0.0f);
	glEnd();



	//Darker lines on the sides
	glDisable(GL_LIGHTING);
	glColor3ub(70, 70, 70);
	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, -30.0f, 0.01f);
	glVertex3f(-5.0f, 78.9f, 0.01f);
	glVertex3f(-4.8f, 78.9f, 0.01f);
	glVertex3f(-4.8f, -30.0f, 0.01f);
	glEnd();

	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glVertex3f(4.8f, -30.0f, 0.01f);
	glVertex3f(4.8f, 78.9f, 0.01f);
	glVertex3f(5.0f, 78.9f, 0.01f);
	glVertex3f(5.0f, -30.0f, 0.01f);
	glEnd();


	//Dashed white line in the middle
	for (int i = DASHED_LINE_WIDTH - 30; i <= 82; i = i + DASHED_LINE_WIDTH)
	{
		if (drawDashedLine)
		{
			glDisable(GL_LIGHTING);
			glColor3ub(255, 255, 255);
			glBegin(GL_POLYGON);
			glVertex3f(-0.07f, i - DASHED_LINE_WIDTH, 0.01f);
			glVertex3f(-0.07f, i, 0.01f);
			glVertex3f(0.07f, i, 0.01f);
			glVertex3f(0.07f, i - DASHED_LINE_WIDTH, 0.01f);
			glEnd();
			drawDashedLine = false;
		}
		else drawDashedLine = true;

	}
}