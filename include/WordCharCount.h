#ifndef WORDCHARCOUNT_H
#define WORDCHARCOUNT_H
#include <fstream>
#include <string>
using namespace std;

class WordCharCount
{
    public:
        WordCharCount();
        WordCharCount(string fileName);
        bool openFile(string fileName);
        int countWords();
        int countChars();
        int countCharsWithoutSpaces();


    private:
        ifstream m_file;
};

#endif // WORDCHARCOUNT_H
