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
	virtual ~GameData() {};

private:

	void initialize();

	sf::Clock clock;

	StateMachineRef stateMachineRef;
	AssetManagerRef assetManagerRef;
	InputManagerRef inputManagerRef;
};

}