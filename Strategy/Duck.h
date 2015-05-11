#ifndef DUCK_H
#define DUCK_H

#include <memory>

class FlyBehaviour;
class QuackBehavior;

class Duck
{
public:
    Duck();
    ~Duck();

    virtual void display() = 0;

    void setFlyBehaviour(std::shared_ptr<FlyBehaviour>& behavior);
    void setQuackBehavior(std::shared_ptr<QuackBehavior>& behavior);
    void performFlyBehaviour();
    void performQuackBehavior();


protected:
    std::shared_ptr<FlyBehaviour> m_flyBehavior;
    std::shared_ptr<QuackBehavior> m_quackBehavior;
};

#endif // DUCK_H
