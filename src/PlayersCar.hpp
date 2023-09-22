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

//helper classes.
class ComputerCar;
class Animal;
class Pothole;
 
class PlayerCar
{
private:
    //vector positionf or object
    sf::Vector2f position;
    // A RectangleShape object
    sf::RectangleShape carShape;
    //speed of object
    float carSpeed = .15f;
 
public:
    //create object at x and y coordinates.
    PlayerCar(float startX, float startY);
    //get position of object
    sf::FloatRect getPosition();
    //get object ref
    sf::RectangleShape getShape();
    //friend bool to check collision between computer car and player car.
    friend bool collision(const ComputerCar& computercar, const PlayerCar& playercar);
    //friend bool to check for animal collision.
    friend bool AnimalCollision(const Animal& animal, const PlayerCar& playercar);
    //friend bool to check for pothole collision.
    friend bool potholeCollision(const Pothole& pothole, const PlayerCar& playercar);
    //update object.
    void update();
    //player movement with keyboard.
    void Movement(const sf::RenderWindow& window);
};



#endif /* PlayersCar_hpp */
