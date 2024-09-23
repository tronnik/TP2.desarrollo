#include "Game.h"

static void Initialization();
static void update();
static void draw();
static void close();

bool menuOn = true;
bool gameOver = false;
int font;
//int image;

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
	slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);
	initGameplay();
	font = slLoadFont("res/ParadiseSilhouette.ttf");
	slSetFont(font, 24);

	//image = slLoadTexture("res/RENDER02.png");
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
	slSetFontSize(70);
	slSetForeColor(1.0, 1.0, 1.0, 1.0);

	if (menuOn)
	{
		drawMenu();
		if (slGetKey(SL_KEY_ENTER)) menuOn = false;
	}
	else if (gameOver)
	{
		drawGameOver();
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