#pragma once
#include <string>

class CitacSuboru
{
private:
	std::ifstream* _subor = nullptr;
	int* _poleCisel = nullptr;
	std::string _nazovSuboru;
	int _pocetCisel;

public:
	CitacSuboru(const std::string& nazovSuboru);
	void nacitajCisla();
	int vratNajvacsieCislo();
	~CitacSuboru();
};

