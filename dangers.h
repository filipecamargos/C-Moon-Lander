//INCLUDING SOME DANGERS IN THIS FILE AND FUTURE THINGS
#ifndef DANGER_H
#define DANGER_H

#include "uiDraw.h"
#include "point.h"
#include "game.h"

class Dangers {

private:
	Point obj;

public:
	Point getPoint();
	void drawObject();
};

#endif