#include "Game.h"

int main(void)
{
	run();
}



//#include "sl.h"
//
//#include <string> // Para la opcion 1
//#include <sstream> // Para la opcion 2
//
//using namespace std;
//
//int main()
//{
//	const int width = 400;
//	const int height = 400;
//
//	slWindow(width, height, "Text SIGIL Example", false);
//
//	int font = slLoadFont("res/ParadiseSilhouette.ttf");
//	slSetFont(font, 14);
//
//	int score = 0;
//	double timer = 0.0;
//
//	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
//	{
//		if (slGetKey(' '))
//		{
//			score++;
//		}
//
//		timer += slGetDeltaTime();
//
//		slSetBackColor(0.0, 0.0, 0.0);
//
//		slSetForeColor(1.0, 1.0, 1.0, 1.0);
//
//		string scoreText = "Score: " + to_string(player1.score);
//		slText(0.0, 0.0, scoreText.c_str());
//
//		string scoreText = "Score: " + to_string(player2.score);
//		slText(0.0, 0.0, scoreText.c_str());
//
//		// Opcion 1
//		string timerText = "Score: " + to_string(player1.score);
//		slText(0.0, 20.0, timerText.c_str());
//
//		string timerText = "Score: " + to_string(player2.score);
//		slText(0.0, 20.0, timerText.c_str());
//
//		// Opcion 2
//		ostringstream output;
//		output.precision(2); // 2 numeros despues de la coma
//		output << "Timer: " << timer;
//		string timerText2 = output.str();
//		slText(0.0, 40.0, timerText2.c_str());
//
//		slRender();
//	}
//
//	slClose();
//
//	return 0;
//}
