#pragma once

#include <memory>
#include "GameDefinition.h"

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

	GameState Run();
private:
	// 초기화
	void initialize();

	// 분당 프레임수
	const float m_frame = 1.f / 60.f;

	// 게임 데이터 관리
	GameDataRef m_gameData;
};

}