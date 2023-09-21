//
//  WorldBuild.hpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#ifndef WorldBuild_hpp
#define WorldBuild_hpp

#include <stdio.h>
class World{
private:
    void playerCollisions(bool animalCheck, bool computerCheck, bool potholeCheck, int &lives, int &score);
};

#endif /* WorldBuild_hpp */
