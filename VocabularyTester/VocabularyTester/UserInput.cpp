#include "UserInput.h"

#include <iostream>

const std::string UserInput::getUserInput()
{
	std::cin >> _userInput;
	return _userInput;
}
