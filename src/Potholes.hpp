//
//  Potholes.hpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#ifndef Potholes_hpp
#define Potholes_hpp
#include <stdio.h>
#pragma once
#include <SFML/Graphics.hpp>
class PlayerCar;

class Pothole
{
private:
    sf::Vector2f position;
 
    // A Cicle Shape object called ref
    sf::CircleShape holeShape;
 
    float xVelocity = .2f;
    float yVelocity = .1f;
 
public:
    Pothole(float startX, float startY);
 
    sf::FloatRect getPosition();
 
    sf::CircleShape getShape();
 
    float getXVelocity();
 
    void reboundSides();
 
    void reboundBatOrTop();
 
    void hitBottom();
 
    void update();
//    friend bool potholeCollision(const Pothole& pothole, const PlayerCar playercar);
 
};
#endif /* Potholes_hpp */
