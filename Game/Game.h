#pragma once

#include "GameDefinition.h"

#include <memory>

// "Window, Graphics" to definite RenderWindow
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


namespace GAME
{

class GameData;
class StateManager;

typedef std::shared_ptr<GameData> GameDataRef;
typedef std::shared_ptr<StateManager> StateManagerRef;

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
	const float thisFrame = 1.f / 60.f;

	// 게임 데이터 관리
	GameDataRef thisGameDataRef;
	
	// Window 
	sf::RenderWindow thisWindow;

	// StateManager 게임의 상태를 관리한다.
	StateManagerRef thisStateManagerRef;
};

}