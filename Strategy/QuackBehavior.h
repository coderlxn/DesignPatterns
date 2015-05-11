#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>

class QuackBehavior
{
public:
    QuackBehavior();
    ~QuackBehavior();

    virtual void quack() = 0;
};

#endif // QUACKBEHAVIOR_H
