#include "Player.h"
#include "sl.h"

Player player1;
Player player2;

void initValues(Player& player1, Player& player2)
{
	player1.posX = 200;
	player1.posY = 240;
	player1.width = 100;
	player1.height = 7;
	player1.speed = 500.0f;
	player1.score = 0;

	player2.posX = 5.0f;
	player2.posY = 5.0f;
	player2.width = 25;
	player2.height = 150;
	player2.speed = 500.0f;
	player2.score = 0;
}

void initPosition()
{
	//player1.posY = screenHeight / 2 - 50;
	//player1.posX = screenWidth / 2 - 395;
	//
	//player2.posY = screenHeight / 2 - 50;
	//player2.posX = screenWidth / 2 + 370;
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
	//slSetForeColor(1.0, 0.0, 0.0, 1.0);
	slRectangleFill(player1.posX, player1.posY, player1.width, player1.height);
	//DrawRectangle(player1.posX, player1.posY, player1.width, player1.height, WHITE);
	//DrawRectangle(player2.posX, player2.posY, player2.width, player2.height, WHITE);
	//DrawText(TextFormat(" : %01i", player2.score), (screenWidth / 2) - 30, screenHeightMin + 10, 20, RED);
	//DrawText(TextFormat(" %01i", player1.score), (screenWidth / 2) - 50, screenHeightMin + 10, 20, RED);
	//DrawText(TextFormat("Press enter to start"), (screenWidth / 2) - 120, screenHeightMin + 50, 20, WHITE);
}
