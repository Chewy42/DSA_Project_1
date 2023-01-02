/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This class implementation includes taking in a consonant and translating it to its 
robber language form. It also has a method that takes in a vowel and instantly
returns it since vowels are supposed to be left in tact

High Level Decisions Used:
I decided to take in the char individually because in my Translator class I
was able to index a char out of a string once at a time, then I cast it to a string 
and concatonate then return.
*/

// Import Requirements
#include <iostream>
#include <ctype.h>
#include <string>
#include "Model.h"

using namespace std;

/*
Name Of Function: Model class constructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
Model::Model()
{
}

/*
Name Of Function: Model class destructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
Model::~Model()
{
}

/*
Name Of Function: translateSingleConsonant

Description of Value Returned: A string value is returned including the 
singular translated consonant into its new translated robber language
form

Description of Parameters: The parameter is a single char called singleConsonant that
is taken in to be translated to the robber language form

Description of exceptions thrown: None
*/
string Model::translateSingleConsonant(char singleConsonant)
{
    //Change character to string
    std::string consonant(1, singleConsonant);
    std::string result = consonant + "o" + consonant;
    return result;
};

/*
Name Of Function: translateSingleVowel

Description of Value Returned: The value returned is the original input, turned
into a string value and kept in tact

Description of Parameters: The parameter is a char value called singleVowel that
will NOT be translated, but instead left in tact

Description of exceptions thrown: None
*/
string Model::translateSingleVowel(char singleVowel){
    std::string result = std::string(1, singleVowel);
    return result;
}