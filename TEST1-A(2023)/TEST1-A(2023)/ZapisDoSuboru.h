#pragma once
#include <fstream>

#include "PoleCisel.h"

class ZapisDoSuboru
{
private:
	std::string _nazovSuboru;
	std::ofstream* _subor = nullptr;

public:
	ZapisDoSuboru(const std::string& nazovSuboru);
	void zapis(PoleCisel* poleCisel);
	~ZapisDoSuboru();

};

