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
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if(position.x < 50){
            position.x =0;
        }
        else{
            position.x +=carSpeed;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
            position.x -= carSpeed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        // move left
            position.y -= carSpeed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        // move right...
            position.y += carSpeed;
    }

}

void PlayerCar::update()
{
    carShape.setPosition(position);
}
