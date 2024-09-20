#pragma once
#include "sl.h"
#include "utils.h"

struct Ball
{
	double posX;
	double posY;
	float speed;
	float speedX;
	float speedY;
	double radius;
	int numVertex;
	bool pause;
};

extern Ball ball;

void initValues(Ball& ball);

void moveBall(Ball& ball);

void drawBall();

