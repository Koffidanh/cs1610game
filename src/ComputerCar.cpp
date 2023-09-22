//
//  ComputerCar.cpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#include "ComputerCar.hpp"
ComputerCar::ComputerCar(float startX, float startY)
{
    //set starting x and y.
    position.x = startX;
    position.y = startY;
 
    carShape.setSize(sf::Vector2f(100, 150));
    carShape.setPosition(position);
}
//get boundaries of computer car.
sf::FloatRect ComputerCar::getPosition()
{
    return carShape.getGlobalBounds();
}
 //get shape of computer car.
sf::RectangleShape ComputerCar::getShape()
{
    return carShape;
}
 //get velocity.
float ComputerCar::getXVelocity()
{
    return xVelocity;
}
 //check used for other functions when car has hit the bottom of the screen.
void ComputerCar::hitBottom()
{
    position.y = 1;
}
 
//function to reset computer car to top.
void ComputerCar::update()
{
    position.y += yVelocity;
    carShape.setPosition(position);
   
}

