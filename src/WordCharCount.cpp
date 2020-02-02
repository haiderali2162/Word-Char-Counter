#include "WordCharCount.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

WordCharCount::WordCharCount()
{}


WordCharCount::WordCharCount(string fileName){

    if(openFile(fileName))
    {
        cout << "File Opened Successfully" << endl;
    }
    else cout << "Error while opening file" << endl;
}


bool WordCharCount::openFile(string fileName)
{
    m_file.open(fileName, ios::in);


    if(!m_file){
        cerr << "Error while opening file" << endl;
        return false;
    }


    return true;
}


int WordCharCount::countWords(){

    int numberOfWords = 0;

    string word;


    while(m_file >> word)
    {
        ++numberOfWords;
    }


    m_file.close();

    return numberOfWords;

}


int WordCharCount::countChars(){

    int numberOfChars = 0;

    string line;

    while(getline(m_file, line)){

        numberOfChars += line.length();
    }

    m_file.close();

    return numberOfChars;

}

int WordCharCount::countCharsWithoutSpaces(){

    int numberOfChars = 0;

    char c;

    while(m_file >> c)
    {
        ++numberOfChars;
    }

    m_file.close();


    return numberOfChars;
}










