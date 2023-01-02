/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This is where I defined all the methods and variables that will be used in the
File Processor class

High Level Decisions Used:
I decided to create a pointer to the Translator class so that
I could implement its methods within the FileProcessor class
*/

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

//Import Requirements
#include <string>
#include "Translator.h"

class FileProcessor{
    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(std::string inputFileName, std::string outputFileName);
    private:
        Translator* translator;
};

#endif