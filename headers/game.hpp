//
//  game.hpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "word.hpp"
#include <time.h>

class Game
{
    public:
    explicit Game();
        void play();
    protected:
        string getRandWord(); // utility function
    private:
        char guess;
        short int numGuesses;
};
#endif /* game_hpp */
