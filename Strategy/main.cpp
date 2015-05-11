#include <iostream>
#include "RedDuck.h"
#include "FlyNoWay.h"

using namespace std;


int main()
{
    cout << "Hello World!" << endl;

    RedDuck duck;
    duck.display();

    std::cout << "duck injured" << std::endl;

    std::shared_ptr<FlyBehaviour> p(new FlyNoWay());
    duck.setFlyBehaviour(p);
    duck.display();

    return 0;
}

