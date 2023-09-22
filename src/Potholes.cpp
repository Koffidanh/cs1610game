//
//  Potholes.cpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//
#pragma once
#include "Potholes.hpp"
#include <SFML/Graphics.hpp>
#include "PlayersCar.hpp"

Pothole::Pothole(float startX, float startY)
{
    //set start x and y from input.
    position.x = startX;
    position.y = startY;
    
    //set radius of pothole
    holeShape.setRadius(75);
    //set position.
    holeShape.setPosition(position);
    //set color
    holeShape.setFillColor(sf::Color::Yellow);
}
//get boundary
sf::FloatRect Pothole::getPosition()
{
    return holeShape.getGlobalBounds();
}
 //get shape position.
sf::CircleShape Pothole::getShape()
{
    return holeShape;
}
 //get velocity of shape.
float Pothole::getXVelocity()
{
    return xVelocity;
}
 //check to see if object hit bottom of window.
void Pothole::hitBottom()
{
    position.y = 1;
}
 //reset object and move downward.
void Pothole::update()
{
    //downward movement
    position.y += yVelocity;
    //set position.
    holeShape.setPosition(position);
}



