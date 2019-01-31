//
//  letter.cpp
//  Word Guess
//
//  Created by Irving Rivas on 1/26/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#include "letter.hpp"

Letter::Letter(char c) : letter(c), guessed(false) {}

void Letter::setLetter(char c)
{
    if (c == letter)
        guessed = true;
}

char Letter::getLetter() const
{
    return guessed ? letter : '_';
}
