#pragma once
#include "sl.h"
#include "utils.h"

struct Ball
{
	double posX;
	double posY;
	const float speed = 500;
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

