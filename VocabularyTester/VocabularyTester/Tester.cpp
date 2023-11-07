#include "Tester.h"

void Tester::startTest(WordArray& array, UserInput& userInput)
{
    array.writeSentence();
    std::string input = userInput.getUserInput();
    array.compare(input);
}
