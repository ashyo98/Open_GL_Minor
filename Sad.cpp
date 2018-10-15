#include "Sad.h"

void Sad::sadFace_1()
{
	//glClearColor(1, 1, 1, 1);
	Draw dukhi;
	glColor3f(0.137255f, 0.556863f, 1.0f);
	dukhi.drawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 0, 120, 90, 0.867, 1);  //  face
	glColor3d(0, 0, 0);
	glColor3f(0.0f, 0.0f, 0.0f);
	dukhi.drawArc(SCREEN_WIDTH / 2 - 60, SCREEN_HEIGHT / 2 + 80, 0, 24, 259, 349, 50); // left eyebrow
	dukhi.drawArc(SCREEN_WIDTH / 2 + 65, SCREEN_HEIGHT / 2 + 80, 0, 24, 195, 285, 50); // right eyebrow

	dukhi.drawArc(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 40, 0, 24, 195, 349, 50); // left eye
	dukhi.drawArc(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 40, 0, 25, 195, 349, 50); // left eye
	dukhi.drawArc(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 40, 0, 26, 195, 349, 50); // left eye
	dukhi.drawArc(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 40, 0, 27, 195, 349, 50); // left eye
	dukhi.drawArc(SCREEN_WIDTH / 2 - 40, SCREEN_HEIGHT / 2 + 40, 0, 28, 195, 349, 50); // left eye
	dukhi.drawArc(SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 + 40, 0, 24, 195, 349, 50); // right eye
	dukhi.drawArc(SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 + 40, 0, 25, 195, 349, 50); // right eye
	dukhi.drawArc(SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 + 40, 0, 26, 195, 349, 50); // right eye
	dukhi.drawArc(SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 + 40, 0, 27, 195, 349, 50); // right eye
	dukhi.drawArc(SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 + 40, 0, 28, 195, 349, 50); // right eye

	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 40, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 40); // mouth 
	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 41, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 41); // mouth 
	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 42, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 42); // mouth 
	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 43, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 43); // mouth 
	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 44, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 44); // mouth 
	dukhi.drawLine(SCREEN_WIDTH / 2 - 35, SCREEN_HEIGHT / 2 - 45, SCREEN_WIDTH / 2 + 40, SCREEN_HEIGHT / 2 - 45); // mouth 

}


Sad::Sad()
{
}


Sad::~Sad()
{
}
