#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instantiate a new game

// entry point for application
int main() {
    do {
        PrintIntro();
        PlayGame();
        std::cout << std::endl;
    }
    while (AskToPlayAgain());
    
    return 0;
}

// Introduce the game
void PrintIntro() {
    constexpr int WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game" << std::endl;
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl;
    return;
}

void PlayGame() {
    int MaxTries = BCGame.GetMaxTries();

    // Loop for the number of turns asking guesses
    for (int count = 0; count < MaxTries; count++) {
        std::string Guess = GetGuess();
        // repeat the guess
        std::cout << "Your guess is: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

std::string GetGuess(){
    int CurrentTry = BCGame.GetCurrentTry();
    // get a guess from the player
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    std::string Guess = "";
    std::getline (std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Do you want to play again? ";
    std::string Response = "";
    std::getline(std::cin, Response);
    char Answer = Response[0];
    if (Answer == 'y' || Answer == 'Y') {
        std::cout << "Ok, let's play again!\n";
        return true;
    }
    std::cout << "Thank you for playing!\n";
    return false;
}


