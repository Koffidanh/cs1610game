//
//  animals.cpp
//  carracing
//
//  Created by Koffi Danhounsrou on 9/19/23.
//

#include "animals.hpp"

Animal::Animal(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    animalShape.setSize(sf::Vector2f(50, 75));
    animalShape.setPosition(position);
}
sf::FloatRect Animal::getPosition()
{
    return animalShape.getGlobalBounds();
}
 
sf::RectangleShape Animal::getShape()
{
    return animalShape;
}
 
float Animal::getXVelocity()
{
    return xVelocity;
}
 
void Animal::hitBottom()
{
    position.x = 1;
}
 
void Animal::update()
{
    position.x += xVelocity;
    animalShape.setPosition(position);
   
}



