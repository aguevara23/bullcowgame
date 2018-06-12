//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Alexandre Guevara on 6/6/18.
//  Copyright © 2018 Alex Guevara. All rights reserved.
//
#include <iostream>
#include <string>

using FString = std::string;
using int32 = int;

// all values initialized to zero
struct BullCowCount {
    int Bulls = 0;
    int Cows = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); // TODO: make a more rich return value
    bool CheckGuessValidity(FString); // TODO: make a more rich return value
    BullCowCount SubmitGuess(FString);
    
private:
    // see constructor for initialization
    int32 MyCurrentTry = 1;
    int32 MyMaxTries = 5;
    FString MyHiddenWord;
};

