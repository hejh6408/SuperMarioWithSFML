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
	// ������
	Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);
	virtual ~Game() {};

	GameState Run();
private:
	// �ʱ�ȭ
	void initialize();

	// �д� �����Ӽ�
	const float m_frame = 1.f / 60.f;

	// ���� ������ ����
	GameDataRef m_gameData;
};

}