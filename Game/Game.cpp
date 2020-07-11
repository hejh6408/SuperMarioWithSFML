#include "Game.h"
#include "GameData.h"

namespace GAME
{

Game::Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	initialize(_screenWidth, _screenHeight, _gameTitle);
}

void Game::Run()
{
	GameState state = GameState::FAIL;

	while(state == GameState::SUCCESS)
	{
		// todo
	}
	gameDataRef->Exec();
}

void Game::initialize(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	gameDataRef = std::make_shared<GameData>(_screenWidth, _screenHeight, _gameTitle);

	// todo
}

}