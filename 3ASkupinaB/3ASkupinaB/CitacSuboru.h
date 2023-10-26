#pragma once
#include <string>

class CitacSuboru
{
private:
	std::ifstream* _subor = nullptr;
	std::string _nazovSuboru;
	int* _poleCisel = nullptr;
	int _pocetCisel;

public:
	CitacSuboru(const std::string& nazovSuboru);
	void nacitajCisla();
	int vratNajvacsieCislo();
	~CitacSuboru();
};

