#include "Disgust.h"


void Disgust::disgustface_1()
{
		Draw ghrna;

		//glColor3f(0.897f, 0.7895f, 0.12344f);
		glColor3f(0.419608f, 0.556863f, 0.137255);
		ghrna.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 120, 90, 0.867, 1);  //  face
		glColor3d(0, 0, 0);
		ghrna.drawCircle(SCREEN_WIDTH / 2 + 38, SCREEN_HEIGHT / 2 + 50, 0, 15, 100, 0.7, 1); // right
		ghrna.drawCircle(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 50, 0, 15, 100, 0.7, 1); // left
		glColor3f(0.0f, 0.0f, 0.0f);
		ghrna.drawArc(SCREEN_WIDTH / 2 - 60, SCREEN_HEIGHT / 2 + 90, 0, 24, 259, 349, 50); // left eyebrow
		ghrna.drawArc(SCREEN_WIDTH / 2 + 55, SCREEN_HEIGHT / 2 + 90, 0, 24, 195, 285, 50); // right eyebrow

		GLfloat r1 = 45, theta1 = 30, theta2 = 150, xc, yc, x1, x2, y1, y2, xcl, ycl, xcr, ycr, rr, rl;
		xc = SCREEN_WIDTH / 2.0f;
		yc = SCREEN_HEIGHT / 2.0f - 40.0f;

		x1 = xc + r1 * cos(DegToRad(theta1));
		y1 = yc + r1 * sin(DegToRad(theta1));
		x2 = xc + r1 * cos(DegToRad(theta2));
		y2 = yc + r1 * sin(DegToRad(theta2));

		xcr = xc + 80;
		xcl = xc - 80;
		ycr = yc;
		ycl = yc;

		rr = sqrt(pow(x1 - xcr, 2) + pow(y1 - ycr, 2));
		rl = sqrt(pow(x2 - xcl, 2) + pow(y2 - ycl, 2));

		ghrna.drawArc(xc, yc, 0, r1, theta1, theta2, 50); //mouth
		ghrna.drawArc(xcl, ycl, 0, rl, -01, 60, 50);//mouth left
		ghrna.drawArc(xcr, ycr, 0, rr, 120, 180, 50);//mouth left
}

Disgust::Disgust()
{
}


Disgust::~Disgust()
{
}
