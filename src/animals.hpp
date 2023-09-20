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


class Animal {
private:
    sf::RectangleShape animal;
    sf::RectangleShape animal1;
    float speed; // Add a speed parameter

public:
    Animal(int width, int height, float s) : speed(s) {
        
        //First animal
        animal.setSize(sf::Vector2f(100,50));
        animal.setFillColor(sf::Color::Red);
        animal.setPosition(-10 , height - 10);
        //second animal
        animal1.setSize(sf::Vector2f(100,50));
        animal1.setFillColor(sf::Color::Yellow);
        animal1.setPosition(-10 , height - 30);

    }

    void move() {
      
        animal.move(0.05, 0);
        animal1.move(0.05, 0);
        
    }

    void draw(sf::RenderWindow& window) {
        window.draw(animal);
        window.draw(animal1);
       
    }




};
#endif /* animals_hpp */
