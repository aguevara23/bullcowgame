#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();
constexpr int NumberOfTurns = 5;

int main() {
    do {
        PrintIntro();
        PlayGame();
        cout << endl;
    }
    while (AskToPlayAgain());
    
    return 0;
}

// Introduce the game
void PrintIntro() {
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game" << endl;
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
    return;
}

void PlayGame() {
    for (int count = 0; count < NumberOfTurns; count++) {
        string Guess = GetGuess();
        // repeat the guess
        cout << "Your guess is: " << Guess << endl;
        cout << endl;
    }
}

string GetGuess(){
    // get a guess from the player
    cout << "Enter your guess: ";
    string Guess = "";
    getline (cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    cout << "Do you want to play again? ";
    string Response = "";
    getline(cin, Response);
    char Answer = Response[0];
    if (Answer == 'y' || Answer == 'Y') {
        cout << "Ok, let's play again!\n";
        return true;
    }
    cout << "Thank you for playing!\n";
    return false;
}


