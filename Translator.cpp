/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This classes main purpose is to translate sentences to the robber language

High Level Decisions Used:
I decided to put all the consonants into a string, then use the .find() method to check
each char in to see if it is a consonant or not.
*/

//Import Requirements
#include "Translator.h"
#include <iostream>
#include <cstdlib>
#include <string> 

using namespace std;

/*
Name Of Function: Translator class constructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
Translator::Translator(){
    model = new Model();
}

/*
Name Of Function: Translator class destructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
Translator::~Translator(){
    //Delete model class for memory purposed
    if(model != NULL){
        delete model;
    }
}

/*
Name Of Function: Translate

Description of Value Returned: The overall result of the translated string that was
appended to with the robber language translated text is here as a string value.

Description of Parameters: The parameter takes in the string value that will be translated
to robber language.

Description of exceptions thrown: None
*/
std::string Translator::Translate(std::string stringToTranslate){
    //Declare all consonants
    std::string allConsonants = "bcdfghjklmnpqrstvwxyz";
    std::string result = "";
    //Loop through the string that will be translated
    for(int i = 0; i < stringToTranslate.length(); i++){
        //Check all consonants and see if it is one
        bool isSubstring = allConsonants.find(stringToTranslate[i]) != std::string::npos;
        if(isSubstring){
            //Append to result string if it is a consonant
            result += model->translateSingleConsonant(stringToTranslate[i]);
        }else{
            //Append to string if anything else
            result += model->translateSingleVowel(stringToTranslate[i]);
            }
    }
    return result;
}
/*
Name Of Function: translateEnglishWord

Description of Value Returned: The translated version of the string taken into the 
method is returned as a string value.

Description of Parameters: The parameter is a string value that is a single english
word that will be translated.

Description of exceptions thrown: None
*/
string Translator::translateEnglishWord(string singleEnglishWord){
    return Translate(singleEnglishWord);
}

/*
Name Of Function: translateEnglishSentence

Description of Value Returned: The translated version of the string taken into the 
method is returned as a string value.

Description of Parameters: The parameter is a string value that is an english
sentence that will be translated.

Description of exceptions thrown: None
*/
string Translator::translateEnglishSentence(string singleEnglishSentence){
    return Translate(singleEnglishSentence);
}