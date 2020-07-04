#include "main.h"
#include "Game/Game.h"

using namespace std;

int main()
{
	GAME::Game marioGame(SCREEN_WIDTH, SCREEN_HEIGHT, GAME::game_string("Mario 2020"));

	marioGame.Run();
	
	return EXIT_SUCCESS;
}