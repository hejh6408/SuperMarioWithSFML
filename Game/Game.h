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

	void Run();
private:
	// �ʱ�ȭ
	void initializeWindow(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);
	void initializeGameData();
	// �д� �����Ӽ�
	const float frame = 1.f / 60.f;

	// ���� ������ ����
	GameDataRef gameDataRef;
	
	// Window 
	sf::RenderWindow window;
};

}