#include <iostream>
#include "WordArray.h"
#include "Tester.h"

int main()
{
    WordArray words;
    UserInput userInput;
    Tester tester;
    while (words.getCounter() != words.getSize())
    {
        tester.startTest(words, userInput);
    }
}

