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
struct FBullCowCount {
    int Bulls = 0;
    int Cows = 0;
};

enum class EGuessStatus {
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lowercase
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    
    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const; // TODO: make a more rich return value
    
    void Reset(); // TODO: make a more rich return value
    FBullCowCount SubmitGuess(FString);
    
private:
    // see constructor for initialization
    int32 MyCurrentTry = 1;
    int32 MyMaxTries = 5;
    FString MyHiddenWord;
};

