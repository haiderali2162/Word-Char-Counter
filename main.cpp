#include <iostream>
#include "WordCharCount.h"
using namespace std;

int main()
{
    WordCharCount *w = NULL;

    w = new WordCharCount("data.txt");

    cout << w->countChars() << endl;
}
