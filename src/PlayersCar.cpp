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
        if (position.x < 300) {
            position.x +=carSpeed;
        } else position.x = 300;
            
        }
    
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        
        if (position.x > 0) {
            position.x -= carSpeed;
        } else position.x = 0;
            
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        
        if (position.y > 150 && position.y < 1500) {
            position.y -= carSpeed;
        } else position.y = 150;
        
            
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        
        if (position.y < 780) {
            position.y += carSpeed;
        } else position.y = 780;
        
            
    }

}

void PlayerCar::update()
{
    carShape.setPosition(position);
}
