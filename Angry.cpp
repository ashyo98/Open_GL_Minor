#include "Angry.h"

Angry::Angry()
{
}

void Angry::angryFace_1()
{
	Draw gussa;

	//glColor3f(0.897f, 0.7895f, 0.12344f);
	glColor3f(1.0f, 0.2588244f, 0.0f);
	gussa.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 120, 90, 0.867, 1);  //  face
	glColor3d(1, 1, 1);
	gussa.drawCircle(SCREEN_WIDTH / 2 + 38, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // right
	gussa.drawCircle(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // left
	glColor3f(0.0f, 0.0f, 0.0f);
	gussa.drawArc(SCREEN_WIDTH / 2 - 45, SCREEN_HEIGHT / 2 + 50, 0, 30, 40, 100, 50); // left eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 - 45, SCREEN_HEIGHT / 2 + 50, 0, 31, 40, 100, 50); // left eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 - 45, SCREEN_HEIGHT / 2 + 50, 0, 32, 40, 100, 50); // left eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 - 45, SCREEN_HEIGHT / 2 + 50, 0, 33, 40, 100, 50); // left eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 + 45, SCREEN_HEIGHT / 2 + 50, 0, 30, 90, 150, 50); // right eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 + 45, SCREEN_HEIGHT / 2 + 50, 0, 31, 90, 150, 50); // right eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 + 45, SCREEN_HEIGHT / 2 + 50, 0, 32, 90, 150, 50); // right eyebrow
	gussa.drawArc(SCREEN_WIDTH / 2 + 45, SCREEN_HEIGHT / 2 + 50, 0, 33, 90, 150, 50); // right eyebrow

	GLfloat r1 = 45, theta1 = 30, theta2 = 150, xc, yc;
	xc = SCREEN_WIDTH / 2.0f;
	yc = SCREEN_HEIGHT / 2.0f - 70.0f;

	gussa.drawArc(xc, yc, 0, r1, theta1, theta2, 50); //mouth


	//code for second arc 

	/*GLfloat r1 = 45, theta1 = 30, theta2 = 150, x1, x2, y1, y2, alpha1, alpha2, r2 = 40, x, y, x3, y3, phi, xc, yc;

	x1 = r1 * cos((M_PI / 180)*theta1) + 320;
	x2 = r1 * cos((M_PI / 180)*theta2) + 320;
	y1 = r1 * sin((M_PI / 180)*theta1) + 170;
	y2 = r1 * sin((M_PI / 180)*theta2) + 170;


	x3 = (x1 + x2) / 2;
	y3 = (y1 + y2) / 2;
	GLfloat q = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	x = x3 - sqrt(abs(pow(r2, 2) - pow(q / 2, 2)))*((y1 - y2) / q);
	y = y3 - sqrt(abs(pow(r2, 2) - pow(q / 2, 2)))*((x2 - x1) / q);


	alpha1 = (180 / M_PI) * asin((y2 - y) / r2); // start angle
	phi = asin(((y1 - y) / r2));
	alpha2 = 180 - ((180 / M_PI) * phi);//end angle 


	//drawSecondArc(r1, theta1, theta2, xc, yc, r2);
	//gussa.drawArc(x, y, 0, r2, alpha1, alpha2, 50); //mouth

	*/

}

Angry::~Angry()
{
}
