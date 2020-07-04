#include "Game.h"
#include "GameData.h"

namespace GAME
{

Game::Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	initialize();
}

void Game::Run()
{
	GameState state = GameState::FAIL;

	while(state == GameState::SUCCESS)
	{
		// todo
	}
}

void Game::initialize()
{
	m_gameData = std::make_shared<GameData>();
	
	// todo
}

}