#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <cassert>
#include <iostream>
#include "world.hpp"
#include "animals.hpp"
#include <SFML/Graphics.hpp>
#include "PlayersCar.hpp"
#include "ComputerCar.hpp"
#include "Potholes.hpp"
int main()
{
    int windowHeight = 1100;
    int windowWidth =800;
    int score = 0;
    int lives = 3;
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Road with Stripe");
    
    Road road(800, 1100, .07f);
    Animal animal(800, 600, 0.01f);
    PlayerCar playercar (windowWidth / 2, windowHeight/ 2);
    ComputerCar computerCar (windowWidth / 2, 1);
    ComputerCar computerCar2 (windowWidth / 2, 10);
//------------------------------------------------------//
    Pothole pothole (windowHeight , windowHeight-500);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }
            
            
            playercar.Movement(window);
            
            
            if (computerCar.getPosition().top > windowHeight)
            {
                // reverse the ball direction
                computerCar.hitBottom();
                
                // Remove a life
                score +=10;
                
            }
            
            if (computerCar.getPosition().top < 0)
            {
                computerCar.reboundBatOrTop();
                
                // Add a point to the players score
                score++;
                
            }
            
            if (computerCar.getPosition().left < 0 || computerCar.getPosition().left + 10 > windowWidth)
            {
                computerCar.reboundSides();
            }
            
            if (computerCar.getPosition().intersects(playercar.getPosition()))
            {
                lives--;
                if (lives < 1) {
                    // reset the score
                    score = 0;
                    // reset the lives
                    lives = 3;
                }
            }
            
            //-----------------------------------------------------//
            
            if (pothole.getPosition().top > windowHeight)
            {
                // reverse the ball direction
                pothole.hitBottom();
                
                // Remove a life
                score +=10;
                
            }
            
            if (pothole.getPosition().top < 0)
            {
                pothole.reboundBatOrTop();
                
                // Add a point to the players score
                score++;
                
            }
            
            if (pothole.getPosition().left < 0 || pothole.getPosition().left + 10 > windowWidth)
            {
                pothole.reboundSides();
            }
            
            if (pothole.getPosition().intersects(playercar.getPosition()))
            {
                lives--;
                if (lives < 1) {
                    // reset the score
                    score = 0;
                    // reset the lives
                    lives = 3;
                }
            }
            pothole.update();
            computerCar.update();
            playercar.update();
            
            
            // Clear everything from the last frame
            window.clear(sf::Color(0, 0, 0));
            road.moveStripes(); // Move the stripes
            road.draw(window);
            animal.draw(window);
            animal.move();
            window.draw(pothole.getShape());
            
            
            window.draw(computerCar.getShape());
            
            window.draw(playercar.getShape());
            
            // Show everything we just drew
            window.display();
        }// This is the end of the "while" loop
        
    }
    return 0;
}
