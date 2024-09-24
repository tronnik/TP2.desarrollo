#include "Game.h"

static void Initialization();
static void update();
static void draw();
static void close();

bool menuOn = true;
bool gameOver = false;
int font;
int winnerImage;
int backgroundImage;

void run()
{
	
	Initialization();
	loadImage();
	loadBallImage();

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		update();
		draw();
	}
	close();
}

void Initialization()
{
	slWindow(screenWidth, screenHeight, "Rei-bounce", false);
	initGameplay();
	font = slLoadFont("res/OpenSans-Italic.ttf");
	slSetFont(font, 24);

	winnerImage = slLoadTexture("res/winner.png");
	backgroundImage = slLoadTexture("res/back.jpg");
}

void update()
{
	if (!menuOn && !gameOver)
	{
		updateGameplay();

		if (player1.score >= 10 || player2.score >= 10)
		{
			gameOver = true;
		}
	}

	if (gameOver)
	{
		if (slGetKey(SL_KEY_ENTER))
		{
			initGameplay();
			gameOver = false;
			menuOn = true;
		}
	}
}

void draw()
{
	slSetBackColor(0.0, 0.0, 0.0);
	slSetFontSize(50);
	slSetForeColor(1.0, 1.0, 1.0, 1.0);

	if (menuOn)
	{
		slSprite(backgroundImage, textX / 2 , textY / 2, 1000, 1000);
		drawMenu();
		if (slGetKey(SL_KEY_ENTER)) menuOn = false;
	}
	else if (gameOver)
	{
		drawGameOver();
		slSprite(winnerImage, (textX / 2 + 250), (textY - textY + 300), 100, 100);
	}
	else
	{
		drawGameplay();
	}

	slRender();
}

void close()
{
	slClose();
}