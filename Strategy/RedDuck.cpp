#include "RedDuck.h"
#include <iostream>
#include "FlyWithWings.h"
#include "Squeak.h"

RedDuck::RedDuck()
{
    std::shared_ptr<FlyBehaviour> flyB(new FlyWithWings());
    std::cout << "behavior counter " << flyB.use_count() << std::endl;
    setFlyBehaviour(flyB);
    std::cout << "behavior counter " << flyB.use_count() << std::endl;
    std::shared_ptr<QuackBehavior> quackB(new Squeak());
    setQuackBehavior(quackB);
}

RedDuck::~RedDuck()
{

}

void RedDuck::display()
{
    std::cout << "I am a red duck!" << std::endl;
    performFlyBehaviour();
    performQuackBehavior();
}

