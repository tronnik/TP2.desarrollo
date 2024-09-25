#include "Ball.h"
#include "Player.h"

namespace ReiBounce
{
	Ball ball;

	void initValues(Ball& ball)
	{
		ball.posX = screenWidth / 2;
		ball.posY = screenHeight / 2;
		ball.speedX = ball.speed;
		ball.speedY = ball.speed;
		ball.radius = 15;
		ball.numVertex = 30;
		ball.pause = false;
	}

	bool colision(Player& player, Ball& ball);

	void moveBall(Ball& ball)
	{
		if (slGetKey(32))	ball.pause = true;

		if (ball.pause)
		{
			ball.posY += ball.speedY * slGetDeltaTime();
			ball.posX += ball.speedX * slGetDeltaTime();

			if (ball.posY >= (screenHeight - ball.radius) || ball.posY <= ball.radius)
				ball.speedY *= -1;

			if (ball.posX >= (screenWidth - ball.radius) || ball.posX <= ball.radius)
			{
				ball.speedX *= -1;

				if (ball.posX >= (screenWidth - ball.radius))
					player1.score++;

				if (ball.posX <= ball.radius)
					player2.score++;

				ball.posY = screenHeight / 2;
				ball.posX = screenWidth / 2;

				ball.pause = false;
			}

			if (colision(player2, ball))
			{
				ball.speedX *= -1;
				ball.posX = player2.posX - ball.radius - player2.width / 2;
			}

			if (colision(player1, ball))
			{
				ball.speedX *= -1;
				ball.posX = player1.posX + ball.radius + player1.width / 2;
			}
		}

	}

	void loadBallImage()
	{
		ball.image = slLoadTexture("res/ball.png");
	}

	void drawBall()
	{
		slSprite(ball.image, ball.posX, ball.posY, 80, 80);
	}

	bool colision(Player& player, Ball& ball)
	{
		bool colisionX = ball.posX + ball.radius > player.posX - player.width / 2 &&
			ball.posX - ball.radius < player.posX + player.width / 2;

		bool colisionY = ball.posY + ball.radius > player.posY - player.height / 2 &&
			ball.posY - ball.radius < player.posY + player.height / 2;

		return colisionX && colisionY;
	}
}
