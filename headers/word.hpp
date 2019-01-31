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
    explicit Word(const string &);
        void setLetters(char c);
        string getLetters() const;
        string getWord() const;
        bool isGuessed() const;
    private:
        string word;
        vector<Letter> letters;
};
#endif /* word_hpp */
