/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This class is the implementation for the File Processor class that 
processes all the files needed for the assignment

High Level Decisions Used:
I decided to use fstream to handle all the files. I used fstream to
do things such as create an HTML webpage and output all the needed
data to it for a website
*/

//Import Requirements
#include "FileProcessor.h"
#include "Translator.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/*
Name Of Function: FileProcessor class constructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
FileProcessor::FileProcessor(){
    //Define translator object
    translator = new Translator();
}

/*
Name Of Function: FileProcessor class deconstructor

Description of Value Returned: None

Description of Parameters: None

Description of exceptions thrown: None
*/
FileProcessor::~FileProcessor(){
    //Delete translator from memory
    if(translator != NULL){
        delete translator;
    }
}

/*
Name Of Function: processFile

Description of Value Returned: This is a void method so it does not return anything

Description of Parameters: The first parameter is a string value called inputFileName
that takes in an input file name that will contain the english version of text
that will be translated to robber language text. The second parameter is a string value
called outputFileName which is just the name of the file the robber language text
will be outputted to.

Description of exceptions thrown: None
*/
void FileProcessor::processFile(std::string inputFileName, std::string outputFileName){
    std::string result = "";
    std::fstream inputFile;
    std::string currentLine;
    
    //Open the input file, loop through each line and translate the sentence then append to the result
    inputFile.open(inputFileName, ios::in);
    for(std::string line; getline(inputFile, line);){
        currentLine += line + "\n";
        result += translator->translateEnglishSentence(line);
    }
    inputFile.close();

    //Open the output file in output mode then append result and close the file
    std::fstream outputFile;
    outputFile.open(outputFileName, ios::out);
    outputFile << result;
    outputFile.close();
    
    //Create a new html file, fill in all the information for a webpage, then close the file
    ofstream webpageFile("webpage.html");
    webpageFile << "<!DOCTYPE html>\n<html>\n<head>\n</head>\n<body>\n<p><b>";
    webpageFile << currentLine;
    webpageFile << "</b></p>\n<break><p><i>";
    webpageFile << result;
    webpageFile << "</i></p>\n</body>";
    webpageFile.close();
}