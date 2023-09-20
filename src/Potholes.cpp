//
//  Potholes.cpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#include "Potholes.hpp"

Pothole::Pothole(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    //holeShape.setSize(50.f);
    holeShape.setPosition(position);
}
sf::FloatRect Pothole::getPosition()
{
    return holeShape.getGlobalBounds();
}
 
sf::CircleShape Pothole::getShape()
{
    return holeShape;
}
 
float Pothole::getXVelocity()
{
    return xVelocity;
}
 
void Pothole::reboundSides()
{
    xVelocity = -xVelocity;
}
 
void Pothole::reboundBatOrTop()
{
    position.y -= (yVelocity * 30);
    yVelocity = -yVelocity;
 
}
 
void Pothole::hitBottom()
{
    position.y = 1;
    position.x = 500;
}
 
void Pothole::update()
{
    // Update the ball position variables
    position.y += yVelocity;
    position.x = xVelocity;
 
    // Move the ball and the bat
    holeShape.setPosition(position);
}

