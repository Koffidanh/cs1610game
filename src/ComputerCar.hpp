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
 
class ComputerCar
{
private:
    sf::Vector2f position;
 
    // A RectangleShape object called ref
    sf::RectangleShape carShape;
 
    float xVelocity = .2f;
    float yVelocity = .1f;
    int score, lives;
 
public:
    ComputerCar(float startX, float startY);
 
    sf::FloatRect getPosition();
 
    sf::RectangleShape getShape();
 
    float getXVelocity();
 
    void reboundSides();
 
    void reboundBatOrTop();
 
    void hitBottom();
 
    void update();
 
};
#endif /* ComputerCar_hpp */
