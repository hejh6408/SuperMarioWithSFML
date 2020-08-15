#include "StateManager.h"

#include <iostream>

namespace GAME
{

StateManager::StateManager()
{
}

StateManager::~StateManager()
{
}

void StateManager::PushBackState(StateBaseRef _state)
{
	thisStateList.push_back(_state);
}

void StateManager::PopBackState()
{
	thisStateList.pop_back();
}

void StateManager::DeleteCurState()
{
	PopBackState();
}

StateBaseRef StateManager::GetBackState() const
{
	return thisStateList.empty() ? nullptr : thisStateList.back();
}

StateBaseRef StateManager::GetFrontState() const
{
	return thisStateList.empty() ? nullptr : thisStateList.front();
}

StateBaseRef StateManager::GetCurState() const
{
	return GetBackState();
}

void StateManager::SetOperation(StateManager::Operation _op)
{
	thisOperation = _op;
}

StateManager::Operation StateManager::GetOperation(StateManager::Operation _op) const
{
	return thisOperation;
}

void StateManager::Update()
{
	for(size_t OpCheck = 0; OpCheck < StateManager::END; ++OpCheck)
	{
		if((thisOperation & (1 << OpCheck)) == 0) continue;

		switch (1 << OpCheck)
		{
		case StateManager::RUN:
			run();
			break;
		case StateManager::STOP:
			stop();
			break;
		case StateManager::ADD:
			add();
			break;
		case StateManager::DELETE:
			del();
			break;
		case StateManager::REPLACE:
			replace();
			break;
		default:
			break;
		}
	}


}

void StateManager::run()
{
	// �ϴ� �׽�Ʈ������ log ����̳� ����.
	std::cout << "run" << std::endl;
}

void StateManager::stop()
{
	std::cout << "stop" << std::endl;
}

void StateManager::add()
{
	std::cout << "add" << std::endl;
}

void StateManager::del()
{
	std::cout << "del" << std::endl;
}

void StateManager::replace()
{
	std::cout << "replace" << std::endl;
}

}