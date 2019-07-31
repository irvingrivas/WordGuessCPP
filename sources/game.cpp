//
//  game.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "game.hpp"

Game::Game(const short int &n) : numGuesses(n) 
{
    Word word;
    
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
