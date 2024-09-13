#include "sl.h"
//#include "Player.h"
#include <iostream>

struct Player
{
	double posX;
	double posY;
	double width;
	double height;
	float speed;
	int score;
};

struct Ball
{
	double posX;
	double posY;
	const float speed = 700;
	float speedX;
	float speedY;
	double radius;
	int numVertex;
	bool pause;

};
int main(int args, char* argv[])
{
	slWindow(800, 600, "Simple SIGIL Example", false);

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetBackColor(0.0, 0.0, 0.0);
		Player player1;
		Player player2;
		Ball ball;

		player1.posX = 10;
		player1.posY = 300;
		player1.width = 15;
		player1.height = 130;

		player2.posX = 790;
		player2.posY = 300;
		player2.width = 15;
		player2.height = 130;

		ball.posX = 400;
		ball.posY = 300;
		ball.radius = 15;
		ball.numVertex = 30;

		slSetForeColor(0.1, 0.9, 0.2, 0.4);
		slRectangleFill(player1.posX, player1.posY, player1.width, player1.height);
		slRectangleFill(player2.posX, player2.posY, player2.width, player2.height);
		slCircleFill(ball.posX, ball.posY, ball.radius, ball.numVertex);

		slRender();
	}
	slClose();
	return 0;
}