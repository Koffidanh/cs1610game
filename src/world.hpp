//
//  world.hpp
//  carracing
//
//  Created by Koffi Danhounsrou on 9/19/23.
//

#ifndef world_hpp
#define world_hpp


#include <SFML/Graphics.hpp>
#include <stdio.h>

#include <string>
#include <vector>
#include <stdio.h>
#include <cassert>
#include <iostream>

class Road {
private:
    float speed; // Add a speed parameter
    sf::RectangleShape roadShape;
    sf::RectangleShape rightStripeShape;
    sf::RectangleShape midStripeShape;
    sf::RectangleShape midStripeShape1;
    sf::RectangleShape midStripeShape2;
    sf::RectangleShape midStripeShape3;
    sf::RectangleShape midStripeShape4;
    sf::RectangleShape midStripeShape5;
    sf::RectangleShape midStripeShape6;
    sf::RectangleShape midStripeShape7;
    sf::RectangleShape midStripeShape8;
    sf::RectangleShape midStripeShape9;
    sf::RectangleShape midStripeShape10;
    sf::RectangleShape midStripeShape11;


    sf::RectangleShape leftStripeShape;
    
    

public:
    Road(int width, int height, float s) : speed(s) {
        // Initialize road
        roadShape.setSize(sf::Vector2f(width, height));
        roadShape.setFillColor(sf::Color::Black);

        // Initialize right stripe
        rightStripeShape.setSize(sf::Vector2f(10, height));
        rightStripeShape.setFillColor(sf::Color::White);
        rightStripeShape.setPosition(width - 10 , 0);
        // Initialize left stripe
        leftStripeShape.setSize(sf::Vector2f(10, height));
        leftStripeShape.setFillColor(sf::Color::White);
        leftStripeShape.setPosition(0 , 0);
//         Initialize center stripe
        midStripeShape.setSize(sf::Vector2f(10, 50));
        midStripeShape.setFillColor(sf::Color::White);
        midStripeShape.setPosition((width-10)/2 , 0);
        // Initialize center next stripe
        midStripeShape1.setSize(sf::Vector2f(10, 50));
        midStripeShape1.setFillColor(sf::Color::White);
        midStripeShape1.setPosition((width-10)/2 , 100);
        // Initialize center next stripe
        midStripeShape2.setSize(sf::Vector2f(10, 50));
        midStripeShape2.setFillColor(sf::Color::White);
        midStripeShape2.setPosition((width-10)/2 , 200);
        // Initialize center next stripe
        midStripeShape3.setSize(sf::Vector2f(10, 50));
        midStripeShape3.setFillColor(sf::Color::White);
        midStripeShape3.setPosition((width-10)/2 , 300);
        // Initialize center next stripe
        midStripeShape4.setSize(sf::Vector2f(10, 50));
        midStripeShape4.setFillColor(sf::Color::White);
        midStripeShape4.setPosition((width-10)/2 , 400);
        // Initialize center next stripe
        midStripeShape5.setSize(sf::Vector2f(10, 50));
        midStripeShape5.setFillColor(sf::Color::White);
        midStripeShape5.setPosition((width-10)/2 , 500);
        // Initialize center next stripe
        midStripeShape6.setSize(sf::Vector2f(10, 50));
        midStripeShape6.setFillColor(sf::Color::White);
        midStripeShape6.setPosition((width-10)/2 , 600);
        // Initialize center next stripe
        midStripeShape7.setSize(sf::Vector2f(10, 50));
        midStripeShape7.setFillColor(sf::Color::White);
        midStripeShape7.setPosition((width-10)/2 , 700);
        // Initialize center next stripe
        midStripeShape8.setSize(sf::Vector2f(10, 50));
        midStripeShape8.setFillColor(sf::Color::White);
        midStripeShape8.setPosition((width-10)/2 , 800);
        // Initialize center next stripe
        midStripeShape9.setSize(sf::Vector2f(10, 50));
        midStripeShape9.setFillColor(sf::Color::White);
        midStripeShape9.setPosition((width-10)/2 , 900);
        // Initialize center next stripe
        midStripeShape10.setSize(sf::Vector2f(10, 50));
        midStripeShape10.setFillColor(sf::Color::White);
        midStripeShape10.setPosition((width-10)/2 , 1000);
        // Initialize center next stripe
        midStripeShape11.setSize(sf::Vector2f(10, 50));
        midStripeShape11.setFillColor(sf::Color::White);
        midStripeShape11.setPosition((width-10)/2 , 1100);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(roadShape);
        window.draw(rightStripeShape);
        window.draw(leftStripeShape);
        window.draw(midStripeShape);
        window.draw(midStripeShape1);
        window.draw(midStripeShape2);
        window.draw(midStripeShape3);
        window.draw(midStripeShape4);
        window.draw(midStripeShape5);
        window.draw(midStripeShape6);
        window.draw(midStripeShape7);
        window.draw(midStripeShape8);
        window.draw(midStripeShape9);
        window.draw(midStripeShape10);
        window.draw(midStripeShape11);

    }
    
    void moveStripes() {
        // Move all the stripes downwards
        
        midStripeShape1.move(0, speed);
        midStripeShape2.move(0, speed);
        midStripeShape3.move(0, speed);
        midStripeShape4.move(0, speed);
        midStripeShape5.move(0, speed);
        midStripeShape6.move(0, speed);
        midStripeShape7.move(0, speed);
        midStripeShape8.move(0, speed);
        midStripeShape9.move(0, speed);
        midStripeShape10.move(0, speed);
        midStripeShape11.move(0, speed);
        
        // Reset position when a stripe reaches the bottom
        if (midStripeShape.getPosition().y > 600) midStripeShape.setPosition((400-10)/2, 0);
        if (midStripeShape1.getPosition().y > 1100) midStripeShape1.setPosition((400-10)/2, 0);
        if (midStripeShape2.getPosition().y > 1100) midStripeShape2.setPosition((400-10)/2, 0);
        if (midStripeShape3.getPosition().y > 1100) midStripeShape3.setPosition((400-10)/2, 0);
        if (midStripeShape4.getPosition().y > 1100) midStripeShape4.setPosition((400-10)/2, 0);
        if (midStripeShape5.getPosition().y > 1100) midStripeShape5.setPosition((400-10)/2, 0);
        if (midStripeShape6.getPosition().y > 1100) midStripeShape6.setPosition((400-10)/2, 0);
        if (midStripeShape7.getPosition().y > 1100) midStripeShape7.setPosition((400-10)/2, 0);
        if (midStripeShape8.getPosition().y > 1100) midStripeShape8.setPosition((400-10)/2, 0);
        if (midStripeShape9.getPosition().y > 1100) midStripeShape9.setPosition((400-10)/2, 0);
        if (midStripeShape10.getPosition().y > 1100) midStripeShape10.setPosition((400-10)/2, 0);
        if (midStripeShape11.getPosition().y > 1100) midStripeShape11.setPosition((400-10)/2, 0);
    }
    
};



#endif /* world_hpp */
