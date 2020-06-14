#include "point.h"
#include "uiDraw.h"
#include "dangers.h"
#include "lander.h"



Point Dangers::getPoint()
{
	obj.setY(rand() % 1000);
	obj.setX(rand() % 1000);

	return obj;
}

//Creat Asteroids showing up from nowhere
void Dangers::drawObject()
{	
	drawSmallAsteroid(obj, 100);
}