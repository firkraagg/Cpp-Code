#pragma once
#include <string>
#include <vector>
#include <iostream>

class WordArray
{
private:
	std::vector<std::string> _wordArray;
	std::vector<std::string> _sentences;
	int _counter = 0;
	int _pointCounter = 0;
public:
	WordArray();
	std::string userInput;
	void compare(const std::string userInput);
	void writeSentence();
	int getSize();
	int getCounter();
	~WordArray();
};

