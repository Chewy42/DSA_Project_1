/*
Name: Matt Favela
Student ID #: 2390407
Email: mfavela@chapman.edu
Course Number and Section: CPSC350-03
Assignment: PA1

Brief Overview:
This class takes in command line arguments and utilizes the 
FileProcessor class to carry out the translation and file
processing

High Level Decisions Used:
I decided to use arg value 1 and 2 because the first index of the arg value
input is always the initial command
*/
//Import Requirements
#include "Main.h"
#include "FileProcessor.h"
using namespace std;

/*
Name Of Function: main

Description of Value Returned: The value returned is an int value of 0 because
it is a main method that will not really be returning anything we need

Description of Parameters: The first parameter is an integer value called 
argc which is a command line argument that stands for arg count which is just
the count of all command line arguments. The second parameter is a character 
pointer pointer called argv which stands for arg value and allows you to index it
for the command line arguments

Description of exceptions thrown: None
*/
int main(int argc, char** argv){
    FileProcessor fileProcessor = FileProcessor();
    //Run the process file method with command line arguments
    fileProcessor.processFile(argv[1], argv[2]);

    return 0;
}