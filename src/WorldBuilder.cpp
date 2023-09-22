//
//  WorldBuilder.cpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#include "WorldBuilder.hpp"
void World::WorldBuilder(){
    //set window size.
    sf::RenderWindow window( sf::VideoMode(400,1100), "Utah Traffic");
    //variables used in sizing.
    int windowWidth=400;
    int windowHeight=1100;
    //set score and lives.
    int score = 0;
    int lives = 1;
    //set object starting locations.
    PlayerCar playercar(25, windowHeight/ 2);
    Road road(400, 1100, .07f);
    Animal animal(1, 200);
    ComputerCar computerCar2 (250, 0);
    Pothole pothole (25 , 700);
    
    //set font for scoreboard.
    
    sf::Font font1;
    //file for font.
    font1.loadFromFile("/Users/zachallred/Desktop/CS6010Project/cs1610game/src/Roboto-Regular.ttf");
    sf::Text scoreBoard;
    scoreBoard.setFont(font1);
    scoreBoard.setCharacterSize(24);
    scoreBoard.setFillColor(sf::Color::Green);
    //check if window is open and loop.
    while (window.isOpen())
    {
        sf::Event event;
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                //check if window closed.
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
            }
            //scoreboard for window.
            scoreBoard.setString(  "  Score: " + std::to_string(score));
            //playercar movement
            playercar.Movement(window);
            
            //check when object hits bottom of screen, reset and record +10 to score.
            if(computerCar2.getPosition().top > windowHeight)
            {
                computerCar2.hitBottom();
                score+=10;
            }
            
            //check when object hits bottom of screen, reset and record +10 to score.
            if (pothole.getPosition().top > windowHeight)
            {
                pothole.hitBottom();
                score +=10;
            }
            
            //check when object hits side of screen, reset and record +10 to score.
            if(animal.getPosition().left > windowWidth)
            {
                animal.hitBottom();
                score+=5;
            }
            
            //check for collisions of player and objects. Adjust score and lives.
            playerCollisions((AnimalCollision(animal, playercar)), (collision(computerCar2, playercar)),  (potholeCollision(pothole, playercar)), lives, score);
            
            //object updates.
            pothole.update();
            computerCar2.update();
            playercar.update();
            animal.update();
    
            // Clear everything from the last frame
            window.clear(sf::Color(0, 0, 0));
            //road moving stripes
            road.moveStripes();
            //draw to window.
            road.draw(window);
            window.draw(animal.getShape());
            window.draw(pothole.getShape());
            window.draw(computerCar2.getShape());
            window.draw(playercar.getShape());
            window.draw(scoreBoard);
            // Show everything we just drew
            window.display();
        }
    }
}
