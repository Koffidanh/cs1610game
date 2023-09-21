//
//  Potholes.cpp
//  carracing
//
//  Created by Zach Allred on 9/19/23.
//

#include "Potholes.hpp"
#include <SFML/Graphics.hpp>
#include "PlayersCar.hpp"

Pothole::Pothole(float startX, float startY)
{
    position.x = startX;
    position.y = startY;
 
    
    holeShape.setRadius(65);
    holeShape.setPosition(position);
    holeShape.setFillColor(sf::Color::Yellow); // Adjust color as needed
}
sf::FloatRect Pothole::getPosition()
{
    return holeShape.getGlobalBounds();
}
 
sf::CircleShape Pothole::getShape()
{
    return holeShape;
}
 
float Pothole::getXVelocity()
{
    return xVelocity;
}
 
void Pothole::reboundSides()
{
    xVelocity = -xVelocity;
}
 
void Pothole::reboundBatOrTop()
{
    position.y -= (yVelocity * 30);
    yVelocity = -yVelocity;
 
}
 
void Pothole::hitBottom()
{
    position.y = 1;
    position.x = 500;
}
 
void Pothole::update()
{
    // Update the ball position variables
    position.y += yVelocity;
    position.x = xVelocity;
 
    // Move the ball and the bat
    holeShape.setPosition(position);
}

//bool potholeCollision(const Pothole& pothole, const PlayerCar playercar){
//    //player location variable boundary
//    auto PL = playercar.carShape.getGlobalBounds();
//    std::array<sf::Vector2f, 4> PLcorners{{{PL.left, PL.top}, {PL.left + PL.width, PL.top}, {PL.left + PL.width, PL.top + PL.height}, {PL.left, PL.top + PL.height}}};
//    auto CL = pothole.holeShape.getGlobalBounds();
//    std::array<sf::Vector2f, 4> CLcorners{{{CL.left, CL.top}, {CL.left + CL.width, CL.top}, {CL.left + CL.width, CL.top + CL.height}, {CL.left, CL.top + CL.height}}};
//        for(size_t i; i < 4; i++){
//            if(CLcorners[i] == PLcorners[i]){
//                return true;
//        }
//    }
//    return false;
//}

