/* This is the console executable, that makes use of the BullCow class
 This acts as the view in the MVC pattern, and is responsible for
 all user interaction. For game logic, see the FBullCowGame class.
 */

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiate a new game

// entry point for application
int main() {
    std::cout << BCGame.GetCurrentTry();
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
        std::cout << std::endl;
    }
    while (bPlayAgain);
    
    return 0;
}

// introduce the game
void PrintIntro() {
    constexpr int32 WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game" << std::endl;
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl;
    return;
}

void PlayGame() {
    int32 MaxTries = BCGame.GetMaxTries();
    BCGame.Reset();

    // loop for the number of turns asking guesses
    // TODO: change from FOR to WHILE loop once we are validating tries
    for (int32 count = 0; count < MaxTries; count++) {
        FText Guess = GetGuess(); // TODO: make loop checking valid
        
        // submit valid guess to game
        // print number of bulls and cows
        
        std::cout << "Your guess is: " << Guess << std::endl;
        std::cout << std::endl;
    }
    
    // TODO: summarize game
}

FText GetGuess(){
    int32 CurrentTry = BCGame.GetCurrentTry();
    // get a guess from the player
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    FText Guess = "";
    std::getline (std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Do you want to play again? ";
    FText Response = "";
    std::getline(std::cin, Response);
    char Answer = Response[0];
    if (Answer == 'y' || Answer == 'Y') {
        std::cout << "Ok, let's play again!\n";
        return true;
    }
    std::cout << "Thank you for playing!\n";
    return false;
}


