//
//  animals.hpp
//  carracing
//
//  Created by Koffi Danhounsrou on 9/19/23.
//

#ifndef animals_hpp
#define animals_hpp

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
    sf::Vector2f position;
 
    // A RectangleShape object called ref
    sf::RectangleShape animalShape;
 
    float xVelocity = .025f;
 
public:
    Animal(float startX, float startY);
 
    sf::FloatRect getPosition();
 
    sf::RectangleShape getShape();
    
    friend bool AnimalCollision(const Animal& animal, const PlayerCar& playercar);
 
    float getXVelocity();
 
    void hitBottom();
 
    void update();
    
    
};
#endif /* animals_hpp */
