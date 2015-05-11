#include "Duck.h"
#include "FlyBehaviour.h"
#include "QuackBehavior.h"

Duck::Duck()
{
}

Duck::~Duck()
{
}

void Duck::setFlyBehaviour(std::shared_ptr<FlyBehaviour>& behavior)
{
    m_flyBehavior = behavior;
}

void Duck::setQuackBehavior(std::shared_ptr<QuackBehavior>& behavior)
{
    m_quackBehavior = behavior;
}

void Duck::performFlyBehaviour()
{
    m_flyBehavior->fly();
}

void Duck::performQuackBehavior()
{
    m_quackBehavior->quack();
}

