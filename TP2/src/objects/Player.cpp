#include "Player.h"
#include <string>
#include "sl.h"

Player player1;
Player player2;

void initValues(Player& player1, Player& player2)
{
	player1.posX = 30; 
	player1.posY = screenHeight / 2;
	player1.width = 15;
	player1.height = 130;
	player1.speed = 500;
	player1.score = 0;

	player2.posX = 770;
	player2.posY = screenHeight / 2;
	player2.width = 15;
	player2.height = 130;
	player2.speed = 500;
	player2.score = 0;
}

void movePlayer(Player& player1, Player& player2)
{
	if (slGetKey(SL_KEY_DOWN)) player2.posY -= player2.speed * slGetDeltaTime();
	if (slGetKey(SL_KEY_UP)) player2.posY += player2.speed * slGetDeltaTime();

	if (slGetKey('S')) player1.posY -= player1.speed * slGetDeltaTime();
	if (slGetKey('W')) player1.posY += player1.speed * slGetDeltaTime();

	if (player1.posY < screenHeightMin)
		player1.posY = screenHeightMin;
	
	if (player2.posY < screenHeightMin)
		player2.posY = screenHeightMin;

	if (player2.posY  >= screenHeight - 60)
		player2.posY = screenHeight - 60;

	if (player1.posY >= screenHeight - 60)
		player1.posY = screenHeight - 60;
	
}

void loadImage()
{
	player1.image = slLoadTexture("res/lance.png");
	player2.image = slLoadTexture("res/lance.png");
}

void drawPlayers()
{
	
	slSetForeColor(1.0, 1.0, 1.0, 1.0);

	slSprite(player1.image, player1.posX, player1.posY, 200, player1.height);
	slSprite(player2.image, player2.posX, player2.posY, 200, player2.height);

	slText((textX / 2 - 60), (textY - 50), "Pong");//puntaje

	slSetFontSize(20);
	slText((textX / 2 - 90), (textY - 80), "Press enter to start");
	
	//int font = slLoadFont("res/ParadiseSilhouette.ttf");
	//slSetFont(font, 14);
	//
	//string timerText = "Score: " + to_string(player1.score);
	//slText(0.0, 20.0, timerText.c_str());
	//
	//string timerText = "Score: " + to_string(player2.score);
	//slText(0.0, 20.0, timerText.c_str());	
}

