/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This header file defines the Model class along with the methods to translate letters

High Level Decisions Used:
I decided to take in chars individually then translate them to strings when implemented
*/

#ifndef MODEL_H
#define MODEL_H
// Import Requirements
#include <string>

class Model
{
    public:
        Model();
        ~Model();
        std::string translateSingleConsonant(char singleConsonant);
        std::string translateSingleVowel(char singleVowel);

};
#endif