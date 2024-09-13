#pragma once

struct Player
{
	double posX;
	double posY;
	double width;
	double height;
	float speed;
	int score;
};

extern Player player1;
extern Player player2;

void initValues(Player& player1, Player& player2);

void initPosition();

void movePlayer(Player& player1, Player& player2);

void drawPlayers();

