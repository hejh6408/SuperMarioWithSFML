#pragma once

namespace Game
{

class StateBase
{
public:
	StateBase() {};
	~StateBase() {};

	virtual void Init() = 0;

	virtual void HandleInput() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	virtual void Pause() = 0;
	virtual void Resume() = 0;
private:

};

}