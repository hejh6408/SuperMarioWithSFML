#pragma once

#include <memory>

namespace Game
{
class GameData;
typedef std::shared_ptr<GameData> GameDataRef;
typedef std::weak_ptr<GameData> GameDataWeakRef;

class StateBase
{
public:
	StateBase(GameDataRef _gameDataRef);
	~StateBase() {};

	virtual void Init() = 0;

	virtual void HandleInput() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	virtual void Pause() = 0;
	virtual void Resume() = 0;
private:
	
	GameDataWeakRef gameDataWeakRef;
};

}