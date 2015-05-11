#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehaviour.h"

class FlyNoWay : public FlyBehaviour
{
public:
    FlyNoWay();
    ~FlyNoWay();

    virtual void fly();
};

#endif // FLYNOWAY_H
