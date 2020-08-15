#pragma once
#include "GameDefinition.h"

#include <SFML/Graphics.hpp>

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

	long double GetElapsedTimeAsMilliSecond() const;
	long double GetElapsedTimeAsSecond() const;
private:

	void initialize();

	sf::Clock clock;

	StateMachineRef stateMachineRef;
	AssetManagerRef assetManagerRef;
	InputManagerRef inputManagerRef;
};

}