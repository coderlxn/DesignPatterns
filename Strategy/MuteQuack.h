#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    MuteQuack();
    ~MuteQuack();

    void quack();
};

#endif // MUTEQUACK_H
