#pragma once

#include "GameDefinition.h"

#include <memory>

// "Window, Graphics" to definite RenderWindow
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


namespace GAME
{

class GameData;

typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
public:
	// 생성자
	Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);
	virtual ~Game() {};

	void Run();
private:
	// 초기화
	void initializeWindow(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);
	void initializeGameData();
	// 분당 프레임수
	const float frame = 1.f / 60.f;

	// 게임 데이터 관리
	GameDataRef gameDataRef;
	
	// Window 
	sf::RenderWindow window;
};

}