#include "main.h"
#include "Game/Game.h"

using namespace std;

int main()
{
	GAME::Game marioGame(SCREEN_WIDTH, SCREEN_HEIGHT, GAME::game_string("Mario 2020"));

	GAME::GameState state;
	for(state = marioGame.Run(); state == GAME::GameState::SUCCESS; state = marioGame.Run())
		;
	
	return state == GAME::GameState::SUCCESS ? EXIT_SUCCESS : EXIT_FAILURE;
}