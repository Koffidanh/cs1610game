//
//  WorldBuilder.hpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#ifndef WorldBuilder_hpp
#define WorldBuilder_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "world.hpp"
#include "animals.hpp"
#include "PlayersCar.hpp"
#include "ComputerCar.hpp"
#include "Potholes.hpp"
#include "Collisions.hpp"
#include <random>

class World{
    
public:
    World()
    :window(sf::VideoMode(400,1100), "Utah Traffic")
    {
    }
    
public:
    void WorldBuilder();
    sf::RenderWindow window;
    void ScoreTracker();
};

#endif /* WorldBuilder_hpp */
