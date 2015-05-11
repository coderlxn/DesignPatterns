#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
    Squeak();
    ~Squeak();

    void quack();
};

#endif // SQUEAK_H
