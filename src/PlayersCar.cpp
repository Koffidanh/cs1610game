//
//  PlayersCar.cpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#include "PlayersCar.hpp"

PlayerCar::PlayerCar(float startX, float startY)
{
    //starting x and y values.
    position.x = startX;
    position.y = startY;
    //set size of object.
    carShape.setSize(sf::Vector2f(100, -150));
    //set position.
    carShape.setPosition(position);
    //set color.
    carShape.setFillColor(sf::Color::Blue);
}

//return boundary of object.
sf::FloatRect PlayerCar::getPosition()
{
    return carShape.getGlobalBounds();
}
 //return position of object.
sf::RectangleShape PlayerCar::getShape()
{
    return carShape;
}
//keyboard input commands
void PlayerCar::Movement(const sf::RenderWindow& window){
    //if right key is pressed, and x doesn't exceed window boundary, move right.
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        if (position.x < 300) {
            position.x +=carSpeed;
        }
        else position.x = 300;
    }
    //if left key is pressed, and x doesn't exceed window boundary, move left.
    
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        
        if (position.x > 0) {
            position.x -= carSpeed;
        }
        else position.x = 0;
    }
    //if up key is pressed, and y doesn't exceed window boundary, move up.
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        
        if (position.y > 150 && position.y < 1500) {
            position.y -= carSpeed;
        }
        else position.y = 150;
    }
    //if down key is pressed, and y doesn't exceed window boundary, move down.
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        
        if (position.y < 780) {
            position.y += carSpeed;
        }
        else position.y = 780;
    }
}
//set PlayerCar position.
void PlayerCar::update()
{
    carShape.setPosition(position);
}
