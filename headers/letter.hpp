//
//  letter.hpp
//  Word Guess
//
//  Created by Irving Rivas on 1/26/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#ifndef letter_hpp
#define letter_hpp

class Letter
{
    public:
        explicit Letter(char c);
        void checkLetter(char c);
        char getLetter() const;
    private:
        char letter;
        bool guessed;
};

#endif /* letter_hpp */
