#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <cassert>
#include <iostream>
#include "world.hpp"
#include "animals.hpp"
#include "PlayersCar.hpp"
#include "ComputerCar.hpp"
#include "Potholes.hpp"
#include "WorldBuilder.hpp"
int main()
{
    World world;
    world.WorldBuilder();
    
    return 0;
}
