//
//  ComputerCar.cpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#include "ComputerCar.hpp"
ComputerCar::ComputerCar(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    carShape.setSize(sf::Vector2f(100, 150));
    carShape.setPosition(position);
}
sf::FloatRect ComputerCar::getPosition()
{
    return carShape.getGlobalBounds();
}
 
sf::RectangleShape ComputerCar::getShape()
{
    return carShape;
}
 
float ComputerCar::getXVelocity()
{
    return xVelocity;
}
 
void ComputerCar::reboundSides()
{
    xVelocity = -xVelocity;
}
 
void ComputerCar::reboundBatOrTop()
{
    position.y -= (yVelocity * 30);
    yVelocity = -yVelocity;
 
}
 
void ComputerCar::hitBottom()
{
    position.y = 1;
    position.x = 500;
}
 
void ComputerCar::update()
{
    // Update the ball position variables
    position.y += yVelocity;
    position.x = xVelocity;
 
    // Move the ball and the bat
    carShape.setPosition(position);
}

