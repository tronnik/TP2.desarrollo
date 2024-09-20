#include "GameplayScenes.h"

void initGameplay()
{
	initValues(player1, player2);
	initValues(ball);
}

void updateGameplay()
{
	movePlayer(player1, player2);
	moveBall(ball);
}

void drawGameplay()
{
	drawPlayers();
	drawBall();
}
