#include "Ball.h"

Ball ball;

void initValues(Ball& ball)
{
	ball.posX = screenWidth / 2;
	ball.posY = screenHeight / 2;
	ball.speed = 500;
	ball.radius = 15;
	ball.numVertex = 30;
}

void moveBall(Ball& ball)
{
	if (slGetKey(SL_KEY_ENTER)) ball.pause = true;

	if (ball.pause)
	{
		ball.posY += ball.speedY * slGetDeltaTime();
		ball.posX += ball.speedX * slGetDeltaTime();


	}
	//if (ball.pause)
	//{
	//	ball.posY += ball.speedY * GetFrameTime();
	//	ball.posX += ball.speedX * GetFrameTime();
	//
	//	if (ball.posY >= (screenHeight - ball.radius) || ball.posY <= ball.radius)
	//		ball.speedY *= -1;
	//
	//	if (ball.posX >= (screenWidth - ball.radius) || ball.posX <= ball.radius)
	//	{
	//		ball.speedX *= -1;
	//
	//		if (ball.posX >= (screenWidth - ball.radius))
	//			player1.score++;
	//
	//		if (ball.posX <= ball.radius)
	//			player2.score++;
	//
	//		ball.posY = screenHeight / 2;
	//		ball.posX = screenHeight / 2 + 160;
	//
	//		ball.pause = false;
	//	}
	//
	//}
	//
	//if ((ball.posX - ball.radius + ball.radius * 2 >= player1.posX &&
	//	ball.posX - ball.radius <= player1.posX + player1.width &&
	//	ball.posY - ball.radius + ball.radius * 2 >= player1.posY &&
	//	ball.posY - ball.radius <= player1.posY + player1.height))
	//{
	//	ball.speedX *= -1;
	//	ball.posX = player1.posX + player1.width + ball.radius;
	//}
	//
	//if ((ball.posX - ball.radius + ball.radius * 2 >= player2.posX &&
	//	ball.posX - ball.radius <= player2.posX + player2.width &&
	//	ball.posY - ball.radius + ball.radius * 2 >= player2.posY &&
	//	ball.posY - ball.radius <= player2.posY + player2.height))
	//{
	//	ball.speedX *= -1;
	//	ball.posX = player2.posX - ball.radius;
	//}
}

void drawBall()
{
	slCircleFill(ball.posX, ball.posY, ball.radius, ball.numVertex);
}