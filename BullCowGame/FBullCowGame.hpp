//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Alexandre Guevara on 6/6/18.
//  Copyright © 2018 Alex Guevara. All rights reserved.
//
#include <iostream>
#include <string>

class FBullCowGame {
public:
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // // TODO make a more rich return value
    bool CheckGuessValidity(std::string);
    
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 5;
};

