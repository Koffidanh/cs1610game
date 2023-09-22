//
//  Testing.cpp
//  carracing
//
//  Created by Zach Allred on 9/21/23.
//

#include "Testing.hpp"


//--------------------------TESTING-------------------------------------//
//-----------------------PLAYERTESTING---------------------------------//
void TestPlayerCollisions(){
    //Player iniatial position
    PlayerCar playerTest(100,100);
    PlayerCar playerTest6 (100, 200);
    PlayerCar playerTest1(-100,-100);
    PlayerCar playerTest2(-100,300);
    Pothole potholeTest(100, 100);
    Pothole potholeTest1(100, 200);
    Pothole potholeTest2(-100, -200);
    Pothole potholeTest3(-1500, -1000);
    //--------------------Player and Pothole at same location--------------//
    assert(potholeCollision(potholeTest, playerTest) && "Test 1 fail - Player collided with a pothole");
    //--------------------Player and Pothole at not same location--------------//
    assert(!potholeCollision(potholeTest1, playerTest) && "Test 2 fail - Player not collided with a pothole");
    
    assert(!potholeCollision(potholeTest2, playerTest) && "Test 3 fail - Player not collided with a pothole");
    
    assert(!potholeCollision(potholeTest3, playerTest) && "Test 4 fail - Player not collided with a pothole");
    
    assert(potholeCollision(potholeTest1, playerTest6) && "Test 5 fail - Player collided with a pothole");
    
    
    //---------------------Player and ComputerCar----------------------------//
    
    ComputerCar computerCarTest(50,50);
    ComputerCar computerCartest1(100, 200);
    ComputerCar computerCartest2(-100, -200);
    ComputerCar computerCartest3(0, 0);
    //----------------------Player and ComputerCar at same position----------//
    
    assert(collision(computerCarTest, playerTest) && "Test 1 fail - Player collided with computerCar");
    
    //----------------------Player and ComputerCar not at same position----------//
    
    assert(!collision(computerCartest1, playerTest) && "Test 2 fail - Player not collided with computerCar");
    
    assert(!collision(computerCartest3, playerTest) && "Test 3 fail - Player not collided with computerCar");
    
    assert(collision(computerCarTest, playerTest6) && "Test 4 fail - Player collided with computerCar");
    
    //---------------------Player and Animal-------------------------------------//
    Animal animalTest(75, 75);
    Animal animalTest1(100, 200);
    Animal animalTest2(500, 200);
    Animal animalTest3(-100,-100);
    Animal animalTest4(-300,-100);
    Animal animalTest5(75, 175);
    //----------------------Player and Animal at same position----------//
    
    assert(AnimalCollision(animalTest, playerTest) && "Test 1 fail - Player collided with Animal");
    
    //----------------------Player and ComputerCar not at same position----------//
    
    assert(!AnimalCollision(animalTest1, playerTest) && "Test 2 fail - Player not collided with computerCar");
    
    assert(!AnimalCollision(animalTest3, playerTest) && "Test 3 fail - Player not collided with computerCar");
    
    assert(!AnimalCollision(animalTest4, playerTest) && "Test 3 fail - Player not collided with computerCar");
    
    assert(AnimalCollision(animalTest5, playerTest6) && "Test 4 fail - Player collided with Animal");
    
}

void TestObjectData(){
    //Computer car testing
    ComputerCar computerCar(100, 100);
    PlayerCar playerTest(100,100);
    PlayerCar playerTest1(200,200);
    Animal animalTest3(-100,-100);
    Pothole potholeTest(100, 100);
    Animal animal(100, 100);
    
    //Player and Pothole at same location
    assert(animalTest3.getXVelocity()== .025f && "Test 1 fail - animal velocity");
    assert(potholeTest.getXVelocity()== .2f && "Test 2 fail - pothole velocity");
    assert(computerCar.getXVelocity()== .2f && "Test 3 fail - computer velocity");
    
    //--------------------Player and Pothole at same location--------------//
    assert(computerCar.getPosition().width == 100 && "Test 1 fail - Checked computer car width size");
       assert(playerTest1.getPosition().width == 100 && "Test 1 fail - Checked Player width size");
       assert(computerCar.getPosition().height == 150 && "Test 1 fail - Checked computer height");
       assert(playerTest1.getPosition().height == 150 && "Test 1 fail - Checked Player heigh");
       assert(animal.getPosition().width == 50 && "Test 1 fail - Checked Panimal width size");
       assert(animal.getPosition().height == 75 && "Test 1 fail - Checked Panimal width size");
    assert(computerCar.getPosition().width == playerTest.getPosition().width && "Test 1 fail - Checked Player position to computer position");
}
