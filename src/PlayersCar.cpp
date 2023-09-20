//
//  PlayersCar.cpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#include "PlayersCar.hpp"

PlayerCar::PlayerCar(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    carShape.setSize(sf::Vector2f(100, -150));
    carShape.setPosition(position);
}

sf::FloatRect PlayerCar::getPosition()
{
    return carShape.getGlobalBounds();
}
 
sf::RectangleShape PlayerCar::getShape()
{
    return carShape;
}

void PlayerCar::Movement(const sf::RenderWindow& window){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        // move left...
        position.x +=carSpeed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        // move right...
        position.x -= carSpeed;
    }
}

 
void PlayerCar::update()
{
    carShape.setPosition(position);
}
