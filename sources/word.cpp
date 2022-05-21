//
//  word.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "word.hpp"
#include <algorithm>

Word::Word()
{
    vector<string> words = { "obama", "trump", "republican", "democrat", "donkey",
        "monkey", "computer", "commuter", "screensaver", "random", "anagram" };
    srand ( static_cast<unsigned int>(time(NULL)) ); // initialize the random seed
    short randIndex = rand() % words.size(); // generates a random index
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
    for (Letter& l : letters)
        l.checkLetter(c);
}

string Word::getLetters() const
{
    string tmp;
    for (const Letter& l : letters)
        tmp += l.getLetter();
    return tmp;
}

bool Word::isGuessed() const
{
    return std::all_of(letters.cbegin(), letters.cend(),
        [](const Letter& l) { return l.isGuessed(); });
}

