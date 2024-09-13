#include <iostream>
#include "sl.h"
#include "utils.h"
#include "Player.h"
#include "Ball.h"


int main(int args, char* argv[])
{
	slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetBackColor(0.0, 0.0, 0.0);
		player1;
		player2;
		ball;

		initValues(player1, player2);
		initValues(ball);
		

		drawPlayers();
		drawBall();

		slRender();
	}
	slClose();
	return 0;
}