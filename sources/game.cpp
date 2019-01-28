//
//  game.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "game.hpp"

Game::Game() : numGuesses(15) {}

void Game::play()
{
    Word word(getRandWord());
    while (!word.isGuessed() && (numGuesses > 0))
    {
        cout << "You have " << numGuesses << " guesses left!" <<
        endl << word.getLetters() << endl << "Please guess a letter!" << endl;
        cin >> guess;
        word.checkLetters(guess);
        --numGuesses;
    }
    if (word.isGuessed())
        cout << "Congrats, the word was '" <<
        word.getWord() << "' you win!" << endl;
    else
        cout << "Sorry, the word was '" <<
        word.getWord() << "' please try again!" << endl;
}

//kept outside of 'Game' to free up stack from holding 'words' while playing
string Game::getRandWord()
{
    srand ( static_cast<unsigned int>(time(NULL)) ); // initialize the random seed
    vector<string> words = {"obama", "trump", "republican", "democrat", "donkey",
        "monkey", "computer", "commuter", "screensaver", "random", "anagram"
    };
    short int randIndex = rand() % words.size(); //generates a random number
    return words[randIndex];
}
