#include "MenuScenes.h"

void drawMenu()
{
	slSetForeColor(0.0, 0.0, 0.0, 1.0);
	slText((textX / 2 - 120), (textY - 100), "Rei-bounce");
	slText((textX / 2 - 200), (textY - textY + 300), "Press enter to start");
	slText((textX / 2 - 250), (textY - textY + 70), "Game by Valentin Villar");
}

void drawGameOver()
{
	slSetForeColor(1.0, 0.0, 0.0, 1.0);
	slText((textX / 2 - 100), (textY - 100), "Game Over");
	
	slSetForeColor(1.0, 1.0, 1.0, 1.0);

	if (player1.score >= 10)
	{
		slSetFontSize(40);
		slText((textX / 2 - 250), (textY - textY + 300), "player 1 won a rei plush");
	}
	else if (player2.score >= 10)
	{
		slSetFontSize(40);
		slText((textX / 2 - 250), (textY - textY + 300), "player 2 won a rei plush");
	}
	
		slText((textX / 2 - 230), (textY - textY + 70), "Press enter to game again");
}
