/***************************************************
* File : velocity.cpp
* Author : Filipe Ferreira
* This files is responsible to handle the fuctions
*	for the object Lander -
****************************************************/

#include "velocity.h"

//Constroctors
Velocity::Velocity()
{
	dx = 0;
	dy = 0;
}

Velocity::Velocity(const float dx, const float dy)
{
	setDx(dx);
	setDy(dy);
}

//Responsible for setting the velocity on the X cordinate
void Velocity::setDx(const float dx)
{
	this->dx = dx;
}

//Responsible for setting the velocity on the Y cordinate
void Velocity::setDy(const float dy)
{
	this->dy = dy;
}