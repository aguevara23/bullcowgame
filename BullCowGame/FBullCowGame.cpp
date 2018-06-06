//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Alexandre Guevara on 6/6/18.
//  Copyright © 2018 Alex Guevara. All rights reserved.
//

#include "FBullCowGame.hpp"


void FBullCowGame::Reset() {
}


int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
    return false;
}



