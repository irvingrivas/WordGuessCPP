//
//  word.hpp
//  Word Guess
//
//  Created by Irving Rivas on 1/27/19.
//  Copyright © 2019 Irving Rivas. All rights reserved.
//

#ifndef word_hpp
#define word_hpp
#include<vector>
using std::vector;
#include<string>
using std::string;
#include "letter.hpp"
class Word
{
    public:
    explicit Word(string randWord);
        void checkLetters(char c);
        string getLetters();
        string getWord();
        bool isGuessed();
    private:
        string word;
        vector<Letter> letters;
};
#endif /* word_hpp */
