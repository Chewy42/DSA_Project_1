/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This is where I defined all the methods and variables to be used in the Translator class

High Level Decisions Used:
I decided to create an entirely new method called Translate because I realized
that both the methods to translate a word and sentence were identical and didn't
want to rewrite unnecessary code
*/

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

//Import requirements
#include <string>
#include "Model.h"

class Translator
{
    public:
        Translator();
        ~Translator();
        std::string translateEnglishWord(std::string singleEnglishWord);
        std::string translateEnglishSentence(std::string singleEnglishSentence);
    private:
        std::string Translate(std::string stringToTranslate);
        Model* model;
        std::string allConsonants;
};
#endif