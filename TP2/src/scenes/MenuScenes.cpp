#include "MenuScenes.h"

void drawMenu()
{
	
	slText((textX / 2 - 60), (textY - 100), "Pong");
	slText((textX / 2 - 250), (textY - textY + 70), "Game by Valentin Villar");
	
	//DrawText(TextFormat("Pong"), (screenWidth / 2) - 70, screenHeightMin + 70, 50, WHITE);
	//DrawText(TextFormat("Press enter to start"), (screenWidth / 2) - 150, screenHeightMin + 250, 30, RED);
	//DrawText(TextFormat("Game By Valentin Villar"), (screenWidth / 2) - 120, screenHeight - 50, 20, WHITE);
}

void drawGameOver()
{
	slText((textX / 2 - 100), (textY - 100), "Game Over");
	
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
