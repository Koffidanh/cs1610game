//
//  WorldBuild.cpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#include "WorldBuild.hpp"
void World::playerCollisions(bool animalCheck, bool computerCheck, bool potholeCheck, int &lives, int &score){
    while(lives > 0){
        if(animalCheck || computerCheck || potholeCheck){
            lives--;
        }
    }
    if(lives == 0){
        score=0;
    }
}
