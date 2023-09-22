//
//  WorldBuilder.cpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#include "WorldBuilder.hpp"
void World::WorldBuilder(){
    sf::RenderWindow window( sf::VideoMode(400,1100), "Utah Traffic");
    int windowWidth=400;
    int windowHeight=1100;
    int score = 0;
    int lives = 3;
    PlayerCar playercar(25, windowHeight/ 2);
        Road road(400, 1100, .07f);
    Animal animal(1, 200);
    //ComputerCar computerCar (50, 1);
    ComputerCar computerCar2 (250, 1);
    Pothole pothole (25 , 700);
    
    sf::Font font1;
        font1.loadFromFile("/Users/zachallred/Desktop/CS6010Project/cs1610game/src/Roboto-Regular.ttf");
        sf::Text scoreBoard;
        scoreBoard.setFont(font1);
        scoreBoard.setCharacterSize(24);

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
            
                scoreBoard.setString(  "score: " + std::to_string(score));
            playercar.Movement(window);
            
            if(computerCar2.getPosition().top > windowHeight)
                
            {
                computerCar2.hitBottom();
                score+=10;
            }
            
            if (pothole.getPosition().top > windowHeight)
            {
                // reverse the ball direction
                pothole.hitBottom();
                
                // Remove a life
                score +=10;
                
            }
            
            if(animal.getPosition().left > windowWidth)
                
            {
                animal.hitBottom();
                score+=5;
            }
            
            
            playerCollisions((AnimalCollision(animal, playercar)), (collision(computerCar2, playercar)),  (potholeCollision(pothole, playercar)), lives, score);
            
            pothole.update();
            //computerCar.update();
            computerCar2.update();
            playercar.update();
            animal.update();
            
            
            // Clear everything from the last frame
            window.clear(sf::Color(0, 0, 0));
            road.moveStripes(); // Move the stripes
            road.draw(window);
            window.draw(animal.getShape());
            window.draw(pothole.getShape());
            
            
            //window.draw(computerCar.getShape());
            window.draw(computerCar2.getShape());
            window.draw(playercar.getShape());
            window.draw(scoreBoard);
            
            // Show everything we just drew
            window.display();
        }// This is the end of the "while" loop
        
    }
}
