//
//  Collisions.cpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#include "Collisions.hpp"
#include <array>

//Check for playercar and computercar rectangle boundaries to see if they intersect.
bool collision(const ComputerCar& computercar, const PlayerCar& playercar){
    //check boundary of computer and player car using intersect from sf.
    if(computercar.carShape.getGlobalBounds().intersects(playercar.carShape.getGlobalBounds())){
        //if they intersect, return true.
        return true;
    }
    return false;
}
//Check for animal and playercar rectangle boundaries to see if they intersect.
bool AnimalCollision(const Animal& animal, const PlayerCar& playercar){
    //check boundary of computer and player car using intersect from sf.
    if(animal.animalShape.getGlobalBounds().intersects(playercar.carShape.getGlobalBounds())){
        //if they intersect, return true.
        return true;
    }
    return false;
}
//check for collision between circle potholes, and rectangle player's car.
bool potholeCollision(const Pothole& pothole, const PlayerCar& playercar){
    //first get player corner boundary of player rectangle.
    auto PL = playercar.carShape.getGlobalBounds();
    //use inbuilt sf vector to get corners.
    std::array<sf::Vector2f, 4> PLcorners{{{PL.left, PL.top}, {PL.left + PL.width, PL.top}, {PL.left + PL.width, PL.top + PL.height}, {PL.left, PL.top + PL.height}}};
    for(const auto& PLVal : PLcorners){
        //get difference between player and pothole boundaries.
        auto vector=PLVal - pothole.holeShape.getPosition();
        //check if the boundaries meet.
        if(vector.x * vector.x + vector.y * vector.y < pothole.holeShape.getRadius()*pothole.holeShape.getRadius()){
            return true;
        }
    }
    return false;
}
//score and lives reset if any of the boundary functions return true.
void playerCollisions(bool animalCheck, bool computerCheck, bool potholeCheck, int &lives, int &score){
    //reduce lives by 1 for boundary interaction.
    if(lives > 0){
        if(animalCheck || computerCheck || potholeCheck){
            lives--;
        }
    }
    //reset if 0.
    if(lives == 0){
        score=0;
        lives=3;
    }
}
