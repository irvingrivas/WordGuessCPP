//
//  letter.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/26/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "letter.hpp"

Letter::Letter(char c) : letter(c), guessed(false) {}

void Letter::checkLetter(char c)
{
    if (c == letter)
        guessed = true;
}

char Letter::getLetter()
{
    return guessed ? letter : '_';
}
