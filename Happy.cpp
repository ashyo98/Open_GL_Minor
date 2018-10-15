#include "pch.h"
#include "Happy.h"


void Happy::happyFace_1()
{
	Draw khushi;

	glColor3f(0.897f, 0.7895f, 0.12344f);
	khushi.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 120, 100, 0.867, 1); //face
	glColor3d(0, 0, 0);
	khushi.drawCircle(SCREEN_WIDTH / 2 + 48, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // right eye
	khushi.drawCircle(SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // left eye
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(8.0f);
	//drawCircleHollow( SCREEN_WIDTH / 2, SCREEN_HEIGHT /2-50 , 0, 20, 36 );
	khushi.drawArc(SCREEN_WIDTH / 2 - 20, SCREEN_HEIGHT / 2, 0, 80, 280, 330, 50); // mouth 

}

void Happy::happyFace_2()
{
	Draw khushi;

	glColor3f(0.897f, 0.7895f, 0.12344f);
	khushi.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 120, 100, 0.867, 1); // face
	glColor3d(0, 0, 0);
	khushi.drawCircle(SCREEN_WIDTH / 2 + 48, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // right eye
	khushi.drawCircle(SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); // left eye
	glColor3f(1.0f, 1.0f, 1.0f);
	khushi.drawArc(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 20, 0, 40, 200, 340, 50); // mouth 
}

void Happy::happyFace_3()
{
	Draw khushi;

	glColor3f(0.435294f, 0.2588244f, 0.2588244f);
	khushi.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 100, 100, 0.867, 1); // face
	glColor3d(0, 0, 0);
	khushi.drawCircle(SCREEN_WIDTH / 2 + 58, SCREEN_HEIGHT / 2 + 40, 0, 20, 100, 0.7, 1); // right eye
	khushi.drawCircle(SCREEN_WIDTH / 2 - 10, SCREEN_HEIGHT / 2 + 40, 0, 20, 100, 0.7, 1); // left eye
	khushi.drawArc(SCREEN_WIDTH / 2 + 20, SCREEN_HEIGHT / 2 + 20, 0, 40, 200, 340, 50); // mouth
	glColor3f(0.0f, 0.0f, 0.0f);
	khushi.drawArc(SCREEN_WIDTH / 2 + 58, SCREEN_HEIGHT / 2 + 45, 0, 20, 30, 150, 50); // left eye
	khushi.drawArc(SCREEN_WIDTH / 2 - 10, SCREEN_HEIGHT / 2 + 45, 0, 20, 30, 150, 50); // right eye


}

Happy::Happy()
{
}


Happy::~Happy()
{
}
