//
//  Collisions.cpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#include "Collisions.hpp"
#include <array>


bool collision(const ComputerCar& computercar, const PlayerCar& playercar){
    //player location variable boundary
    if(computercar.carShape.getGlobalBounds().intersects(playercar.carShape.getGlobalBounds())){
        return true;
    }
    return false;
}

bool AnimalCollision(const Animal& animal, const PlayerCar& playercar){
    //player location variable boundary
    if(animal.animalShape.getGlobalBounds().intersects(playercar.carShape.getGlobalBounds())){
        return true;
    }
    return false;
}

bool potholeCollision(const Pothole& pothole, const PlayerCar& playercar){
    //player location variable boundary
    auto PL = playercar.carShape.getGlobalBounds();
    std::array<sf::Vector2f, 4> PLcorners{{{PL.left, PL.top}, {PL.left + PL.width, PL.top}, {PL.left + PL.width, PL.top + PL.height}, {PL.left, PL.top + PL.height}}};
    for(const auto& PLVal : PLcorners){
        auto vector=PLVal - pothole.holeShape.getPosition();
        if(vector.x * vector.x + vector.y * vector.y < pothole.holeShape.getRadius()*pothole.holeShape.getRadius()){
            return true;
        }
    }
    
    return false;
}

void playerCollisions(bool animalCheck, bool computerCheck, bool potholeCheck, int &lives, int &score){
    if(lives > 0){
        if(animalCheck || computerCheck || potholeCheck){
            lives--;
        }
    }
    if(lives == 0){
        score=0;
        lives=3;
    }
}
