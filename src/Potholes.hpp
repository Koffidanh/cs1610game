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
    //object speeds
    float xVelocity = .2f;
    float yVelocity = .02f;
 
public:
    //starting point of object
    Pothole(float startX, float startY);
    //get position of object
    sf::FloatRect getPosition();
    //get object shape
    sf::CircleShape getShape();
    //get velocity.
    float getXVelocity();
    //check if object hit bottom of screen.
    void hitBottom();
    //update object.
    void update();
    //friend bool to check for collision with player.
    friend bool potholeCollision(const Pothole& pothole, const PlayerCar& playercar);
};
#endif /* Potholes_hpp */
