#include "Game.h"
#include "GameData.h"

namespace GAME
{

Game::Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{

}

GameState Game::Run()
{
	return GameState::FAIL;
}

void Game::initialize()
{
	// todo
}

}