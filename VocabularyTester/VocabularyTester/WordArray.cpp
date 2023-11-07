#include "WordArray.h"

#include <iostream>

WordArray::WordArray()
{
	_wordArray = {
		"conductor", "wire", "electric charge", "insulator", "electric current",
		"semiconductor", "integrated circuit", "silicon wafer", "transistor", "resistor", 
		"capacitor", "bandwidth", "to bond", "wave-guide", "breakthrough" 
	};
	_sentences = {
		"1. A material or an object that allows free movement of electrons and therefore allows easy flow of electricity",
		"2. A metal conductor that carries electricity over a distance",
		"3. The amount of electricity that an electrical device stores or a substance carries",
		"4. A material or an object that does not conduct electricity",
		"5. Movement of electricity in a particular direction",
		"6. A material that is neither a good conductor of electricity nor a good insulator",
		"7. A microelectronic device that integrates elements as transistors, resistors etc. into an electric circuit having a specific function",
		"8. A thin slice of semiconducting material as silicon crystal on which microcircuits are constructed",
		"9. Regulates current flow or voltage and acts as a switch or gate for electronic signals",
		"10. An electrical device that limits or regulates the flow of current in a circuit",
		"11. An electric circuit element which stores charge temporarily or lets pass through only the alternating current",
		"12. The width of the range or band of frequencies needed for signal processing",
		"13. To link",
		"14. A hollow metal conductor that provides a path to guide microwaves",
		"15. An important discovery that helps to improve a situation or gives answer to the problem"

	};
}

void WordArray::compare(std::string userInput)
{
	if (_counter == 8)
	{
		if (userInput == "condenser" || userInput == "capacitor")
		{
			_counter++;
			_pointCounter++;
			std::cout << _pointCounter << '/' << _sentences.size() << '\n' << '\n';
			return;
		}
	}
	if (_wordArray[_counter] == userInput)
	{
		_counter++;
		_pointCounter++;
		std::cout << _pointCounter << '/' << _sentences.size() << '\n' << '\n';
		return;
	}
	std::cout << "Right answer is:\t" << _wordArray[_counter] << '\n' << _pointCounter << '/' << _sentences.size() << '\n' << '\n';
	_counter++;
}

void WordArray::writeSentence()
{
	std::cout << _sentences[_counter] << '\n';
}

int WordArray::getSize()
{
	return _sentences.size();
}

int WordArray::getCounter()
{
	return _counter;
}

WordArray::~WordArray()
{
}
