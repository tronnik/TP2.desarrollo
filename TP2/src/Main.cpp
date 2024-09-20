#include <iostream>
#include "Game.h"
#include "sl.h"
#include "utils.h"
#include "Player.h"
#include "Ball.h"
#include "GameplayScenes.h"


int main(int args, char* argv[])
{
	slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);

	initGameplay();

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		slSetBackColor(0.0, 0.0, 0.0);
		player1;
		player2;
		ball;

		drawMenu();
		
		updateGameplay();
		
		drawGameplay();

		slRender();
	}
	slClose();
	return 0;
}