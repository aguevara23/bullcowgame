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
int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length();}

void FBullCowGame::Reset() {
    constexpr int32 MAX_TRIES = 8;
    const FString HIDDEN_WORD = "planet";
    
    MyMaxTries = MAX_TRIES;
    MyCurrentTry = 1;
    MyHiddenWord = HIDDEN_WORD;
    return;
}

bool FBullCowGame::IsGameWon() const {
    return false;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const {
    if (false) {// if guess is not an isogram
        return EGuessStatus::Not_Isogram;
    } else if (false) { // if guess length isn't all lowercasae
        return EGuessStatus::Not_Lowercase;
    } else if (Guess.length() != GetHiddenWordLength()) { // if guess length is wrong
        return EGuessStatus::Wrong_Length;
    } else { // otherwise
        return EGuessStatus::OK;
    }
}

// receives a valid guess, increments, and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess){
    // increment the turn number
    MyCurrentTry++;
    // setup a return variable
    FBullCowCount BullCowCount;
    // loop through all letters of guess
    int32 HiddenWordLength = MyHiddenWord.length();
//    std::cout << "Your guess is: " << Guess << std::endl;
    for (int32 MHWChar = 0; MHWChar < HiddenWordLength; MHWChar++) {
        // compare letters against hidden word
        for (int32 GChar = 0; GChar < HiddenWordLength; GChar++) {
            // if the match then (if guess[i] is included in word
            if (Guess[MHWChar] == MyHiddenWord[GChar]) {
            
                // increment bulls if letter is in the correct place (i == j)
                if (MHWChar == GChar) {
                    BullCowCount.Bulls++ ;
                } else {
                // increment cows if letter is in wrong place (i !== j)
                    BullCowCount.Cows++ ;
                }
            }
        }
    }
    return BullCowCount;
}


