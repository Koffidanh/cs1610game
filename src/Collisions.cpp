//
//  Collisions.cpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#include "Collisions.hpp"
#include <array>

bool collision(const ComputerCar& computercar, const PlayerCar playercar){
    //player location variable boundary
    auto PL = playercar.carShape.getGlobalBounds();
    std::array<sf::Vector2f, 4> PLcorners{{{PL.left, PL.top}, {PL.left + PL.width, PL.top}, {PL.left + PL.width, PL.top + PL.height}, {PL.left, PL.top + PL.height}}};
    auto CL = computercar.carShape.getGlobalBounds();
    std::array<sf::Vector2f, 4> CLcorners{{{CL.left, CL.top}, {CL.left + CL.width, CL.top}, {CL.left + CL.width, CL.top + CL.height}, {CL.left, CL.top + CL.height}}};
        for(size_t i; i < 4; i++){
            if(CLcorners[i] == PLcorners[i]){
                std::cout << "HIT!";
                return true;
        }
    }
    return false;
}

bool AnimalCollision(const Animal& animal, const PlayerCar playercar){
    //player location variable boundary
    auto PL = playercar.carShape.getGlobalBounds();
    std::array<sf::Vector2f, 4> PLcorners{{{PL.left, PL.top}, {PL.left + PL.width, PL.top}, {PL.left + PL.width, PL.top + PL.height}, {PL.left, PL.top + PL.height}}};
    auto AL = animal.animal.getGlobalBounds();
    std::array<sf::Vector2f, 4> ALcorners{{{AL.left, AL.top}, {AL.left + AL.width, AL.top}, {AL.left + AL.width, AL.top + AL.height}, {AL.left, AL.top + AL.height}}};
        for(size_t i; i < 4; i++){
            if(ALcorners[i] == PLcorners[i]){
                std::cout << "HIT!";
                return true;
        }
    }
    return false;
}
