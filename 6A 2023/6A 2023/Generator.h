#pragma once
#include <vector>

class Generator
{
private:
	std::vector<int> poleCisel;
	int min;
	int max;

public:
	Generator(int pMin, int pMax);
	void vygenerujCisla(int pocetCisel);
	const std::vector<int>& getCisla();
};

