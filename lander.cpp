/***************************************************
* File : lander.cpp
* Author : Filipe Ferreira
* This files is responsible to handle the fuctions 
*	for the object Lander -
****************************************************/

#include <iostream>
#include "Lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"

//Default accroding to the rules of the Game
Lander::Lander() : velocity(-1, 0), point(-100, 180)
{
	setFuel(500);
	setAlive(true);
	setLanded(false);
}

//After Lander is veify if landed this fuction set it accordingly
void Lander::setLanded(const bool landed)
{
	this->landed = landed;
}

//After the Lander live is veify this fuction set it accordingly
void Lander::setAlive(const bool alive) 
{
	this->alive = alive;
}

//This set the fuel accordingly so we don't have it to zero or lower
void Lander::setFuel(const int fuel)
{	
	if (fuel < 0)
	{
		this->fuel = 0;
	}
	else
	{
		this->fuel = fuel;
	}
}

//Gravity was already define in the Games so it just apply 
//it here by lowing in -0.1 on the Y direction
void Lander::applyGravity(float gravity)
{
	velocity.setDy(velocity.getDy() - gravity);

}

//Apply Thrust to the Left by adding negative -0.1
//Which move to to the x direction 
void Lander::applyThrustLeft()
{
	if (fuel > 0)
	{
		velocity.setDx(velocity.getDx() + 0.1);
		setFuel(fuel - 1);
		//send the right flame to be displayed
		drawLanderFlames(point, 0, 1,0);
	}

}

//Apply Thrust to the Left by adding negative -0.1
//Which move to to the x direction 
void Lander::applyThrustRight()
{
	if (fuel > 0)
	{
		velocity.setDx(velocity.getDx() - 0.1);
		setFuel(fuel - 1);
		//send the right flame to be displayed
		drawLanderFlames(point, 0, 0, 1);
	}	
}

//Apply thrust to the Bottom
void Lander::applyThrustBottom()
{
	if (fuel > 0)
	{
		velocity.setDy(velocity.getDy() + 0.3);
		setFuel(fuel - 3);
		//send the right flame to be displayed
		drawLanderFlames(point, 1, 0, 0);
	}
}

//Advance Where??????
void Lander::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}

//This call our draw fuction from the uiDraw file and Draw the Lander
void Lander::draw() const
{
	drawLander(point);
}
