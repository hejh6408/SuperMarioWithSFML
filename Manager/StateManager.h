#pragma once

#include <memory>
#include <vector>

namespace GAME
{

class StateBase;

typedef std::shared_ptr<StateBase> StateBaseRef;

class StateManager
{
public:
	StateManager();
	~StateManager();

	enum Operation
	{
		RUN = 1 << 0,
		STOP = 1 << 1,
		ADD = 1 << 2,
		DELETE = 1 << 3,
		REPLACE = 1 << 4,
		END = 5, // 추가시 Update 필요
	};

	void PushBackState(StateBaseRef _state);
	void PopBackState();
	void DeleteCurState();

	StateBaseRef GetBackState() const;
	StateBaseRef GetFrontState() const;
	StateBaseRef GetCurState() const;
	
	void SetOperation(StateManager::Operation _op);
	StateManager::Operation GetOperation(StateManager::Operation _op) const;
	
	void Update();

private:
	// private 멤버 함수는 여기에..
	void run();
	void stop();
	void add();
	void del();
	void replace();
private:
	// private 멤버 변수는 여기에..
	std::vector<StateBaseRef> thisStateList;

	Operation thisOperation;
};

}