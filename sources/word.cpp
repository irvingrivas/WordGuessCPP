//
//  word.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "word.hpp"

Word::Word(string randWord) : word(randWord)
{
    for (char l : word)
        letters.push_back(Letter(l));
}

string Word::getWord() const
{
    return word;
}

void Word::setLetters(char c)
{
    for (auto& l : letters)
        l.setLetter(c);
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

