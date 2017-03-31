#include "CurvedRoad.h"


CurvedRoad::CurvedRoad()
{
}


CurvedRoad::~CurvedRoad()
{
}

void CurvedRoad::Dibuja()
{
	//This road will be set with a radius of 78.9 intentionally so that way, given the data they gave me, the speed in the curve shouldnt change.
	//The following code applies to the discretised clothoid. Parts A, B, C and D are the divisions. 

	//A
	//Road
	GLUquadricObj *qobjA = gluNewQuadric();
	glTranslatef(400, 78.9f, 0.1f);
	glColor3ub(180, 180, 180);
	gluPartialDisk(qobjA, 395, 405, 30, 1, -90.0, 2.15);
	glTranslatef(-400.0f, -78.9f, -0.1f);

	//Boudaries
	GLUquadricObj *qobjA1 = gluNewQuadric();
	glTranslatef(400, 78.9f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjA1, 404.8, 405, 30, 1, -90.0, 2.15);
	glTranslatef(-400.0f, -78.9f, -0.2f);

	GLUquadricObj *qobjA2 = gluNewQuadric();
	glTranslatef(400, 78.9f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjA2, 395, 395.2f, 30, 1, -90.0, 2.15);
	glTranslatef(-400.0f, -78.9f, -0.2f);

	//White Line
	GLUquadricObj *qobjA3 = gluNewQuadric();
	glTranslatef(400, 78.9f, 0.2f);
	glColor3ub(255,255,255);
	gluPartialDisk(qobjA3, 399.93, 400.07, 30, 1, -90.0, 2.15);
	glTranslatef(-400.0f, -78.9f, -0.2f);
	
	//B
	//Road
	GLUquadricObj *qobjB = gluNewQuadric();
	glTranslatef(200.141f, 86.403f, 0.1f);
	glColor3ub(180, 180, 180);
	gluPartialDisk(qobjB, 195, 205, 30, 1, (-90+2.15), 4.30);
	glTranslatef(-200.141f, -86.403f, -0.1f);
	
	//Boudaries
	GLUquadricObj *qobjB1 = gluNewQuadric();
	glTranslatef(200.141f, 86.403f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjB1, 204.8, 205, 30, 1, (-90 + 2.15), 4.30);
	glTranslatef(-200.141f, -86.403f, -0.2f);

	GLUquadricObj *qobjB2 = gluNewQuadric();
	glTranslatef(200.141f, 86.403f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjB2, 195, 195.2, 30, 1, (-90 + 2.15), 4.30);
	glTranslatef(-200.141f, -86.403f, -0.2f);

	//White Line
	GLUquadricObj *qobjB3 = gluNewQuadric();
	glTranslatef(200.141f, 86.403f, 0.2f);
	glColor3ub(255, 255, 255);
	gluPartialDisk(qobjB3, 200 - 0.07, 200 + 0.07, 30, 1, (-90 + 2.15), 4.30);
	glTranslatef(-200.141f, -86.403f, -0.2f);


	//C
	//Road
	GLUquadricObj *qobjC = gluNewQuadric();
	glTranslatef(133.896f, 93.892f, 0.1f);
	glColor3ub(180, 180, 180);
	gluPartialDisk(qobjC, (133.33333 - 5), (133.33333 + 5), 30, 1, (-90 + 2.15 + 4.30), 6.45);
	glTranslatef(-133.896f, -93.892f, -0.1f);

	//Boudaries
	GLUquadricObj *qobjC1 = gluNewQuadric();
	glTranslatef(133.896f, 93.892f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjC1, (133.33333 + 5-0.2), (133.33333 + 5), 30, 1, (-90 + 2.15 + 4.30), 6.45);
	glTranslatef(-133.896f, -93.892f, -0.2f);

	GLUquadricObj *qobjC2 = gluNewQuadric();
	glTranslatef(133.896f, 93.892f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjC2, (133.33333 - 5), (133.33333 - 5+0.2), 30, 1, (-90 + 2.15 + 4.30), 6.45);
	glTranslatef(-133.896f, -93.892f, -0.2f);

	//White Line
	GLUquadricObj *qobjC3 = gluNewQuadric();
	glTranslatef(133.896f, 93.892f, 0.2f);
	glColor3ub(255, 255, 255);
	gluPartialDisk(qobjC3, (133.33333 - 0.07), (133.33333 + 0.07), 30, 1, (-90 + 2.15 + 4.30), 6.45);
	glTranslatef(-133.896f, -93.892f, -0.2f);


	//D
	//Road
	GLUquadricObj *qobjD = gluNewQuadric();
	glTranslatef(101.404f, 101.334f, 0.1f);
	glColor3ub(180, 180, 180);
	gluPartialDisk(qobjD, 95, 105, 30, 1, (-90.0 + 2.15 + 4.30 + 6.45), 60);
	glTranslatef(-101.404f, -101.334f, -0.1f);

	//Boudaries
	GLUquadricObj *qobjD1 = gluNewQuadric();
	glTranslatef(101.404f, 101.334f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjD1, (100 + 5 - 0.2), (100 + 5), 30, 1, (-90.0 + 2.15 + 4.30 + 6.45), 60);
	glTranslatef(-101.404f, -101.334f, -0.2f);

	GLUquadricObj *qobjD2 = gluNewQuadric();
	glTranslatef(101.404f, 101.334f, 0.2f);
	glColor3ub(70, 70, 70);
	gluPartialDisk(qobjD2, (100 - 5), (100 - 5 + 0.2), 30, 1, (-90.0 + 2.15 + 4.30 + 6.45), 60);
	glTranslatef(-101.404f, -101.334f, -0.2f);

	//White Line
	GLUquadricObj *qobjD3 = gluNewQuadric();
	glTranslatef(101.404f, 101.334f, 0.2f);
	glColor3ub(255, 255, 255);
	gluPartialDisk(qobjD3, (100 - 0.07), (100 + 0.07), 30, 1, (-90.0 + 2.15 + 4.30 + 6.45), 60);
	glTranslatef(-101.404f, -101.334f, -0.2f);
	

	/*
	//Main part of the road - grey - concrete
	GLUquadricObj *qobj = gluNewQuadric();
	glTranslatef(78.9f, 90.0f, 0.1f);
	glColor3ub(180, 180, 180);
	gluPartialDisk(qobj, 73.9, 83.9, 30, 1, -90.0, 90.0);
	glTranslatef(-78.9f, -90.0f, -0.1f);

	//Lines on the sides
	GLUquadricObj *qobj1 = gluNewQuadric();
	glColor3ub(70, 70, 70);
	glTranslatef(78.9f, 90.0f, 0.11f);
	gluPartialDisk(qobj1, 83.7, 83.9, 30, 1, -90.0, 90.0);
	glTranslatef(-78.9f, -90.0f, -0.11f);

	GLUquadricObj *qobj2 = gluNewQuadric();
	glTranslatef(78.9f, 90.0f, 0.11f);
	gluPartialDisk(qobj2, 73.9, 74.1, 30, 1, -90.0, 90.0);
	glTranslatef(-78.9f, -90.0f, -0.11f);

	//White line in the middle
	GLUquadricObj *qobj3 = gluNewQuadric();
	glTranslatef(78.9f, 90.0f, 0.11f);
	glColor3ub(255, 255, 255);
	bool a = true;
	for (int i = -90; i < 0; i = i + (360 / 150))
	{
		if (a == true)
		{
			gluPartialDisk(qobj3, 78.83f, 78.97f, 400, 1, i, (360 / 150));
			a = false;
		}
		else a = true;
	}
	glTranslatef(-78.9f, -90.0f, -0.11f);

	*/


}