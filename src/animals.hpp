//
//  animals.hpp
//  carracing
//
//  Created by Koffi Danhounsrou on 9/19/23.
//

#ifndef animals_hpp
#define animals_hpp
#pragma once
#include <SFML/Graphics.hpp>
#include <stdio.h>

#include <string>
#include <vector>
#include <stdio.h>
#include <cassert>
#include <iostream>
#include <cstdlib>

class PlayerCar;

class Animal
{
private:
    //animal position.
    sf::Vector2f position;
    // A RectangleShape object called ref
    sf::RectangleShape animalShape;
    //speed of object on x plane.
    float xVelocity = .025f;
 
public:
    //animal starting position.
    Animal(float startX, float startY);
    //get position of animal
    sf::FloatRect getPosition();
    //get shape of animal
    sf::RectangleShape getShape();
    //friend bool for collision with player.
    friend bool AnimalCollision(const Animal& animal, const PlayerCar& playercar);
    //get velocity of animal.
    float getXVelocity();
    //check if animal hit edge of screen.
    void hitBottom();
    //update object.
    void update();
};
#endif /* animals_hpp */
