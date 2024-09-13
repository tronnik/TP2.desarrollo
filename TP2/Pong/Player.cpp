#include "Player.h"
#include "sl.h"


Player player1;
Player player2;

void initValues(Player& player1, Player& player2)
{
	player1.posX = 10;
	player1.posY = screenHeight / 2;
	player1.width = 15;
	player1.height = 130;

	player2.posX = 790;
	player2.posY = screenHeight / 2;
	player2.width = 15;
	player2.height = 130;
}

void movePlayer(Player& player1, Player& player2)
{
	//if (IsKeyDown(KEY_UP)) player2.posY -= player2.speed * GetFrameTime();
	//if (IsKeyDown(KEY_DOWN)) player2.posY += player2.speed * GetFrameTime();
	//
	//if (IsKeyDown(KEY_W)) player1.posY -= player1.speed * GetFrameTime();
	//if (IsKeyDown(KEY_S)) player1.posY += player1.speed * GetFrameTime();
	//
	////the racket cant go outsite of the window
	//if (player1.posY < screenHeightMin)
	//	player1.posY = screenHeightMin;
	//
	//if (player2.posY < screenHeightMin)
	//	player2.posY = screenHeightMin;
	//
	//if (player1.posY + player1.height >= screenHeight)
	//	player1.posY = screenHeight - player1.height;
	//
	//if (player2.posY + player2.height >= screenHeight)
	//	player2.posY = screenHeight - player2.height;
}

void drawPlayers()
{
	slSetForeColor(1.0, 1.0, 1.0, 1.0);
	slRectangleFill(player1.posX, player1.posY, player1.width, player1.height);
	slRectangleFill(player2.posX, player2.posY, player2.width, player2.height);

	
	//DrawText(TextFormat(" : %01i", player2.score), (screenWidth / 2) - 30, screenHeightMin + 10, 20, RED);
	//DrawText(TextFormat(" %01i", player1.score), (screenWidth / 2) - 50, screenHeightMin + 10, 20, RED);
	//DrawText(TextFormat("Press enter to start"), (screenWidth / 2) - 120, screenHeightMin + 50, 20, WHITE);
}
