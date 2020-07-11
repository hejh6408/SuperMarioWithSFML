#include "Game.h"
#include "GameData.h"

namespace GAME
{

Game::Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
	:gameDataRef(nullptr)
{
	initializeWindow(_screenWidth, _screenHeight, _gameTitle);
	initializeGameData();
}

void Game::Run()
{
	while(window.isOpen() == true)
	{

	}
}

void Game::initializeWindow(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	sf::VideoMode video_mode(_screenWidth, _screenHeight);
	sf::String game_title((std::string)_gameTitle);
	sf::ContextSettings video_setting;

	window.create(video_mode, game_title, sf::Style::Close | sf::Style::Titlebar, video_setting);
}

void Game::initializeGameData()
{
	gameDataRef = std::make_shared<GameData>();
}

}