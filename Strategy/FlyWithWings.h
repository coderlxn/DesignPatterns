#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehaviour.h"

class FlyWithWings : public FlyBehaviour
{
public:
    FlyWithWings();
    ~FlyWithWings();

    virtual void fly();
};

#endif // FLYWITHWINGS_H
