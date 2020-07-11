#include "GameData.h"

namespace GAME
{
GameData::GameData()
{
}

GameData::GameData(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	initialize(_screenWidth, _screenHeight, _gameTitle);
}

void GameData::Exec()
{
	while(window.isOpen() == true)
	{
		
	
	}
}

void GameData::initialize(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	sf::VideoMode video_mode;
	sf::String game_title((std::string)_gameTitle);
	sf::ContextSettings video_setting;
	
	window.create(video_mode, game_title, sf::Style::Close | sf::Style::Titlebar, video_setting);

	// todo
}

}