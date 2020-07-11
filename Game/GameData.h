#pragma once
#include "GameDefinition.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <memory>


namespace GAME
{

class StateMachine;
class AssetManager;
class InputManager;

typedef std::shared_ptr<StateMachine> StateMachineRef;
typedef std::shared_ptr<AssetManager> AssetManagerRef;
typedef std::shared_ptr<InputManager> InputManagerRef;

class GameData
{
public:
	GameData();
	GameData(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);
	virtual ~GameData() {};

	void Exec();
private:

	void initialize(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle);

	sf::RenderWindow window;
	sf::Clock clock;

	StateMachineRef stateMachineRef;
	AssetManagerRef assetManagerRef;
	InputManagerRef inputManagerRef;
};

}