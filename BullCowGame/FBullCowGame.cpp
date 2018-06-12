//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Alexandre Guevara on 6/6/18.
//  Copyright © 2018 Alex Guevara. All rights reserved.
//

#include "FBullCowGame.hpp"

using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;
    MyCurrentTry = 1;
    const FString HIDDEN_WORD = "planet";
    MyHiddenWord = HIDDEN_WORD;
    return;
}

bool FBullCowGame::IsGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString) {
    return false;
}

// receives a valid guess, increments, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString){
    // increment the turn number
    MyCurrentTry++;
    // setup a return variable
    BullCowCount BullCowCount;
    // loop through all letters of guess
        // compare letters against hidden word
    
    return BullCowCount;
}
