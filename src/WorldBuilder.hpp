//
//  WorldBuilder.hpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#ifndef WorldBuilder_hpp
#define WorldBuilder_hpp
#pragma once
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
    //screen size.
    :window(sf::VideoMode(400,1100), "Utah Traffic")
    {
    }
    
public:
    //world builder function.
    void WorldBuilder();
    sf::RenderWindow window;
};
#endif /* WorldBuilder_hpp */
