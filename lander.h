/***************************************************
* File : lander.cpp
* Author : Filipe Ferreira */

#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"

class Lander
{
	//Our variable to be used in this class
private:
	Point point;
	Velocity velocity;
	int fuel;
	bool alive;
	bool landed;
	bool thrust;

public:
	Lander();

	//Our getters fuctions and checl for the conditions of the Lander object
	Point getPoint() const { return point; }
	Velocity getVelocity() const { return velocity; }
	bool isAlive() const { return alive; }
	bool isLanded() const { return landed; }
	int getFuel() const { return fuel; }
	bool canThrust() const { return thrust; }

	//Verify the conditions and set them
	void setLanded(const bool landed);
	void setAlive(const bool alive);
	void setFuel(const int fuel);

	//Fuctions related to the motion of the object
	void applyGravity(float gravity);
	void applyThrustLeft();
	void applyThrustRight();
	void applyThrustBottom();

	void advance();
	void draw() const;
};
#endif // !LANDER_H

