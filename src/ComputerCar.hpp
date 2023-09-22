//
//  ComputerCar.hpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#ifndef ComputerCar_hpp
#define ComputerCar_hpp
#include <stdio.h>
#pragma once
#include <SFML/Graphics.hpp>
#include "PlayersCar.hpp"

class PlayerCar;
 
class ComputerCar
{
private:
    //position vector.
    sf::Vector2f position;
    // A RectangleShape object called ref
    sf::RectangleShape carShape;
    //speed of object.
    float xVelocity = .2f;
    float yVelocity = .02f;
 
public:
    //car creation
    ComputerCar(float startX, float startY);
    //reference methods.
    sf::FloatRect getPosition();
    sf::RectangleShape getShape();
    //friend bool to check collision, as private member variable usage is required.
    friend bool collision(const ComputerCar& computercar, const PlayerCar& playercar);
    //velocity setter.
    float getXVelocity();
    //check for bottom of screen.
    void hitBottom();
    //update object.
    void update();
};
#endif /* ComputerCar_hpp */
