#include "main.h"
#include "Game/Game.h"

using namespace std;

int main()
{
	GAME::Game marioGame(SCREEN_WIDTH, SCREEN_HEIGHT, GAME::game_string("Mario 2020"));

	for(GAME::GameState state = marioGame.Run(); 
		state == GAME::GameState::SUCCESS; state = marioGame.Run())
		;
	

	return EXIT_SUCCESS;
}