//
//  PlayersCar.hpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#ifndef PlayersCar_hpp
#define PlayersCar_hpp
#pragma once
#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>

class ComputerCar;
class Animal;
 
class PlayerCar
{
private:
    sf::Vector2f position;
 
    // A RectangleShape object
    sf::RectangleShape carShape;
 
    float carSpeed = .15f;
    int lives, score;
 
public:
    PlayerCar(float startX, float startY);
 
    sf::FloatRect getPosition();
 
    sf::RectangleShape getShape();
    
    friend bool collision(const ComputerCar& computercar, const PlayerCar playercar);
    
    friend bool AnimalCollision(const Animal& animal, const PlayerCar playercar);
 
    void update();
    
    void Movement(const sf::RenderWindow& window);
 
};



#endif /* PlayersCar_hpp */
