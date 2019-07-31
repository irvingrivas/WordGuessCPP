//
//  word.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "word.hpp"

Word::Word()
{
    vector<string> words = { "obama", "trump", "republican", "democrat", "donkey",
        "monkey", "computer", "commuter", "screensaver", "random", "anagram" };
    srand ( static_cast<unsigned int>(time(NULL)) ); // initialize the random seed
    short int randIndex = rand() % words.size(); // generates a random index
    word = words[randIndex];

    for (char l : word)
        letters.push_back(Letter(l));
}

string Word::getWord() const
{
    return word;
}

void Word::checkLetters(char c)
{
    for (auto& l : letters)
        l.checkLetter(c);
}

string Word::getLetters() const
{
    string tmp;
    for (auto& l : letters)
        tmp += l.getLetter();
    return tmp;
}

bool Word::isGuessed() const
{
    return (word == getLetters()) ? true : false;
}

