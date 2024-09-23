#include "MenuScenes.h"

void drawMenu()
{
	slText((textX / 2 - 60), (textY - 100), "Pong");
	slText((textX / 2 - 230), (textY - textY + 300), "Press enter to start");
	slText((textX / 2 - 250), (textY - textY + 70), "Game by Valentin Villar");
}

void drawGameOver()
{
	slSetForeColor(1.0, 0.0, 0.0, 1.0);
	slText((textX / 2 - 100), (textY - 100), "Game Over");
	
	slSetForeColor(1.0, 1.0, 1.0, 1.0);
	if (player1.score >= 10)
	{
		slText((textX / 2 - 150), (textY - textY + 300), "player 1 win");
	}
	else if (player2.score >= 10)
	{
		slText((textX / 2 - 150), (textY - textY + 300), "player 2 win");
	}
	
		slText((textX / 2 - 250), (textY - textY + 70), "Press enter to game again");
}
