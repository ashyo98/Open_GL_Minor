#include "Surprise.h"


void Surprise::SurpriseFace_1()
{
	Draw achambhit;

	glColor3f(0.897f, 0.7895f, 0.12344f);
	achambhit.drawCircle(SCREEN_WIDTH / 2 + 215, SCREEN_HEIGHT / 2, 0, 120, 100, 0.867, 1);
	glColor3d(0, 0, 0);
	achambhit.drawCircle(SCREEN_WIDTH / 2 + 48 + 215, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); //RIGHT EYE
	achambhit.drawCircle(SCREEN_WIDTH / 2 - 50 + 215, SCREEN_HEIGHT / 2 + 50, 0, 20, 100, 0.7, 1); //LEFT EYE
	glColor3f(1.0f, 1.0f, 1.0f);

	//drawCircleHollow( SCREEN_WIDTH / 2, SCREEN_HEIGHT /2-50 , 0, 20, 36 );
	achambhit.drawArc(SCREEN_WIDTH / 2 - 20 + 280 + 20 + 10, SCREEN_HEIGHT / 2 - 130, 0, 90, 100, 150, 100);
}

Surprise::Surprise()
{
}


Surprise::~Surprise()
{
}
