//
//  Collisions.hpp
//  carracing
//
//  Created by Zach Allred on 9/20/23.
//

#ifndef Collisions_hpp
#define Collisions_hpp

#include <stdio.h>
#include "PlayersCar.hpp"
#include "ComputerCar.hpp"
#include "animals.hpp"
#include "Potholes.hpp"

void playerCollisions(bool animalCheck, bool computerCheck, bool potholeCheck, int &lives, int &score);

#endif /* Collisions_hpp */
